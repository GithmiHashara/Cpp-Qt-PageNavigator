#include "welcome.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>


WelcomePage::WelcomePage(QWidget *parent)
    : QWidget(parent)
{
    auto *layout = new QVBoxLayout(this);
    auto *label = new QLabel("Welcome to the App!");
    startButton = new QPushButton("Start");

    layout->addWidget(label);
    layout->addWidget(startButton);
}
