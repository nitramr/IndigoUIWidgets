QT += widgets
QT += uitools

HEADERS     = flowlayout.h \
              window.h \
    widgetgroup.h \
    sc_seg_xyz_position.h \
    sc_seg_xyz_transform.h \
    sclayoutsection.h \
    sc_seg_shape.h \
    scpopupmenu.h \
    sc_seg_fills.h \
    sclayoutsegment.h \
    sc_seg_lines.h \
    sc_seg_dropshadow.h \
    sc_seg_xyz_advanced.h
SOURCES     = flowlayout.cpp \
              main.cpp \
              window.cpp \
    widgetgroup.cpp \
    sc_seg_xyz_position.cpp \
    sc_seg_xyz_transform.cpp \
    sclayoutsection.cpp \
    sclayoutsegment.cpp \
    sc_seg_shape.cpp \
    scpopupmenu.cpp \
    sc_seg_fills.cpp \
    sc_seg_lines.cpp \
    sc_seg_dropshadow.cpp \
    sc_seg_xyz_advanced.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/layouts/flowlayout
INSTALLS += target

FORMS += \
    sc_seg_xyz_position.ui \
    sc_seg_xyz_transform.ui \
    sc_seg_shape.ui \
    sc_seg_fills.ui \
    sc_seg_lines.ui \
    sc_seg_dropshadow.ui \
    sc_seg_xyz_advanced.ui

RESOURCES += \
    assets.qrc

DISTFILES +=
