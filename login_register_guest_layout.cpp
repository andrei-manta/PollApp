#include "login_register_guest_layout.h"

Login_register_guest_layout::Login_register_guest_layout(QWidget* parent)
{
	l_horiz = new QHBoxLayout(parent);
	b_login = new QPushButton(QString("Login"));
	b_register = new QPushButton(QString("Register"));
	b_guest = new QPushButton(QString("Login as guest"));

	l_horiz->addWidget(b_login);
	l_horiz->addWidget(b_register);
	l_horiz->addWidget(b_guest);
}

QHBoxLayout* Login_register_guest_layout::get_layout()
{
	return this->l_horiz;
}