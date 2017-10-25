#ifndef SCLAYOUTSEGMENT_H
#define SCLAYOUTSEGMENT_H

#include <QWidget>
#include <QLayout>

class ScLayoutSegment : public QWidget
{
private:
	QGridLayout * m_layout;

public:
	ScLayoutSegment(QWidget *parent = 0);
	void addWidget(QWidget * item, int row, int column);
	void addGridLayout(QGridLayout*gridLayout);
	QGridLayout *getLayout();
};

#endif // SCLAYOUTSEGMENT_H
