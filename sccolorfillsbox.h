#ifndef SCCOLORFILLSBOX_H
#define SCCOLORFILLSBOX_H

#include <QPushButton>
#include <QMenu>

class ScColorFillsBox : public QPushButton
{
	Q_OBJECT
public:
	ScColorFillsBox(QWidget *parent = 0);


private:
	QPixmap * m_fills;
	void paintEvent(QPaintEvent *);

public slots:
		void setPixmap(QPixmap fills);
};

#endif // SCCOLORFILLSBOX_H
