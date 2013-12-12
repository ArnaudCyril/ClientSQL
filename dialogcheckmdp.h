#ifndef DIALOGCHECKMDP_H
#define DIALOGCHECKMDP_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QMessageBox>
#include <QTextCodec>
#include <QFileDialog>
#include <QTextStream>
#include <QSqlError>
#include "mainwindow.h"
namespace Ui {
class DialogCheckMdp;
}

class DialogCheckMdp : public QDialog
{
    Q_OBJECT

public:
    explicit DialogCheckMdp(QWidget *parent = 0);
    ~DialogCheckMdp();

private slots:
    void on_pushButtonAnnuler_clicked();

    void on_pushButtonValier_clicked();

private:
    Ui::DialogCheckMdp *ui;
    QSqlDatabase baseSqlite2;
    void OuvreBaseSqlite2();
    void VerifBaseSQlite2();

};

#endif // DIALOGCHECKMDP_H
