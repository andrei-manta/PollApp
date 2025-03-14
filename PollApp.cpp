#include "PollApp.h"
#include "login_register_guest_layout.h"

PollApp::PollApp(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    //instantiate all the layouts, then they will be switched when needed

    std::unique_ptr<Login_register_guest_layout> login_register_guest_layout(new Login_register_guest_layout(this));
}

PollApp::~PollApp()
{}
