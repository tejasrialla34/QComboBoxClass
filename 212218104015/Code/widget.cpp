#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
#include<QIcon>
#include<QStringList>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QStringList list;
        list <<"Fruits"<<"Apple"<<"Orange"<<"papaya"<<"JackFruit";
        ui->comboBox->setStyleSheet("background-color: rgb(0, 0, 0) ; color: rgb(0, 255, 255);");
        ui->comboBox->setEditable(true);
        for(int i=0;i<list.size();i++)
        {
        ui->comboBox->addItem(QIcon("C:/Users/Lenovo/OneDrive/Documents/QComboBoxClass/icon.jpg"),list.at(i));
        }
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_CaptureValuespushButton_clicked()
{
    qDebug()<<"The Currently Chosen Item is: "<<ui->comboBox->currentText();
    qDebug()<<"\nThe Index is: "<<QString::number(ui->comboBox->currentIndex());
}

void Widget::on_SetValuespushButton_clicked()
{
    ui->comboBox->setCurrentIndex(4);
}

void Widget::on_GetValuespushButton_clicked()
{
    qDebug()<<"The combo box currently has"<<QString::number(ui->comboBox->count())<<"Items.They are";
        for(int i=0;i<ui->comboBox->count();i++)
        {
         qDebug()<<"Index"<<QString::number(i)<<":"<<ui->comboBox->itemText(i);
        }
}
