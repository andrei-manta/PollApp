#ifndef CREATE_POLL_LAYOUT_H
#define CREATE_POLL_LAYOUT_H

#include <QHBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QTextEdit>

class Create_poll_layout
{
private:
	QHBoxLayout* layout_h;
	QLabel* label_poll_question;
	QTextEdit* text_edit_poll_question;
	QPushButton* button_save_question;
	QLabel* label_add_answer;
	QTextEdit* text_edit_add_answer;
	QPushButton* button_save_answer;
	QPushButton* button_post_poll;
	QPushButton* button_return;

public:
	Create_poll_layout(QWidget* parent);
	~Create_poll_layout() = default;

	QHBoxLayout* get_layout();
};

#endif