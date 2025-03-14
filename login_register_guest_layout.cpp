#include "login_register_guest_layout.h"

Login_register_guest_layout::Login_register_guest_layout(QMainWindow* parent)
{
	l_horiz = new QHBoxLayout(dynamic_cast<QWidget*>(parent));
	b_login = new QPushButton(QString("Login"), dynamic_cast<QWidget*>(l_horiz));
	b_register = new QPushButton(QString("Register"), dynamic_cast<QWidget*>(l_horiz));
	b_guest = new QPushButton(QString("Login as guest"), dynamic_cast<QWidget*>(l_horiz));

	l_horiz->addWidget(b_login);
	l_horiz->addWidget(b_register);
	l_horiz->addWidget(b_guest);
}

QHBoxLayout* Login_register_guest_layout::get_layout()
{
	return this->l_horiz;
}