#include "sc_seg_fills.h"
#include "ui_sc_seg_fills.h"
#include "sccolorfillsbox.h"
#include "scpopupmenu.h"
#include "sccolorpicker.h"

sc_seg_fills::sc_seg_fills(QWidget *parent) :
	ScLayoutSegment(parent),
	ui(new Ui::sc_seg_fills)
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


	// Setup ScColorPicker in ScPopupMenu and add it to ScColorFillsBox
	ScColorPicker * colorPickerMask = new ScColorPicker();
	colorPickerMask->setFixedSize(100,100);
	ScPopupMenu * colorPickerMenuMask = new ScPopupMenu(colorPickerMask);
	ScColorFillsBox * cfbMask = new ScColorFillsBox();
	cfbMask->setMenu(colorPickerMenuMask);
	ui->verticalLayout_2->insertWidget(0,cfbMask);

	// connect ScFillsBox with ScColorPicker
	this->connect(colorPickerMask, SIGNAL(setPreview(QPixmap)), cfbMask, SLOT(setPixmap(QPixmap)));

}

sc_seg_fills::~sc_seg_fills()
{
	delete ui;
}
