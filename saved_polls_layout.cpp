#include "saved_polls_layout.h"

Saved_polls_layout::Saved_polls_layout(QWidget* parent)
{
	layout_h = new QHBoxLayout(parent);
	label_saved_polls = new QLabel(QString("SAVED POLLS PLACEHOLDER"));
	button_return = new QPushButton(QString("Return"));

	layout_h->addWidget(label_saved_polls);
	layout_h->addWidget(button_return);
}

QHBoxLayout* Saved_polls_layout::get_layout()
{
	return this->layout_h;
}