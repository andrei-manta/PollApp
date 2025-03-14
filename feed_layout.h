#ifndef FEED_LAYOUT_H
#define FEED_LAYOUT_H

#include <QPushButton>
#include <QHBoxLayout>
#include <QLabel>

class Feed_layout
{
private:
	QHBoxLayout* layout_h;
	QLabel* label_feed;
	QPushButton* button_account;
public:
	Feed_layout(QWidget* parent);
	~Feed_layout() = default;

	QHBoxLayout* get_layout();
};

#endif