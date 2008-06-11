TEMPLATE = app
QT = gui core xml
CONFIG += qt warn_on console release
DESTDIR = bin
OBJECTS_DIR = build
MOC_DIR = build
UI_DIR = build
FORMS = ui/mainwindow.ui ui/additem.ui
HEADERS = src/mainwindowimpl.h \
 src/item.h \
 src/dialogimpl.h \
 src/setpathwinodwimpl.h \
 src/setpathscene.h \
 src/setpathwindow.h \
 src/sceneellipse.h \
 src/addellipsedialog.h \
 src/addellipsedialogimpl.h \
 src/scenecursor.h \
 src/addcursordialog.h \
 src/addcusordialogimpl.h \
 src/tangible_type.h
SOURCES = src/mainwindowimpl.cpp \
 src/main.cpp \
 src/item.cpp \
 src/dialogimpl.cpp \
 src/setpathscene.cpp \
 src/setpathwinodwimpl.cpp \
 src/sceneellipse.cpp \
 src/addellipsedialogimpl.cpp \
 src/scenecursor.cpp \
 src/addcusordialogimpl.cpp \
 src/tangible_type.cpp
RESOURCES += resource.qrc
