#include "login.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>

LoginPage::LoginPage(QWidget *parent)
    : QWidget(parent)

{
    auto *layout = new QVBoxLayout(this);
    auto *label = new QLabel("Login Page");
    loginButton = new QPushButton("Login");

    layout->addWidget(label);
    layout->addWidget(loginButton);
}
