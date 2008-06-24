TEMPLATE = app
CONFIG += windows debug
LIBS += -lws2_32 -lwinmm
SOURCES += osc/OscOutboundPacketStream.cpp \
 osc/OscPrintReceivedElements.cpp \
 osc/OscReceivedElements.cpp \
 osc/OscTypes.cpp \
 ip/win32/NetworkingUtils.cpp \
 ip/win32/UdpSocket.cpp \
 ip/IpEndpointName.cpp \
 tests/OscUnitTests.cpp
HEADERS += osc/OscOutboundPacketStream.h \
 osc/OscPrintReceivedElements.h \
 osc/OscReceivedElements.h \
 osc/OscTypes.h \
 ip/IpEndpointName.h \
 ip/NetworkingUtils.h \
 ip/PacketListener.h \
 ip/TimerListener.h \
 ip/UdpSocket.h \
 tests/OscUnitTests.h
