#ifndef SC_SEG_XYZ_TRANSFORM_H
#define SC_SEG_XYZ_TRANSFORM_H

#include <QWidget>
#include "sclayoutsegment.h"

namespace Ui {
class sc_seg_xyz_transform;
}

class sc_seg_xyz_transform : public ScLayoutSegment
{
	Q_OBJECT

public:
	explicit sc_seg_xyz_transform(QWidget *parent = 0);
	~sc_seg_xyz_transform();

private:
	Ui::sc_seg_xyz_transform *ui;
};

#endif // SC_SEG_XYZ_TRANSFORM_H
