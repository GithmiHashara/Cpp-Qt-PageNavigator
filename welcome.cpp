// #include "welcome.h"
// #include <QVBoxLayout>
// #include <QLabel>
// #include <QPushButton>


// WelcomePage::WelcomePage(QWidget *parent)
//     : QWidget(parent)
// {

//     // setFixedSize(520, 400); //fixed size window

//     startButton = new QPushButton("Start");

//     auto *layout = new QVBoxLayout(this);
//     auto *label = new QLabel("Welcome to the App!");

//     startButton = new QPushButton("Start");

//     //apply styles
//     startButton->setStyleSheet(R"(
// QPushButton {
// background-color: #52b4ff;
// color: white;
// max-width: 80px;
// max-height: 30px;
// margin-bottom: 10px;
// margin-left: 20px;
// border: none;
// border-radius: 10px;
// font-size: 18px;
// font-weight: bold;
// }
// QPushButton:hover {
// background-color: #0088ff;
// }

// QPushButton:pressed {
// background-color: #2e92e0;
// })");

//     layout->addWidget(label);
//     layout->addWidget(startButton);
// }


#include "welcome.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>

WelcomePage::WelcomePage(QWidget *parent): QWidget(parent)
{
    //create layout
    auto *layout = new QVBoxLayout(this);

    //heading
    auto *heading = new QLabel("Welcome to the App");
    heading->setObjectName("headingLabel");
    heading->setAlignment(Qt::AlignCenter);

    //Subheading
    auto *subHeading = new QLabel("Apply here!");
    subHeading->setObjectName("subHeadingLabel");
    subHeading->setAlignment(Qt::AlignCenter);

    //Intro text
    auto *intro = new QLabel("This app helps you manage tasks efficiently, collaborate with your team, and stay organized.");
    intro->setObjectName("introLabel");
    intro->setWordWrap(true);
    intro->setAlignment(Qt::AlignCenter);

    // Start button
    startButton = new QPushButton("Start");
    startButton->setObjectName("startButton");

   //add widgets to layout
    layout->addWidget(heading);
    layout->addWidget(startButton, 0, Qt::AlignCenter);
    layout->addWidget(subHeading);
    layout->addWidget(intro);

//set style sheet
    this->setStyleSheet(R"(
#headingLabel {
font-size: 28px;
font-weight: bold;
color: #25c4f5;
margin-bottom: 10px;
}

#startButton {
background-color: #52b4ff;
color: white;
min-width: 80px;
min-height: 30px;
margin-bottom: 10px;
margin-left: 20px;
border: none;
border-radius: 10px;
font-size: 18px;
font-weight: bold;
}

#introLabel {
font-size: 15px;
color: #fa8d89;
padding-left: 20px;
padding-right: 20px;
margin-bottom: 20px;
}

#startButton:hover {
background-color: #0088ff;
}

#startButton:pressed {
background-color: #2e92e0;
}

#subHeadingLabel {
font-size: 18px;
color: #ab28bf;
}

)");
}
