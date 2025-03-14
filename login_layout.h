#ifndef LOGIN_LAYOUT_H
#define LOGIN_LAYOUT_H

#include <QtWidgets/qtextedit.h>
#include <QtWidgets/qpushbutton.h>
#include <QHBoxLayout>
#include <QLabel>

class Login_layout
{
private:
	QHBoxLayout* layout_h;
	QLabel* label_mail;
	QTextEdit* text_edit_mail;
	QLabel* label_password;
	QTextEdit* text_edit_password;
	QPushButton* button_login;
	QPushButton* button_return;

public:
	Login_layout(QWidget* parent);
	~Login_layout() = default;

	QHBoxLayout* get_layout();
};

#endif