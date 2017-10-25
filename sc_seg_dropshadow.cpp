#include "sc_seg_dropshadow.h"
#include "ui_sc_seg_dropshadow.h"
#include "scpopupmenu.h"

sc_seg_dropshadow::sc_seg_dropshadow(QWidget *parent) :
	ScLayoutSegment(parent),
	ui(new Ui::sc_seg_dropshadow)
{
	ui->setupUi(this);



}

sc_seg_dropshadow::~sc_seg_dropshadow()
{
	delete ui;
}
