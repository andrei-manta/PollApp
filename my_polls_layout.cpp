#include "my_polls_layout.h"

My_polls_layout::My_polls_layout(QWidget* parent)
{
	layout_h = new QHBoxLayout(parent);
	label_polls = new QLabel(QString("POLLS LIST PLACEHOLDER"));
	button_return = new QPushButton(QString("Return"));

	layout_h->addWidget(label_polls);
	layout_h->addWidget(button_return);
}

QHBoxLayout* My_polls_layout::get_layout()
{
	return this->layout_h;
}