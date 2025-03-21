#ifndef LOGIN_REGISTER_GUEST_LAYOUT_H
#define LOGIN_REGISTER_GUEST_LAYOUT_H

#include <QHBoxLayout>
#include <QtWidgets/qpushbutton.h>
#include <QtWidgets/qmainwindow.h>

class Login_register_guest_layout
{
private:
	QHBoxLayout* l_horiz;
	QPushButton* b_login;
	QPushButton* b_register;
	QPushButton* b_guest;

public:
	Login_register_guest_layout(QWidget* parent);
	~Login_register_guest_layout() = default;

	QHBoxLayout* get_layout();
};
#endif
