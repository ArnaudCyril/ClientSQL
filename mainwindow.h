#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QListWidgetItem>
#include <QSqlTableModel>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setIndex(int);
    void chargerOption();


    
private slots:

    void on_lineEditAdresse_cursorPositionChanged(int arg1, int arg2);

    void on_lineEditPort_cursorPositionChanged(int arg1, int arg2);

    void on_lineEditNomU_cursorPositionChanged(int arg1, int arg2);

    void on_lineEditMdp_cursorPositionChanged(int arg1, int arg2);

    void on_listWidgetConnexion_itemClicked(QListWidgetItem *item);

    void on_tabWidget_currentChanged(int index);

    void on_comboBoxTables_currentIndexChanged(int index);

    void on_textEditRequette_selectionChanged();

    void on_pushButtonEnvoyerRequette_clicked();

    void on_pushButtonParcourirScipt_clicked();

    void on_pushButtonEnvoyerScript_clicked();

    void on_textEditScript_cursorPositionChanged();

    void on_pushButtonOkParam_clicked();

    void on_pushButtonChargerConnect_clicked();

    void on_checkBox_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase baseSqlite;
    QSqlDatabase base;
    bool possible;
    QString LaBase;
    int passe,cindex;
    void connctBase();
    void OuvreBaseSqlite();
    void VerifBaseSQlite();
    void CloseBase();
    void connectIfPossible();
    void chargerTables();
    void chargerRequette();
    void Warning();
    void checkMdp();
    QSqlTableModel * modelTable;
    QSqlQueryModel * modelReq;
    bool doWarning;

};

#endif // MAINWINDOW_H
