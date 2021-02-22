#include "bookadress.h"
#include "ui_bookadress.h"

Bookadress::Bookadress(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Bookadress)
{
    ui->setupUi(this);
}

Bookadress::~Bookadress()
{
    delete ui;
}

