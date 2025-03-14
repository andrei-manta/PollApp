#include "PollApp.h"
#include "login_register_guest_layout.h"
#include "login_layout.h"
#include "register_layout.h"

PollApp::PollApp(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    //instantiate all the layouts, then they will be switched when needed

    //the widgets are containers for the layouts

    QWidget* widget_l_g_r_layout = new QWidget(this);
    Login_register_guest_layout* login_register_guest_layout = new Login_register_guest_layout(widget_l_g_r_layout);
    widget_l_g_r_layout->setLayout(login_register_guest_layout->get_layout());

    QWidget* widget_login_layout = new QWidget(this);
    Login_layout* login_layout = new Login_layout(widget_login_layout);
    widget_login_layout->setLayout(login_layout->get_layout());
    
    QWidget* widget_register_layout = new QWidget(this);
    Register_layout* register_layout = new Register_layout(widget_register_layout);
    widget_register_layout->setLayout(register_layout->get_layout());

    //add all the layouts to the main window
    this->setCentralWidget(widget_l_g_r_layout);
    this->setCentralWidget(widget_login_layout);
    this->setCentralWidget(widget_register_layout);
}
