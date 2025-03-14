#include "login_register_guest_layout.h"

Login_register_guest_layout::Login_register_guest_layout(QMainWindow* parent)
{
	l_horiz = std::unique_ptr<QHBoxLayout>(new QHBoxLayout(dynamic_cast<QWidget*>(parent)));
	b_login = std::unique_ptr<QPushButton>(new QPushButton(QString("Login"), dynamic_cast<QWidget*>(l_horiz.get())));
	b_register = std::unique_ptr<QPushButton>(new QPushButton(QString("Register"), dynamic_cast<QWidget*>(l_horiz.get())));
	b_guest = std::unique_ptr<QPushButton>(new QPushButton(QString("Login as guest"), dynamic_cast<QWidget*>(l_horiz.get())));

	l_horiz->addWidget(b_login.get());
	l_horiz->addWidget(b_register.get());
	l_horiz->addWidget(b_guest.get());
}