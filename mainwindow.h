#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QStackedWidget;
class WelcomePage;
class LoginPage;
class HomePage;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

private:
    QStackedWidget *stack;
    WelcomePage *welcomePage;
    LoginPage *loginPage;
    HomePage *homePage;

private slots:
    void goToLoginPage();
    void goToHomePage();
    void goToWelcomePage();
};

#endif // MAINWINDOW_H
