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

    //apply styles
   loginButton->setStyleSheet(R"(
QPushButton {
background-color: #ed28a5;
color: black;
max-width:80px;
max-height: 30px;
margin-bottom: 10px;
margin-left: 20px;
border: none;
border-radius: 10px;
font-size: 18px;
}

QPushButton:hover {
background-color: #bf0079;
}

QPushButton:pressed {
background-color: #e8276e;
}
 )");

    layout->addWidget(label);
    layout->addWidget(loginButton);
}
