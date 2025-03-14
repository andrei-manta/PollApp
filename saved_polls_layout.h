#ifndef SAVED_POLLS_LAYOUT_H
#define SAVED_POLLS_LAYOUT_H

#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>

class Saved_polls_layout
{
private:
	QHBoxLayout* layout_h;
	QLabel* label_saved_polls;
	QPushButton* button_return;

public:
	Saved_polls_layout(QWidget* parent);
	~Saved_polls_layout() = default;

	QHBoxLayout* get_layout();
};

#endif