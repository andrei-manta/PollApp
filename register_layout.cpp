#include "register_layout.h"

Register_layout::Register_layout(QWidget* parent)
{
	layout_h = new QHBoxLayout(parent);
	label_username = new QLabel(QString("Desired username:"));
	line_edit_username = new QLineEdit();
	label_email = new QLabel(QString("E-mail:"));
	line_edit_email = new QLineEdit();
	label_password = new QLabel(QString("Password:"));
	line_edit_password = new QLineEdit();
	label_country = new QLabel(QString("Country:"));
	line_edit_country = new QLineEdit();
	button_register = new QPushButton(QString("Register"));
	button_return = new QPushButton(QString("Return"));

	layout_h->addWidget(label_username);
	layout_h->addWidget(line_edit_username);
	layout_h->addWidget(label_email);
	layout_h->addWidget(line_edit_email);
	layout_h->addWidget(label_password);
	layout_h->addWidget(line_edit_password);
	layout_h->addWidget(label_country);
	layout_h->addWidget(line_edit_country);
	layout_h->addWidget(button_register);
	layout_h->addWidget(button_return);
}

QHBoxLayout* Register_layout::get_layout()
{
	return this->layout_h;
}