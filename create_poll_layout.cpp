#include "create_poll_layout.h"

Create_poll_layout::Create_poll_layout(QWidget* parent)
{
	layout_h = new QHBoxLayout(parent);
	label_poll_question = new QLabel(QString("Write a question:"));
	text_edit_poll_question = new QTextEdit();
	button_save_question = new QPushButton(QString("Save your question"));
	label_add_answer = new QLabel(QString("Write an answer:"));
	text_edit_add_answer = new QTextEdit();
	button_save_answer = new QPushButton(QString("Add this answer:"));
	button_post_poll = new QPushButton(QString("Post poll!"));
	button_return = new QPushButton(QString("Return"));

	layout_h->addWidget(label_poll_question);
	layout_h->addWidget(text_edit_poll_question);
	layout_h->addWidget(button_save_question);
	layout_h->addWidget(label_add_answer);
	layout_h->addWidget(text_edit_add_answer);
	layout_h->addWidget(button_save_answer);
	layout_h->addWidget(button_post_poll);
	layout_h->addWidget(button_return);
}

QHBoxLayout* Create_poll_layout::get_layout()
{
	return this->layout_h;
}