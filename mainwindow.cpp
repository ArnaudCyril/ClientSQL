#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QTextCodec>
#include <QFileDialog>
#include <QTextStream>
#include <QSqlError>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    OuvreBaseSqlite();
    possible=true;
    ui->tabWidget->setCurrentIndex(0);
    ui->labelConnexion->setStyleSheet("color : red;font: italic 16pt 'Courier 10 Pitch';");
    ui->textEditRequetteResult->setVisible(false);
    //QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    passe=0;doWarning=true;
  // QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    ui->lineEditMdp->setEchoMode(QLineEdit::Password);
    ui->lineEditPort->setText("3306");

}

MainWindow::~MainWindow()
{
    CloseBase();
    delete ui;
}

void MainWindow::setIndex(int i)
{
    ui->tabWidget->setCurrentIndex(i);
}

void MainWindow::connctBase()
{
    base=QSqlDatabase::addDatabase("QMYSQL");
    base.setHostName(ui->lineEditAdresse->text());
    base.setUserName(ui->lineEditNomU->text());
    base.setPassword(ui->lineEditMdp->text());
    base.setPort(ui->lineEditPort->text().toInt());

}
void MainWindow::CloseBase()
{
    base.close();
}

void MainWindow::OuvreBaseSqlite()
{
    base.removeDatabase("QMYSQL");
    baseSqlite=QSqlDatabase::addDatabase("QSQLITE");
    //nom fichier qui contient la base sqlite3
    baseSqlite.setDatabaseName("paramSqlClient.db");

    //ouverture de la base de données
    baseSqlite.open();

    //si la baseSqlite ne s'est pas ouverte correctement
    if(baseSqlite.isOpen() != true){
            QMessageBox::critical(this, "Erreur critique", "Impossible d'ouvrir la baseSqlite de données.");
        }
    else
    {
            this->VerifBaseSQlite();

    }

}

void MainWindow::VerifBaseSQlite()
{

    this->baseSqlite.exec("select server,port,user,mdp from param;");


    if (this->baseSqlite.lastError().number()>0)//si la requete renvoie une erreur
    {
        this->baseSqlite.exec("drop table if exists param");
        this->baseSqlite.exec("create table param(server varchar(20),port varchar(5),user varchar(25),mdp varchar(40));");
        this->baseSqlite.exec("insert into param values('127.0.0.1','3306','root','ini01')");


    }
}
void MainWindow::chargerOption()
{
    base.close();
    base.removeDatabase("QMYSQL"); // will output a warning

    OuvreBaseSqlite();
    ui->lineEditOptionPort->clear();
    ui->lineEditOptionServer->clear();
    ui->lineEditOptionUser->clear();
    ui->lineEditMdpOption->clear();
    QSqlQuery req=this->baseSqlite.exec("select * from param");
    while(req.next())
    {
        ui->lineEditOptionPort->setText(req.value(1).toString());
        ui->lineEditOptionServer->setText(req.value(0).toString());
        ui->lineEditOptionUser->setText(req.value(2).toString());
        ui->lineEditMdpOption->setText(req.value(3).toString());
    }
}

void MainWindow::connectIfPossible()
{
    ui->listWidgetConnexion->clear();
    if(ui->lineEditAdresse->text().length()*ui->lineEditMdp->text().length()*ui->lineEditNomU->text().length()*ui->lineEditPort->text().length()>0 and possible)
    {
        connctBase();

        if(base.open())
        {
            ui->labelConnexion->setText("Connecté");
            ui->labelConnexion->setStyleSheet("color : green;font: italic 16pt 'Courier 10 Pitch';");
          QSqlQuery req("show databases");
          while(req.next())
            {
            ui->listWidgetConnexion->addItem(req.value(0).toString());
            }
        }
        else
        {
            ui->labelConnexion->setText("Pas de connexion");
            ui->labelConnexion->setStyleSheet("color : red;font: italic 16pt 'Courier 10 Pitch';");

        }
    }

}

void MainWindow::chargerTables()
{

    if(base.open())
    {
        ui->labelConnexion->setText("Connecté");
        ui->labelConnexion->setStyleSheet("color : green;font: italic 16pt 'Courier 10 Pitch';");
    }
    else
     {
        ui->labelConnexion->setText("Pas de connexion");
        ui->labelConnexion->setStyleSheet("color : red;font: italic 16pt 'Courier 10 Pitch';");
    }
    ui->comboBoxTables->clear();
    ui->labelBaseName->setText(base.databaseName());
    QSqlQuery req("show tables");
    while(req.next())
    {

        ui->comboBoxTables->addItem(req.value(0).toString());
    }


}


void MainWindow::chargerRequette()
{

    ui->labelNomBase2->setText(base.databaseName());
    ui->textEditRequette->setStyleSheet("color:#999999");
    ui->textEditRequette->setText("Tapez votre requette : ");


}

void MainWindow::Warning()
{
    if(base.databaseName()=="")
    {
    QMessageBox::critical(this,"Attention","Veuillez sélectionneer une base ! ");
    ui->tabWidget->setCurrentIndex(0);
    }
}



void MainWindow::on_lineEditAdresse_cursorPositionChanged(int arg1, int arg2)
{
    connectIfPossible();
}

