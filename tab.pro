QT += widgets
requires(qtConfig(listwidget))

HEADERS       = tab.h
SOURCES       = main.cpp \
                tab.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/tab
INSTALLS += target