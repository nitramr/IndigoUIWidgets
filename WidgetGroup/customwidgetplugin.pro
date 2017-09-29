#! [0]
QT          += widgets uiplugin
#! [0]

QTDIR_build {
# This is only for the Qt build. Do not use externally. We mean it.
PLUGIN_TYPE = designer
PLUGIN_CLASS_NAME = WidgetGroupPlugin
load(qt_plugin)
CONFIG += install_ok
} else {
# Public example:

#! [2]
CONFIG      += plugin
TEMPLATE    = lib
#! [2]

TARGET = $$qtLibraryTarget($$TARGET)

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS += target

}

#! [3]
HEADERS     = \
              customwidgetplugin.h \
    widgetgroup.h
SOURCES     = \
              customwidgetplugin.cpp \
    widgetgroup.cpp
#! [3]
