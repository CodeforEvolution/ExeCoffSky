void *
GetAddressByName
(const char *name)
{
	if (NULL == name) return NULL;
	else if (0 == strcmp(name, "AcceptEx")) return (void *)AcceptEx;
	else if (0 == strcmp(name, "EnumProtocolsA")) return (void *)EnumProtocolsA;
	else if (0 == strcmp(name, "EnumProtocolsW")) return (void *)EnumProtocolsW;
	else if (0 == strcmp(name, "GetAcceptExSockaddrs")) return (void *)GetAcceptExSockaddrs;
	else if (0 == strcmp(name, "GetAddressByNameA")) return (void *)GetAddressByNameA;
	else if (0 == strcmp(name, "GetAddressByNameW")) return (void *)GetAddressByNameW;
	else if (0 == strcmp(name, "GetNameByTypeA")) return (void *)GetNameByTypeA;
	else if (0 == strcmp(name, "GetNameByTypeW")) return (void *)GetNameByTypeW;
	else if (0 == strcmp(name, "GetServiceA")) return (void *)GetServiceA;
	else if (0 == strcmp(name, "GetServiceW")) return (void *)GetServiceW;
	else if (0 == strcmp(name, "GetTypeByNameA")) return (void *)GetTypeByNameA;
	else if (0 == strcmp(name, "GetTypeByNameW")) return (void *)GetTypeByNameW;
//	else if (0 == strcmp(name, "MigrateWinsockConfiguration")) return (void *)MigrateWinsockConfiguration;
//	else if (0 == strcmp(name, "NPLoadNameSpaces")) return (void *)NPLoadNameSpaces;
	else if (0 == strcmp(name, "SetServiceA")) return (void *)SetServiceA;
	else if (0 == strcmp(name, "SetServiceW")) return (void *)SetServiceW;
	else if (0 == strcmp(name, "TransmitFile")) return (void *)TransmitFile;
//	else if (0 == strcmp(name, "WEP")) return (void *)WEP;
	else if (0 == strcmp(name, "WSAAsyncGetHostByAddr")) return (void *)WSAAsyncGetHostByAddr;
	else if (0 == strcmp(name, "WSAAsyncGetHostByName")) return (void *)WSAAsyncGetHostByName;
	else if (0 == strcmp(name, "WSAAsyncGetProtoByName")) return (void *)WSAAsyncGetProtoByName;
	else if (0 == strcmp(name, "WSAAsyncGetProtoByNumber")) return (void *)WSAAsyncGetProtoByNumber;
	else if (0 == strcmp(name, "WSAAsyncGetServByName")) return (void *)WSAAsyncGetServByName;
	else if (0 == strcmp(name, "WSAAsyncGetServByPort")) return (void *)WSAAsyncGetServByPort;
	else if (0 == strcmp(name, "WSAAsyncSelect")) return (void *)WSAAsyncSelect;
	else if (0 == strcmp(name, "WSACancelAsyncRequest")) return (void *)WSACancelAsyncRequest;
	else if (0 == strcmp(name, "WSACancelBlockingCall")) return (void *)WSACancelBlockingCall;
	else if (0 == strcmp(name, "WSACleanup")) return (void *)WSACleanup;
	else if (0 == strcmp(name, "WSAGetLastError")) return (void *)WSAGetLastError;
	else if (0 == strcmp(name, "WSAIsBlocking")) return (void *)WSAIsBlocking;
	else if (0 == strcmp(name, "WSARecvEx")) return (void *)WSARecvEx;
	else if (0 == strcmp(name, "WSASetBlockingHook")) return (void *)WSASetBlockingHook;
	else if (0 == strcmp(name, "WSASetLastError")) return (void *)WSASetLastError;
	else if (0 == strcmp(name, "WSAStartup")) return (void *)WSAStartup;
	else if (0 == strcmp(name, "WSAUnhookBlockingHook")) return (void *)WSAUnhookBlockingHook;
//	else if (0 == strcmp(name, "WSApSetPostRoutine")) return (void *)WSApSetPostRoutine;
	else if (0 == strcmp(name, "__WSAFDIsSet")) return (void *)__WSAFDIsSet;
	else if (0 == strcmp(name, "accept")) return (void *)_accept;
	else if (0 == strcmp(name, "bind")) return (void *)_bind;
	else if (0 == strcmp(name, "closesocket")) return (void *)_closesocket;
	else if (0 == strcmp(name, "connect")) return (void *)_connect;
//	else if (0 == strcmp(name, "dn_expand")) return (void *)_dn_expand;
//	else if (0 == strcmp(name, "gethostbyaddr")) return (void *)_gethostbyaddr;
//	else if (0 == strcmp(name, "gethostbyname")) return (void *)_gethostbyname;
	else if (0 == strcmp(name, "gethostname")) return (void *)_gethostname;
//	else if (0 == strcmp(name, "getnetbyname")) return (void *)_getnetbyname;
	else if (0 == strcmp(name, "getpeername")) return (void *)_getpeername;
	else if (0 == strcmp(name, "getprotobyname")) return (void *)_getprotobyname;
	else if (0 == strcmp(name, "getprotobynumber")) return (void *)_getprotobynumber;
	else if (0 == strcmp(name, "getservbyname")) return (void *)_getservbyname;
	else if (0 == strcmp(name, "getservbyport")) return (void *)_getservbyport;
	else if (0 == strcmp(name, "getsockname")) return (void *)_getsockname;
	else if (0 == strcmp(name, "getsockopt")) return (void *)_getsockopt;
	else if (0 == strcmp(name, "htonl")) return (void *)_htonl;
	else if (0 == strcmp(name, "htons")) return (void *)_htons;
	else if (0 == strcmp(name, "inet_addr")) return (void *)_inet_addr;
//	else if (0 == strcmp(name, "inet_network")) return (void *)_inet_network;
	else if (0 == strcmp(name, "inet_ntoa")) return (void *)_inet_ntoa;
	else if (0 == strcmp(name, "ioctlsocket")) return (void *)_ioctlsocket;
//	else if (0 == strcmp(name, "listen")) return (void *)_listen;
	else if (0 == strcmp(name, "ntohl")) return (void *)_ntohl;
	else if (0 == strcmp(name, "ntohs")) return (void *)_ntohs;
//	else if (0 == strcmp(name, "rcmd")) return (void *)_rcmd;
	else if (0 == strcmp(name, "recv")) return (void *)_recv;
	else if (0 == strcmp(name, "recvfrom")) return (void *)_recvfrom;
//	else if (0 == strcmp(name, "rexec")) return (void *)_rexec;
//	else if (0 == strcmp(name, "rresvport")) return (void *)_rresvport;
//	else if (0 == strcmp(name, "s_perror")) return (void *)_s_perror;
//	else if (0 == strcmp(name, "select")) return (void *)_select;
	else if (0 == strcmp(name, "send")) return (void *)_send;
	else if (0 == strcmp(name, "sendto")) return (void *)_sendto;
//	else if (0 == strcmp(name, "sethostname")) return (void *)_sethostname;
	else if (0 == strcmp(name, "setsockopt")) return (void *)_setsockopt;
	else if (0 == strcmp(name, "shutdown")) return (void *)_shutdown;
	else if (0 == strcmp(name, "socket")) return (void *)_socket;
	return NULL;
}
