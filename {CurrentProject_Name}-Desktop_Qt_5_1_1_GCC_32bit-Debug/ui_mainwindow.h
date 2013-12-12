/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_31;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLabel *labelConnexion;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditAdresse;
    QLineEdit *lineEditPort;
    QLineEdit *lineEditNomU;
    QLineEdit *lineEditMdp;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QListWidget *listWidgetConnexion;
    QPushButton *pushButtonChargerConnect;
    QWidget *tab_2;
    QTableView *tableViewCOntenuTables;
    QLabel *label_7;
    QComboBox *comboBoxTables;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *labelBaseName;
    QWidget *tab_3;
    QTableView *tableViewRequette;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonEnvoyerRequette;
    QTextEdit *textEditRequetteResult;
    QTextEdit *textEditRequette;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QLabel *labelNomBase2;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEditAdresseScript;
    QPushButton *pushButtonParcourirScipt;
    QVBoxLayout *verticalLayout_6;
    QTextEdit *textEditScript;
    QPushButton *pushButtonEnvoyerScript;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_30;
    QVBoxLayout *verticalLayout_29;
    QLabel *label_43;
    QHBoxLayout *horizontalLayout_19;
    QVBoxLayout *verticalLayout_26;
    QLabel *label_23;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_38;
    QVBoxLayout *verticalLayout_25;
    QLineEdit *lineEditOptionServer;
    QLineEdit *lineEditOptionPort;
    QLineEdit *lineEditOptionUser;
    QLineEdit *lineEditMdpOption;
    QLabel *label_8;
    QPushButton *pushButtonOkParam;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(783, 477);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_31 = new QVBoxLayout(centralWidget);
        verticalLayout_31->setSpacing(6);
        verticalLayout_31->setContentsMargins(11, 11, 11, 11);
        verticalLayout_31->setObjectName(QStringLiteral("verticalLayout_31"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QStringLiteral("background:linear-gradient(blue,black);"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 251, 41));
        label->setStyleSheet(QStringLiteral("font: 14pt \"Liberation Serif\";"));
        labelConnexion = new QLabel(tab);
        labelConnexion->setObjectName(QStringLiteral("labelConnexion"));
        labelConnexion->setGeometry(QRect(30, 300, 211, 71));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 100, 250, 110));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout_2->addWidget(label_15);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));

        verticalLayout_2->addWidget(label_16);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEditAdresse = new QLineEdit(layoutWidget);
        lineEditAdresse->setObjectName(QStringLiteral("lineEditAdresse"));

        verticalLayout->addWidget(lineEditAdresse);

        lineEditPort = new QLineEdit(layoutWidget);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));

        verticalLayout->addWidget(lineEditPort);

        lineEditNomU = new QLineEdit(layoutWidget);
        lineEditNomU->setObjectName(QStringLiteral("lineEditNomU"));

        verticalLayout->addWidget(lineEditNomU);

        lineEditMdp = new QLineEdit(layoutWidget);
        lineEditMdp->setObjectName(QStringLiteral("lineEditMdp"));

        verticalLayout->addWidget(lineEditMdp);


        horizontalLayout->addLayout(verticalLayout);

        layoutWidget1 = new QWidget(tab);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(330, 90, 401, 321));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_3->addWidget(label_6);

        listWidgetConnexion = new QListWidget(layoutWidget1);
        listWidgetConnexion->setObjectName(QStringLiteral("listWidgetConnexion"));
        listWidgetConnexion->setAlternatingRowColors(true);

        verticalLayout_3->addWidget(listWidgetConnexion);

        pushButtonChargerConnect = new QPushButton(tab);
        pushButtonChargerConnect->setObjectName(QStringLiteral("pushButtonChargerConnect"));
        pushButtonChargerConnect->setGeometry(QRect(30, 250, 231, 41));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableViewCOntenuTables = new QTableView(tab_2);
        tableViewCOntenuTables->setObjectName(QStringLiteral("tableViewCOntenuTables"));
        tableViewCOntenuTables->setGeometry(QRect(11, 49, 731, 371));
        tableViewCOntenuTables->horizontalHeader()->setCascadingSectionResizes(false);
        tableViewCOntenuTables->horizontalHeader()->setMinimumSectionSize(19);
        tableViewCOntenuTables->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableViewCOntenuTables->horizontalHeader()->setStretchLastSection(true);
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(9, 408, 16, 16));
        comboBoxTables = new QComboBox(tab_2);
        comboBoxTables->setObjectName(QStringLiteral("comboBoxTables"));
        comboBoxTables->setGeometry(QRect(328, 8, 411, 30));
        comboBoxTables->setMinimumSize(QSize(0, 30));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(200, 20, 111, 16));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 20, 40, 16));
        label_5->setMaximumSize(QSize(40, 16777215));
        labelBaseName = new QLabel(tab_2);
        labelBaseName->setObjectName(QStringLiteral("labelBaseName"));
        labelBaseName->setGeometry(QRect(60, 20, 91, 16));
        labelBaseName->setMaximumSize(QSize(700, 16777215));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tableViewRequette = new QTableView(tab_3);
        tableViewRequette->setObjectName(QStringLiteral("tableViewRequette"));
        tableViewRequette->setGeometry(QRect(30, 170, 711, 231));
        tableViewRequette->horizontalHeader()->setStretchLastSection(true);
        layoutWidget2 = new QWidget(tab_3);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(37, 120, 701, 32));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButtonEnvoyerRequette = new QPushButton(layoutWidget2);
        pushButtonEnvoyerRequette->setObjectName(QStringLiteral("pushButtonEnvoyerRequette"));
        pushButtonEnvoyerRequette->setMinimumSize(QSize(0, 30));

        horizontalLayout_4->addWidget(pushButtonEnvoyerRequette);

        textEditRequetteResult = new QTextEdit(tab_3);
        textEditRequetteResult->setObjectName(QStringLiteral("textEditRequetteResult"));
        textEditRequetteResult->setGeometry(QRect(30, 170, 711, 231));
        textEditRequette = new QTextEdit(tab_3);
        textEditRequette->setObjectName(QStringLiteral("textEditRequette"));
        textEditRequette->setGeometry(QRect(33, 37, 709, 70));
        layoutWidget3 = new QWidget(tab_3);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(35, 15, 201, 16));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget3);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_2->addWidget(label_9);

        labelNomBase2 = new QLabel(layoutWidget3);
        labelNomBase2->setObjectName(QStringLiteral("labelNomBase2"));

        horizontalLayout_2->addWidget(labelNomBase2);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_8 = new QVBoxLayout(tab_4);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        lineEditAdresseScript = new QLineEdit(tab_4);
        lineEditAdresseScript->setObjectName(QStringLiteral("lineEditAdresseScript"));
        lineEditAdresseScript->setEnabled(true);

        horizontalLayout_6->addWidget(lineEditAdresseScript);

        pushButtonParcourirScipt = new QPushButton(tab_4);
        pushButtonParcourirScipt->setObjectName(QStringLiteral("pushButtonParcourirScipt"));
        pushButtonParcourirScipt->setEnabled(true);

        horizontalLayout_6->addWidget(pushButtonParcourirScipt);


        verticalLayout_7->addLayout(horizontalLayout_6);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        textEditScript = new QTextEdit(tab_4);
        textEditScript->setObjectName(QStringLiteral("textEditScript"));

        verticalLayout_6->addWidget(textEditScript);

        pushButtonEnvoyerScript = new QPushButton(tab_4);
        pushButtonEnvoyerScript->setObjectName(QStringLiteral("pushButtonEnvoyerScript"));
        pushButtonEnvoyerScript->setEnabled(false);
        pushButtonEnvoyerScript->setMinimumSize(QSize(0, 40));

        verticalLayout_6->addWidget(pushButtonEnvoyerScript);


        verticalLayout_7->addLayout(verticalLayout_6);


        verticalLayout_8->addLayout(verticalLayout_7);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayout_30 = new QVBoxLayout(tab_5);
        verticalLayout_30->setSpacing(6);
        verticalLayout_30->setContentsMargins(11, 11, 11, 11);
        verticalLayout_30->setObjectName(QStringLiteral("verticalLayout_30"));
        verticalLayout_29 = new QVBoxLayout();
        verticalLayout_29->setSpacing(6);
        verticalLayout_29->setObjectName(QStringLiteral("verticalLayout_29"));
        label_43 = new QLabel(tab_5);
        label_43->setObjectName(QStringLiteral("label_43"));

        verticalLayout_29->addWidget(label_43);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setSpacing(6);
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        label_23 = new QLabel(tab_5);
        label_23->setObjectName(QStringLiteral("label_23"));

        verticalLayout_26->addWidget(label_23);

        label_36 = new QLabel(tab_5);
        label_36->setObjectName(QStringLiteral("label_36"));

        verticalLayout_26->addWidget(label_36);

        label_37 = new QLabel(tab_5);
        label_37->setObjectName(QStringLiteral("label_37"));

        verticalLayout_26->addWidget(label_37);

        label_38 = new QLabel(tab_5);
        label_38->setObjectName(QStringLiteral("label_38"));

        verticalLayout_26->addWidget(label_38);


        horizontalLayout_19->addLayout(verticalLayout_26);

        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setSpacing(6);
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        lineEditOptionServer = new QLineEdit(tab_5);
        lineEditOptionServer->setObjectName(QStringLiteral("lineEditOptionServer"));

        verticalLayout_25->addWidget(lineEditOptionServer);

        lineEditOptionPort = new QLineEdit(tab_5);
        lineEditOptionPort->setObjectName(QStringLiteral("lineEditOptionPort"));

        verticalLayout_25->addWidget(lineEditOptionPort);

        lineEditOptionUser = new QLineEdit(tab_5);
        lineEditOptionUser->setObjectName(QStringLiteral("lineEditOptionUser"));

        verticalLayout_25->addWidget(lineEditOptionUser);

        lineEditMdpOption = new QLineEdit(tab_5);
        lineEditMdpOption->setObjectName(QStringLiteral("lineEditMdpOption"));
        lineEditMdpOption->setEchoMode(QLineEdit::Password);

        verticalLayout_25->addWidget(lineEditMdpOption);


        horizontalLayout_19->addLayout(verticalLayout_25);


        verticalLayout_29->addLayout(horizontalLayout_19);


        verticalLayout_30->addLayout(verticalLayout_29);

        label_8 = new QLabel(tab_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMaximumSize(QSize(16777215, 50));

        verticalLayout_30->addWidget(label_8);

        pushButtonOkParam = new QPushButton(tab_5);
        pushButtonOkParam->setObjectName(QStringLiteral("pushButtonOkParam"));
        pushButtonOkParam->setMinimumSize(QSize(0, 40));

        verticalLayout_30->addWidget(pushButtonOkParam);

        tabWidget->addTab(tab_5, QString());
        pushButtonOkParam->raise();
        label_8->raise();

        verticalLayout_31->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "StormCrow", 0));
        label->setText(QApplication::translate("MainWindow", "Parametres de connexions :", 0));
        labelConnexion->setText(QApplication::translate("MainWindow", "Pas de connexion", 0));
        label_2->setText(QApplication::translate("MainWindow", "Adresse du serveur :", 0));
        label_15->setText(QApplication::translate("MainWindow", "Port :", 0));
        label_16->setText(QApplication::translate("MainWindow", "Nom d'utilisateur :", 0));
        label_4->setText(QApplication::translate("MainWindow", "Mot de Passe : ", 0));
        lineEditAdresse->setText(QString());
        lineEditPort->setText(QApplication::translate("MainWindow", "3306", 0));
        lineEditNomU->setText(QString());
        lineEditMdp->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "Liste des bases ", 0));
        pushButtonChargerConnect->setText(QApplication::translate("MainWindow", "Charger ma connection", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Connexion", 0));
        label_7->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Liste des tables : ", 0));
        label_5->setText(QApplication::translate("MainWindow", "Base : ", 0));
        labelBaseName->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Table", 0));
        pushButtonEnvoyerRequette->setText(QApplication::translate("MainWindow", "Envoyer", 0));
        textEditRequetteResult->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        textEditRequette->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; color:#999999;\">Tapez votre requette : </span></p></body></html>", 0));
        label_9->setText(QApplication::translate("MainWindow", "Base :", 0));
        labelNomBase2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Requete", 0));
        pushButtonParcourirScipt->setText(QApplication::translate("MainWindow", "Parcourir", 0));
        pushButtonEnvoyerScript->setText(QApplication::translate("MainWindow", "Envoyer", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Script", 0));
        label_43->setText(QApplication::translate("MainWindow", "Vos param\303\250tres de connection par d\303\251faut :", 0));
        label_23->setText(QApplication::translate("MainWindow", "Adresse du serveur : ", 0));
        label_36->setText(QApplication::translate("MainWindow", "Port :", 0));
        label_37->setText(QApplication::translate("MainWindow", "Nom d'utilisateur", 0));
        label_38->setText(QApplication::translate("MainWindow", "Mot de passe", 0));
        label_8->setText(QString());
        pushButtonOkParam->setText(QApplication::translate("MainWindow", "Enregistrer", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Option", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
