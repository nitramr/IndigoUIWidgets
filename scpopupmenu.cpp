#include "scpopupmenu.h"
#include <QEvent>
#include <QPainter>
#include <QDebug>

ScPopupMenu::ScPopupMenu(QWidget *widget)
{
	QWidgetAction * action = new QWidgetAction(this);
	action->setDefaultWidget(widget);

	widget->installEventFilter(this);

	this->addAction(action);

}

bool ScPopupMenu::eventFilter(QObject *obj, QEvent *event)
{

	if (event->type() == QEvent::Paint) {

		QWidget *widget = qobject_cast<QWidget *>(obj);

		QPainter painter(widget);

		painter.setPen(QColor(128,128,128,128));
		painter.setBrush(Qt::NoBrush);
		painter.drawRect(QRect(0,0,widget->width()-1, widget->height()-1));

		return true;
	}

		return QObject::eventFilter(obj, event);

}
