#include "sc_seg_shape.h"
#include "ui_sc_seg_shape.h"


sc_seg_shape::sc_seg_shape(QWidget *parent) :
	ScLayoutSegment(parent),
	ui(new Ui::sc_seg_shape)
{
	ui->setupUi(this);

}

sc_seg_shape::~sc_seg_shape()
{
	delete ui;
}
