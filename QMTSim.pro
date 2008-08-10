CONFIG += qt release warn_on
DESTDIR = bin
FORMS = ui/additem.ui ui/mainwindow.ui
HEADERS = ip/IpEndpointName.h \
 ip/NetworkingUtils.h \
 ip/PacketListener.h \
 ip/TimerListener.h \
 ip/UdpSocket.h \
 osc/MessageMappingOscPacketListener.h \
 osc/OscException.h \
 osc/OscHostEndianness.h \
 osc/OscOutboundPacketStream.h \
 osc/OscTypes.h \
 src/TUIOSender.h \
 src/TUIOanimation.h \
 src/TouchData.h \
 src/aboutQMTSim.h \
 src/aboutQMTSimImpl.h \
 src/addcursordialog.h \
 src/addcusordialogimpl.h \
 src/addellipsedialog.h \
 src/addellipsedialogimpl.h \
 src/configuredialog.h \
 src/configuredialogimpl.h \
 src/dialogimpl.h \
 src/item.h \
 src/mainwindowimpl.h \
 src/scenecursor.h \
 src/sceneellipse.h \
 src/setpathscene.h \
 src/setpathwindow.h \
 src/setpathwinodwimpl.h \
 src/table.h \
 src/tangible_type.h \
 src/debugWindow.h \
 src/debugWindowImpl.h \
 src/readmeDialog.h \
 src/readmeDialogImpl.h \
 src/resizeTableDialog.h \
 src/resizeTableDialogImpl.h
INCLUDEPATH += ip osc
LIBS += -lwinmm -lws2_32
MOC_DIR = build
OBJECTS_DIR = build
QT = core gui xml
RESOURCES += resource.qrc
SOURCES = ip/IpEndpointName.cpp \
 ip/win32/NetworkingUtils.cpp \
 ip/win32/UdpSocket.cpp \
 osc/OscOutboundPacketStream.cpp \
 osc/OscTypes.cpp \
 src/TUIOSender.cpp \
 src/TUIOanimation.cpp \
 src/aboutQMTSimImpl.cpp \
 src/addcusordialogimpl.cpp \
 src/addellipsedialogimpl.cpp \
 src/configuredialogimpl.cpp \
 src/dialogimpl.cpp \
 src/item.cpp \
 src/main.cpp \
 src/mainwindowimpl.cpp \
 src/readcursor.cpp \
 src/readellipse.cpp \
 src/readpolygon.cpp \
 src/scenecursor.cpp \
 src/sceneellipse.cpp \
 src/setpathscene.cpp \
 src/setpathwinodwimpl.cpp \
 src/table.cpp \
 src/tangible_type.cpp \
 src/debugWindowImpl.cpp \
 src/readmeDialogImpl.cpp \
 src/resizeTableDialogImpl.cpp
TEMPLATE = app
UI_DIR = build
