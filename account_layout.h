#ifndef ACCOUNT_LAYOUT_H
#define ACCOUNT_LAYOUT_H

#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>

class Account_layout
{
private:
	QHBoxLayout* layout_h;
	QLabel* label_user_info;
	QLabel* label_actual_user_info;
	QPushButton* button_log_out;
	QPushButton* button_watch_saved_polls;
	QPushButton* button_create_poll;
	QPushButton* button_watch_my_polls;

public:
	Account_layout(QWidget* parent);
	~Account_layout() = default;

	QHBoxLayout* get_layout();
};

#endif