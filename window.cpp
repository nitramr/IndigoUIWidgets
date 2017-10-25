/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** BSD License Usage
** Alternatively, you may use this file under the terms of the BSD license
** as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include <QPushButton>

#include "flowlayout.h"
#include "window.h"
#include "sclayoutsegment.h"
#include "sclayoutsection.h"
#include "widgetgroup.h"
#include "sc_seg_xyz_position.h"
#include "sc_seg_xyz_transform.h"
#include "sc_seg_xyz_advanced.h"
#include "sc_seg_shape.h"
#include "sc_seg_fills.h"
#include "sc_seg_lines.h"
#include "sc_seg_dropshadow.h"
#include <QLabel>
#include <QLineEdit>
#include <QSpinBox>
#include <QDebug>
#include <QStyleFactory>

Window::Window()
{

	/*
	 * Setup second layout block 1
	 */



	sc_seg_xyz_position * blockPosition = new sc_seg_xyz_position();
	sc_seg_xyz_transform * blockTransform = new sc_seg_xyz_transform();
	sc_seg_xyz_advanced * blockXYZAdvanced = new sc_seg_xyz_advanced();
	ScLayoutSection *sectionXYZ = new ScLayoutSection("X,Y,Z", blockXYZAdvanced, true);
	sectionXYZ->addWidget(blockPosition);
	sectionXYZ->addWidget(blockTransform);

	sc_seg_shape * blockShape = new sc_seg_shape();
	ScLayoutSection *sectionShape = new ScLayoutSection("Shape");
	sectionShape->addWidget(blockShape);
	sectionShape->setToggleOff(true);

	sc_seg_fills * blockFills = new sc_seg_fills();
	ScLayoutSection *sectionFills = new ScLayoutSection("Fills", new QWidget(), true);
	sectionFills->addWidget(blockFills);

	sc_seg_lines * blockLines = new sc_seg_lines();
	ScLayoutSection *sectionLines = new ScLayoutSection("Lines", new QWidget(), true);
	sectionLines->addWidget(blockLines);

	sc_seg_dropshadow * blockDropShadow = new sc_seg_dropshadow();
	ScLayoutSection *sectionDropShadow = new ScLayoutSection("Drop Shadow", new QWidget(), true);
	sectionDropShadow->addWidget(blockDropShadow);


	/*
	 * Setup floating layout and add all blocks to that
	 */

	FlowLayout *flowLayout = new FlowLayout(0,0,0);

	flowLayout->addWidget(sectionXYZ);
	flowLayout->addWidget(sectionShape);
	flowLayout->addWidget(sectionFills);
	flowLayout->addWidget(sectionLines);
	flowLayout->addWidget(sectionDropShadow);



    setLayout(flowLayout);

    setWindowTitle(tr("Flow Layout"));
}
//! [1]
