#include "login_layout.h"

Login_layout::Login_layout(QWidget* parent)
{
	layout_h = new QHBoxLayout(parent);
	text_edit_mail = new QLineEdit();
	label_mail = new QLabel(QString("E-mail:"));
	text_edit_password = new QLineEdit();
	label_password = new QLabel(QString("Password:"));
	button_login = new QPushButton(QString("Login"));
	button_return = new QPushButton(QString("Return"));

	layout_h->addWidget(label_mail);
	layout_h->addWidget(text_edit_mail);
	layout_h->addWidget(label_password);
	layout_h->addWidget(text_edit_password);
	layout_h->addWidget(button_login);
	layout_h->addWidget(button_return);
}

QHBoxLayout* Login_layout::get_layout()
{
	return this->layout_h;
}