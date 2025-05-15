#ifndef HOME_H
#define HOME_H

#include <QWidget>
#include <QPushButton>

class QPushButton;


class HomePage : public QWidget
{
    Q_OBJECT

public:
    explicit HomePage(QWidget *parent = nullptr);
    QPushButton *logoutButton;

};

#endif // HOME_H
