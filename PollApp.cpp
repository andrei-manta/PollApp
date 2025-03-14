#include "PollApp.h"
#include "login_register_guest_layout.h"

PollApp::PollApp(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    //instantiate all the layouts, then they will be switched when needed

    Login_register_guest_layout* login_register_guest_layout = new Login_register_guest_layout(this);
    
    //add all the layouts to the main window
    QWidget* centralWidget = new QWidget(this);
    centralWidget->setLayout(login_register_guest_layout->get_layout());
    this->setCentralWidget(centralWidget);
}
