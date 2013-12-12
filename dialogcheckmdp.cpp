#include "dialogcheckmdp.h"
#include "ui_dialogcheckmdp.h"

DialogCheckMdp::DialogCheckMdp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogCheckMdp)
{
    ui->setupUi(this);
    OuvreBaseSqlite2();

     QSqlQuery req=this->baseSqlite2.exec("select user from param");
     req.first();
     ui->label_2->setText(req.value(0).toString());
}

DialogCheckMdp::~DialogCheckMdp()
{
    baseSqlite2.close();
    baseSqlite2.removeDatabase("QSQLITE");
    delete ui;
}

void DialogCheckMdp::on_pushButtonAnnuler_clicked()
{
        ((MainWindow *)parent())->setIndex(0);
        this->close();
}

void DialogCheckMdp::on_pushButtonValier_clicked()
{
    QSqlQuery req=this->baseSqlite2.exec("select mdp from param");
    req.first();
    if(ui->lineEdit->text()==req.value(0).toString())
    {
       ((MainWindow *)parent())->chargerOption();
        this->close();

    }
    else
    {
        setStyleSheet("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0,150), stop:1 rgba(243, 83, 94, 150));"); // change la couleur de fond

    }
}

void DialogCheckMdp::OuvreBaseSqlite2()
{
    baseSqlite2=QSqlDatabase::addDatabase("QSQLITE");
    //nom fichier qui contient la base sqlite3
    baseSqlite2.setDatabaseName("paramSqlClient.db");

    //ouverture de la base de données
    baseSqlite2.open();

    //si la baseSqlite2 ne s'est pas ouverte correctement
    if(baseSqlite2.isOpen() != true){
            QMessageBox::critical(this, "Erreur critique", "Impossible d'ouvrir la baseSqlite2 de données.");
        }
    else
    {
            this->VerifBaseSQlite2();

    }
}

void DialogCheckMdp::VerifBaseSQlite2()
{
    this->baseSqlite2.exec("select server,port,user,mdp from param;");


    if (this->baseSqlite2.lastError().number()>0)//si la requete renvoie une erreur
    {
        this->baseSqlite2.exec("drop table if exists param");
        this->baseSqlite2.exec("create table param(server varchar(20),port varchar(5),user varchar(25),mdp varchar(40));");
        this->baseSqlite2.exec("insert into param values('127.0.0.1','3306','root','ini01')");


    }
}
