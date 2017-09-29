QT += widgets

HEADERS     = flowlayout.h \
              window.h \
    layoutblock.h \
    widgetgroup.h
SOURCES     = flowlayout.cpp \
              main.cpp \
              window.cpp \
    layoutblock.cpp \
    widgetgroup.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/layouts/flowlayout
INSTALLS += target

FORMS +=
