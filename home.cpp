// #include "home.h"
// #include <QVBoxLayout>
// #include <QLabel>
// #include <QPushButton>

// HomePage::HomePage(QWidget *parent)
//     : QWidget(parent)
// {
//     auto *layout = new QVBoxLayout(this);
//     auto *label = new QLabel("Home Page");

//     logoutButton = new QPushButton("Logout");

//     //apply styles
//     logoutButton->setStyleSheet(R"(
// QPushButton {
// background-color: #4ef748;
// color: black;
// max-width: 80px;
// max-height: 30px;
// margin-bottom: 10px;
// margin-left: 20px;
// border: none;
// border-radius: 10px;
// font-size: 18px;
// }

// QPushButton:hover {
// background-color: #02cc24;
// }

// QPushButton:pressed {
// background-color: #2e92e0;
// })");

//     layout->addWidget(label);
//     layout->addWidget(logoutButton);
// }


#include "home.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QIcon>

HomePage::HomePage(QWidget *parent)
    : QWidget(parent)
{
    auto *mainLayout = new QHBoxLayout(this); // horizontal layout for nav + content

    // --- Left Navigation Section ---
    auto *navLayout = new QVBoxLayout();

    QPushButton *dashboardBtn = new QPushButton(QIcon(":/icons/dashboard.png"), "Dashboard");
    QPushButton *profileBtn   = new QPushButton(QIcon(":/icons/profile.png"), "Profile");
    QPushButton *settingsBtn  = new QPushButton(QIcon(":/icons/settings.png"), "Settings");
    QPushButton *helpBtn      = new QPushButton(QIcon(":/icons/help.png"), "Help");

    // Give them object names for styling
    dashboardBtn->setObjectName("navButton");
    profileBtn->setObjectName("navButton");
    settingsBtn->setObjectName("navButton");
    helpBtn->setObjectName("navButton");

    navLayout->addWidget(dashboardBtn);
    navLayout->addWidget(profileBtn);
    navLayout->addWidget(settingsBtn);
    navLayout->addWidget(helpBtn);
    navLayout->addStretch(); // Push buttons to top

    // --- Main Content Section ---
    auto *contentLayout = new QVBoxLayout();
    auto *label = new QLabel("Home Page");

    logoutButton = new QPushButton("Logout");
    logoutButton->setObjectName("logoutButton");

    contentLayout->addWidget(label);
    contentLayout->addWidget(logoutButton);

    // Combine both layouts
    mainLayout->addLayout(navLayout);
    mainLayout->addLayout(contentLayout);

    // --- Style Sheet ---
    this->setStyleSheet(R"(
        #navButton {
            background-color: #4069ff;
            border: none;
            border-radius: 5px;
            padding: 10px 20px;
            font-size: 14px;
            text-align: left;
        }
        #navButton:hover {
            background-color: #1a3aad;
        }

        #logoutButton {
            background-color: #4ef748;
            color: black;
            min-width: 100px;
            min-height: 35px;
            border: none;
            border-radius: 10px;
            font-size: 16px;
        }

        #logoutButton:hover {
            background-color: #02cc24;
        }

        #logoutButton:pressed {
            background-color: #2e92e0;
        }
    )");
}




// #include "home.h"
// #include <QHBoxLayout>
// #include <QVBoxLayout>
// #include <QLabel>
// #include <QPushButton>
// #include <QIcon>

// HomePage::HomePage(QWidget *parent) : QWidget(parent)
// {
//     auto *mainLayout = new QHBoxLayout(this); // horizontal layout for nav + content

//     // Left Navigation Section
//     auto *navLayout = new QVBoxLayout();

//     QPushButton *dashboardBtn = new QPushButton(QIcon(), "Dashboard");
//     QPushButton *profileBtn = new QPushButton(QIcon(), "Profile");
//     QPushButton *settingsBtn = new QPushButton(QIcon(), "Settings");
//     QPushButton *helpBtn = new QPushButton(QIcon(), "Help");

//     //give object names for styling
//     dashboardBtn->setObjectName("navButton");
//     profileBtn->setObjectName("navButton");
//     settingsBtn->setObjectName("navButton");
//     helpBtn->setObjectName("navButton");

//     navLayout->addWidget(dashboardBtn);
//     navLayout->addWidget(profileBtn);
//     navLayout->addWidget(settingsBtn);
//     navLayout->addWidget(helpBtn);


// }
