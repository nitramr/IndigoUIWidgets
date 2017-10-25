#include "sc_seg_xyz_transform.h"
#include "ui_sc_seg_xyz_transform.h"

sc_seg_xyz_transform::sc_seg_xyz_transform(QWidget *parent) :
	ScLayoutSegment(parent),
	ui(new Ui::sc_seg_xyz_transform)
{
	ui->setupUi(this);

}

sc_seg_xyz_transform::~sc_seg_xyz_transform()
{
	delete ui;
}
