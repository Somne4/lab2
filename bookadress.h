#ifndef BOOKADRESS_H
#define BOOKADRESS_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Bookadress; }
QT_END_NAMESPACE

class Bookadress : public QWidget
{
    Q_OBJECT

public:
    Bookadress(QWidget *parent = nullptr);
    ~Bookadress();

private:
    Ui::Bookadress *ui;
};
#endif // BOOKADRESS_H
