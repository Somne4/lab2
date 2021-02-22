#include "bookadress.h"
#include "ui_bookadress.h"

Bookadress::Bookadress(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Bookadress)
{
    ui->setupUi(this);

    connect(ui->lineEdit_Name, &QLineEdit::textEdited, this, &Bookadress::markUnsavedChanges);
    connect(ui->lineEdit_secName, &QLineEdit::textEdited, this, &Bookadress::markUnsavedChanges);
    connect(ui->lineEdit_Patronymic, &QLineEdit::textEdited, this, &Bookadress::markUnsavedChanges);
    connect(ui->lineEdit_Adress, &QLineEdit::textEdited, this, &Bookadress::markUnsavedChanges);
    connect(ui->lineEdit_MobPhone, &QLineEdit::textEdited, this, &Bookadress::markUnsavedChanges);
    connect(ui->lineEdit_HomePhone, &QLineEdit::textEdited, this, &Bookadress::markUnsavedChanges);
    connect(ui->plainTextEdit_others, &QPlainTextEdit::textChanged, this, &Bookadress::markUnsavedChanges);

    connect(ui->pushButton_save, &QPushButton::clicked, this, &Bookadress::save);
}

Bookadress::~Bookadress()
{
    delete ui;
}

void Bookadress::save()
{
    ui->pushButton_save->setText("Сохранить");
}

void Bookadress::markUnsavedChanges()
{
    ui->pushButton_save->setText("Сохранить*");
}
