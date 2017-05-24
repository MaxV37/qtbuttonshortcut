#include "dialog.h"
#include "ui_dialog.h"

#include <QApplication>
#include <QDebug>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked() {
    qDebug() << "click!";
}

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    Dialog dialog;
    dialog.show();
    return app.exec();
}
