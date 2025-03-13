#ifndef LOGIN_REGISTER_GUEST_LAYOUT_H
#define LOGIN_REGISTER_GUEST_LAYOUT_H

#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/qpushbutton.h>
#include <qmainwindow.h>
#include <memory>

class Login_register_guest_layout
{
private:
	std::unique_ptr<QHBoxLayout> l_horiz;
	std::unique_ptr<QPushButton> b_login;
	std::unique_ptr<QPushButton> b_register;
	std::unique_ptr<QPushButton> b_guest;

public:
	//pass a pointer to the main window where this layout will reside
	Login_register_guest_layout(QMainWindow* parent);
	~Login_register_guest_layout();
};

#endif
