#include "home.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>

HomePage::HomePage(QWidget *parent)
    : QWidget(parent)
{
    auto *layout = new QVBoxLayout(this);
    auto *label = new QLabel("Home Page");
    logoutButton = new QPushButton("Logout");

    layout->addWidget(label);
    layout->addWidget(logoutButton);
}

