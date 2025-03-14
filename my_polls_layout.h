#ifndef MY_POLLS_LAYOUT_H
#define MY_POLLS_LAYOUT_H

#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>

class My_polls_layout
{
private:
	QHBoxLayout* layout_h;
	QLabel* label_polls;
	QPushButton* button_return;

public:
	My_polls_layout(QWidget* parent);
	~My_polls_layout() = default;

	QHBoxLayout* get_layout();
};

#endif