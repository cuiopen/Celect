#include <cstring>
#include <WinSock2.h>
#include <windows.h>
#include <stdio.h>

#include "NetworkPeerTCPIPWin32.h"
#include "gsinterpreter.h"

unsigned int internalAuthConnection(void *a, NetworkPeerTCPIPWin32 *b) {
	char buf[] = "sup mom";
	writeSocketBytesBlocking(b->s, buf, strlen(buf));
	return 0;
}

unsigned int startORB(int i) {
	OutputDebugStringA("STUB: startORB");
	return 0;
}

unsigned int internalCheckPeers() {
	OutputDebugStringA("STUB: internalCheckPeers");
	return 0;
}

unsigned int getNetworkPacketKindCounter() {
	OutputDebugStringA("STUB: getNetworkPacketKindCounter");
	return 0;
}

unsigned int setOurHostingIndicator(float f) {
	OutputDebugStringA("STUB: setOurHostingIndicator");
	return 0;
}

unsigned int sendHostingIndicator(float f) {
	OutputDebugStringA("STUB: sendHostingIndicator");
	return 0;
}

unsigned int init(unsigned int decodedLoginToken) {
	OutputDebugStringA("STUB: init");
	return 0;
}

unsigned int checkPing() {
	OutputDebugStringA("STUB: checkPing");
	return 0;
}

unsigned int afterShutdown() {
	OutputDebugStringA("STUB: afterShutdown");
	return 0;
}

unsigned int handleNetworkPacket(void *a) {
	OutputDebugStringA("STUB: handleNetworkPacket");
	return 0;
}

extern "C" __declspec(dllexport) void* __cdecl GSNativeGetMethodImpl_Cluster_ObjectLocatorServer(const char *methodName) {
	if(strcmp(methodName, "internalAuthConnection(pointer)") == 0) 
		return &internalAuthConnection;
	if(strcmp(methodName, "startORB(int)") == 0) 
		return &startORB;
	if(strcmp(methodName, "internalCheckPeers()") == 0) 
		return &internalCheckPeers;
	if(strcmp(methodName, "getNetworkPacketKindCounter()") == 0) 
		return &getNetworkPacketKindCounter;
	if(strcmp(methodName, "setOurHostingIndicator(float)") == 0) 
		return &setOurHostingIndicator;
	return NULL;
}

extern "C" __declspec(dllexport) void* __cdecl GSNativeGetMethodImpl_Cluster_ObjectLocatorServer_dot_ObjectLocatorServerPeer(const char *methodName) {
	if(strcmp(methodName, "sendHostingIndicator(float)") == 0) 
		return &sendHostingIndicator;
	if(strcmp(methodName, "init(DecodedLoginToken)") == 0) 
		return &init;
	if(strcmp(methodName, "checkPing()") == 0) 
		return &checkPing;
	if(strcmp(methodName, "afterShutdown()") == 0) 
		return &afterShutdown;
	if(strcmp(methodName, "handleNetworkPacket(pointer)") == 0) 
		return &handleNetworkPacket;
	return NULL;
}