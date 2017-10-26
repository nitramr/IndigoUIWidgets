#include "sc_seg_dropshadow.h"
#include "ui_sc_seg_dropshadow.h"
#include "sccolorfillsbox.h"
#include "scpopupmenu.h"
#include "sccolorpicker.h"

sc_seg_dropshadow::sc_seg_dropshadow(QWidget *parent) :
	ScLayoutSegment(parent),
	ui(new Ui::sc_seg_dropshadow)
{
	ui->setupUi(this);

	// Setup ScColorPicker in ScPopupMenu and add it to ScColorFillsBox
	ScColorPicker * colorPicker = new ScColorPicker();
	colorPicker->setFixedSize(100,100);
	ScPopupMenu * colorPickerMenu = new ScPopupMenu(colorPicker);
	ScColorFillsBox * cfbFills = new ScColorFillsBox();
	cfbFills->setMenu(colorPickerMenu);
	ui->verticalLayout_8->insertWidget(0,cfbFills);

	// connect ScFillsBox with ScColorPicker
	this->connect(colorPicker, SIGNAL(setPreview(QPixmap)), cfbFills, SLOT(setPixmap(QPixmap)));

}

sc_seg_dropshadow::~sc_seg_dropshadow()
{
	delete ui;
}
