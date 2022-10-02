#include "RoboCatPCH.h"

int TCPSocket::Connect(const SocketAddress& inAddress)
{
	return NO_ERROR;
}

TCPSocket::~TCPSocket() 
{
#if _WIN32
	closesocket(mSocket);
#else
	close(mSocket);
#endif
}

