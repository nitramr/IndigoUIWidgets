#ifndef SC_SEG_XYZ_POSITION_H
#define SC_SEG_XYZ_POSITION_H

#include <QWidget>
#include "sclayoutsegment.h"

namespace Ui {
class sc_seg_xyz_position;
}

class sc_seg_xyz_position : public ScLayoutSegment
{
	Q_OBJECT

public:
	explicit sc_seg_xyz_position(QWidget *parent = 0);
	~sc_seg_xyz_position();

private:
	Ui::sc_seg_xyz_position *ui;
};

#endif // SC_SEG_XYZ_POSITION_H
