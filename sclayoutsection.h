#ifndef SCLAYOUTSECTION_H
#define SCLAYOUTSECTION_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include "flowlayout.h"

class ScLayoutSectionHeader : public QWidget
{
	Q_OBJECT
public:
	ScLayoutSectionHeader(QString text, QWidget *menu = 0, bool toggle = false, QWidget *parent = 0);
	void setToggleOff(bool isOff);

private:
	void paintEvent(QPaintEvent *);
	QLabel *m_caption;
	QPushButton *m_btnExtended;
	QPushButton *m_btnOnOff;

signals:
	void toggleState(bool);

public slots:
	void setToggleState();
};


class ScLayoutSection : public QWidget
{
	Q_OBJECT
public:
	ScLayoutSection(QString text, QWidget *menu = 0, bool toggle = false, QWidget *parent = 0);
	void addWidget(QWidget * item);
	void setToggleOff(bool isOff);

private:
	FlowLayout *m_flowLayout;
	ScLayoutSectionHeader * m_header;

signals:
	void toggleState(bool);

public slots:
	void setToggleIsOff(bool);
};

#endif // SCLAYOUTSECTION_H
