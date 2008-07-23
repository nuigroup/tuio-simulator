#ifndef __TUIOSENDER_H__
#define __TUIOSENDER_H__


#include "OscOutboundPacketStream.h"
#include "UdpSocket.h"
#include <iostream>


//#define ADDRESS "127.0.0.1"
//#define PORT 3333

#define OUTPUT_BUFFER_SIZE 2048

#include <QList>
#include <QObject>
#include <string>
#include "mainwindowimpl.h"
#include "TouchData.h"
#include "table.h"

class TUIOSender : public QObject
{
Q_OBJECT
	public :
	

			TUIOSender(MainWindowImpl *win);
			~TUIOSender();
			MainWindowImpl *mywin;
			std::string ip_address; 
			int port;
			int fseq ;
			int lastTime ;
			float lastSpeed ;

			void frame();
			UdpTransmitSocket *transmitSocket;

			void connectSocket(std::string ip_address, int port);
			void resetTx();
			
			private slots :
			void frameSlot();
			void resetTxSlot();
};

#endif // __TUIOSENDER_H__
