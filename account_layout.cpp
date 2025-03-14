#include "account_layout.h"

Account_layout::Account_layout(QWidget* parent)
{
	layout_h = new QHBoxLayout(parent);
	label_user_info = new QLabel(QString("Your account information:"));
	label_actual_user_info = new QLabel(QString("INFO PLACEHOLDER"));
	button_log_out = new QPushButton(QString("Log out"));
	button_watch_saved_polls = new QPushButton(QString("Watch saved polls"));
	button_create_poll = new QPushButton(QString("Create a poll!"));
	button_watch_my_polls = new QPushButton(QString("Watch my polls"));

	layout_h->addWidget(label_user_info);
	layout_h->addWidget(label_actual_user_info);
	layout_h->addWidget(button_log_out);
	layout_h->addWidget(button_watch_saved_polls);
	layout_h->addWidget(button_create_poll);
	layout_h->addWidget(button_watch_my_polls);
}

QHBoxLayout* Account_layout::get_layout()
{
	return this->layout_h;
}