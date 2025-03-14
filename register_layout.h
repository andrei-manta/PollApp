#ifndef REGISTER_LAYOUT_H
#define REGISTER_LAYOUT_H

#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>

class Register_layout
{
private:
	QHBoxLayout* layout_h;
	QLabel* label_username;
	QLineEdit* text_edit_username;
	QLabel* label_email;
	QLineEdit* text_edit_email;
	QLabel* label_password;
	QLineEdit* text_edit_password;
	QLabel* label_country;
	QLineEdit* text_edit_country;
	QPushButton* button_register;
	QPushButton* button_return;

public:
	Register_layout(QWidget* parent);
	~Register_layout() = default;

	QHBoxLayout* get_layout();
};

#endif
