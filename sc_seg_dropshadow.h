#ifndef SC_SEG_DROPSHADOW_H
#define SC_SEG_DROPSHADOW_H

#include <QWidget>
#include "sclayoutsegment.h"

namespace Ui {
class sc_seg_dropshadow;
}

class sc_seg_dropshadow : public ScLayoutSegment
{
	Q_OBJECT

public:
	explicit sc_seg_dropshadow(QWidget *parent = 0);
	~sc_seg_dropshadow();

private:
	Ui::sc_seg_dropshadow *ui;
};

#endif // SC_SEG_DROPSHADOW_H
