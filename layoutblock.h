#ifndef LAYOUTBLOCK_H
#define LAYOUTBLOCK_H

#include <QWidget>
#include <QLayout>

class layoutblock : public QWidget
{
private:
	QGridLayout * m_layout;

public:
	layoutblock();
	void addWidget(QWidget * item, int row, int column);
	QGridLayout *getLayout();
};

#endif // LAYOUTBLOCK_H
