#include "feed_layout.h"

Feed_layout::Feed_layout(QWidget* parent)
{
	layout_h = new QHBoxLayout(parent);
	label_feed = new QLabel(QString("FEED PLACEHOLDER"));
	button_account = new QPushButton(QString("My account"));

	layout_h->addWidget(label_feed);
	layout_h->addWidget(button_account);
}

QHBoxLayout* Feed_layout::get_layout()
{
	return this->layout_h;
}