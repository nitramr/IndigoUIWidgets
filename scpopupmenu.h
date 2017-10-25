#ifndef SCPOPUPMENU_H
#define SCPOPUPMENU_H

#include <QMenu>
#include <QWidgetAction>

class ScPopupMenu : public QMenu
{
public:
	ScPopupMenu(QWidget*widget);
protected:
	bool eventFilter(QObject *obj, QEvent *event);
};

#endif // SCPOPUPMENU_H
