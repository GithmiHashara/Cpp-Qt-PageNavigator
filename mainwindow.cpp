#include "mainwindow.h"
#include "welcome.h"
#include "login.h"
#include "home.h"
#include <QStackedWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)

{
    stack = new QStackedWidget(this);
    setCentralWidget(stack);

    welcomePage = new WelcomePage;
    loginPage = new LoginPage;
    homePage = new HomePage;

    stack->addWidget(welcomePage); //index 0
    stack->addWidget(loginPage); //index 1
    stack->addWidget(homePage); //index 2

    stack->setCurrentIndex(0); //start at welcome

    connect(welcomePage->startButton, &QPushButton::clicked, this, &MainWindow::goToLoginPage);
    connect(loginPage->loginButton, &QPushButton::clicked, this , &MainWindow::goToHomePage );
    connect(homePage->logoutButton, &QPushButton::clicked, this, &MainWindow::goToWelcomePage);
}

void MainWindow::goToLoginPage(){
    stack->setCurrentIndex(1);
}

void MainWindow::goToHomePage(){
    stack->setCurrentIndex(2);
}

void MainWindow::goToWelcomePage(){
    stack->setCurrentIndex(0);
}

