#ifndef REGISTER_LAYOUT_H
#define REGISTER_LAYOUT_H

#include <QLabel>
#include <QTextEdit>
#include <QPushButton>
#include <QHBoxLayout>

class Register_layout
{
private:
	QHBoxLayout* layout_h;
	QLabel* label_username;
	QTextEdit* text_edit_username;
	QLabel* label_email;
	QTextEdit* text_edit_email;
	QLabel* label_password;
	QTextEdit* text_edit_password;
	QLabel* label_country;
	QTextEdit* text_edit_country;
	QPushButton* button_register;
	QPushButton* button_return;

public:
	Register_layout(QWidget* parent);
	~Register_layout() = default;

	QHBoxLayout* get_layout();
};

#endif