void MainWindow::on_lineEditPort_cursorPositionChanged(int arg1, int arg2)
{
    connectIfPossible();
}

void MainWindow::on_lineEditNomU_cursorPositionChanged(int arg1, int arg2)
{
    connectIfPossible();
}

void MainWindow::on_lineEditMdp_cursorPositionChanged(int arg1, int arg2)
{
    connectIfPossible();
}

void MainWindow::on_listWidgetConnexion_itemClicked(QListWidgetItem *item)
{
    base.setDatabaseName(item->text());
    base.exec("use "+item->text());
    LaBase=item->text();
    ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_tabWidget_currentChanged(int index)
{
    if(index==0)
    {
        connectIfPossible();
    }
    if(index==1)
    {

        doWarning=false;
        chargerTables();
        if(passe==0)
        {
            passe=1;
            doWarning=false;
            ui->tabWidget->setCurrentIndex(2);
            ui->tabWidget->setCurrentIndex(1);


        }
        else
        {
            doWarning=true;
            Warning();
            passe=0;
        }


    }
    if(index==2)
    {
       if(doWarning)Warning();

        chargerRequette();
    }
    if(index==3)
    {
        Warning();

    }
    else
    {
        ui->pushButtonEnvoyerScript->setEnabled(false);
    }
    if(index==4)
    {
        chargerOption();
        cindex=4;
    }
    else
    {
        if(cindex==4)
        {
            connectIfPossible();
            base.setDatabaseName(LaBase);
            base.exec("use "+LaBase);
            cindex=0;
        }
    }




}

void MainWindow::on_comboBoxTables_currentIndexChanged(int index)
{
    modelTable= new QSqlTableModel(this);
    modelTable->setTable(ui->comboBoxTables->currentText());
    modelTable->setEditStrategy(QSqlTableModel::OnRowChange);
    modelTable->select();
    ui->tableViewCOntenuTables->setModel(modelTable);

}


void MainWindow::on_textEditRequette_selectionChanged()
{
    if(ui->textEditRequette->toPlainText()=="Tapez votre requette : ")
    {

        ui->textEditRequette->clear();
        ui->textEditRequette->setStyleSheet("color : black");
    }
}

void MainWindow::on_pushButtonEnvoyerRequette_clicked()
{
    ui->textEditRequetteResult->setVisible(false);
    modelReq=new QSqlQueryModel(this);
    modelReq->setQuery(ui->textEditRequette->toPlainText());

    if(this->modelReq->lastError().text()==" ")
    {
        ui->tableViewRequette->setModel(modelReq);
    }
    else
    {
        ui->textEditRequetteResult->setVisible(true);
        ui->textEditRequetteResult->setText(modelReq->lastError().text());
    }
}

void MainWindow::on_pushButtonParcourirScipt_clicked()
{


    QString fileName = QFileDialog::getOpenFileName(this,tr("Ajouter un script"), "/home/","*.sql");
    QFile fichier(fileName);
    fichier.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream flux(&fichier);
    ui->textEditScript->setText(flux.readAll());
    ui->lineEditAdresseScript->setText(fileName);
}

void MainWindow::on_pushButtonEnvoyerScript_clicked()
{
    this->base.exec(ui->textEditScript->toPlainText());
   if(this->base.lastError().text()==" ")
   {
    ui->textEditScript->clear();
    ui->lineEditAdresseScript->clear();
    QMessageBox::information(this, "Bravo", "Script execté avec succès");

   }
   else
   {
       QMessageBox::critical(this, "Attention", "Erreur lors de l'injection du srcipt , Erreur MYSQL :  \r\n\r\n"+base.lastError().text());
   }

}



void MainWindow::on_textEditScript_cursorPositionChanged()
{
    if(ui->textEditScript->toPlainText().length()>0)
    {
        ui->pushButtonEnvoyerScript->setEnabled(true);
    }
    else
    {
        ui->pushButtonEnvoyerScript->setEnabled(false);
    }
}

void MainWindow::on_pushButtonOkParam_clicked()
{
    QSqlQuery req("update param set server='"+ui->lineEditOptionServer->text()+"' ,port='"+ui->lineEditOptionPort->text()+"' ,user='"+ui->lineEditOptionUser->text()+"' ,mdp='"+ui->lineEditMdpOption->text()+"'");
    QMessageBox::information(this,"Bravo","Changements Enregistrés");
    ui->tabWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButtonChargerConnect_clicked()
{
    ui->listWidgetConnexion->clear();
    base.close();
    baseSqlite.open();
    possible=false;
    QSqlQuery req=this->baseSqlite.exec("select * from param");
    while(req.next())
    {
        ui->lineEditPort->setText(req.value(1).toString());
        ui->lineEditAdresse->setText(req.value(0).toString());
        ui->lineEditNomU->setText(req.value(2).toString());
        ui->lineEditMdp->setText(req.value(3).toString());
    }
    baseSqlite.close();
    baseSqlite.removeDatabase("QSQLITE");
    possible=true;
    connectIfPossible();
}

void MainWindow::on_checkBox_clicked()
{
    if(ui->checkBox->isChecked())ui->lineEditMdp->setEchoMode(QLineEdit::Normal);
    else ui->lineEditMdp->setEchoMode(QLineEdit::Password);
}
