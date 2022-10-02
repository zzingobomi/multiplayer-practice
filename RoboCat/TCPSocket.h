#pragma once
class TCPSocket
{
private:
	TCPSocket(SOCKET inSocket) : mSocket(inSocket) {}
	SOCKET mSocket;
public:
	~TCPSocket();
	int Connect(const SocketAddress& inAddress);

};

