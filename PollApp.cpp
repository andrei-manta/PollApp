#include "PollApp.h"
#include "login_register_guest_layout.h"
#include "login_layout.h"
#include "register_layout.h"
#include "feed_layout.h"
#include "account_layout.h"
#include "create_poll_layout.h"
#include "my_polls_layout.h"

PollApp::PollApp(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    //instantiate all the layouts, then they will be switched when needed

    //the vanilla widgets are containers for the layouts

    QWidget* widget_l_g_r_layout = new QWidget(this);
    widget_l_g_r_layout->setVisible(false);
    Login_register_guest_layout* login_register_guest_layout = new Login_register_guest_layout(widget_l_g_r_layout);
    widget_l_g_r_layout->setLayout(login_register_guest_layout->get_layout());

    QWidget* widget_login_layout = new QWidget(this);
    widget_login_layout->setVisible(false);
    Login_layout* login_layout = new Login_layout(widget_login_layout);
    widget_login_layout->setLayout(login_layout->get_layout());
    
    QWidget* widget_register_layout = new QWidget(this);
    widget_register_layout->setVisible(false);
    Register_layout* register_layout = new Register_layout(widget_register_layout);
    widget_register_layout->setLayout(register_layout->get_layout());

    QWidget* widget_feed_layout = new QWidget(this);
    widget_feed_layout->setVisible(false);
    Feed_layout* feed_layout = new Feed_layout(widget_feed_layout);
    widget_feed_layout->setLayout(feed_layout->get_layout());

    QWidget* widget_account_layout = new QWidget(this);
    widget_account_layout->setVisible(false);
    Account_layout* account_layout = new Account_layout(widget_account_layout);
    widget_account_layout->setLayout(account_layout->get_layout());

    QWidget* widget_create_poll_layout = new QWidget(this);
    widget_create_poll_layout->setVisible(false);
    Create_poll_layout* create_poll_layout = new Create_poll_layout(widget_create_poll_layout);
    widget_create_poll_layout->setLayout(create_poll_layout->get_layout());

    QWidget* widget_my_polls_layout = new QWidget(this);
    widget_my_polls_layout->setVisible(false);
    My_polls_layout* my_polls_layout = new My_polls_layout(widget_my_polls_layout);
    widget_my_polls_layout->setLayout(my_polls_layout->get_layout());

    //add all the layouts to the main window

    //this->setCentralWidget(widget_l_g_r_layout);
    //widget_l_g_r_layout->setVisible(true);
    //this->setCentralWidget(widget_login_layout);
    //widget_login_layout->setVisible(true);
    //this->setCentralWidget(widget_register_layout);
    //widget_register_layout->setVisible(true);
    //this->setCentralWidget(widget_feed_layout);
    //widget_feed_layout->setVisible(true);
    //this->setCentralWidget(widget_account_layout);
    //widget_account_layout->setVisible(true);
    //this->setCentralWidget(widget_create_poll_layout);
    //widget_create_poll_layout->setVisible(true);
    //this->setCentralWidget(widget_my_polls_layout);
    //widget_my_polls_layout->setVisible(true);
}
