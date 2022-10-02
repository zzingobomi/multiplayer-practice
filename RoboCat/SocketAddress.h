#pragma once
class SocketAddress
{
private:
	friend class UDPSocket;
	friend class TCPSocket;

	sockaddr mSockAddr;
#if _WIN32
	

#else

#endif
		 


};

