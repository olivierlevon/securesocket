


#ifndef PCH_H
#define PCH_H

#ifndef UNICODE
#define UNICODE
#endif

// Including SDKDDKVer.h defines the highest available Windows platform.
// If you wish to build your application for a previous Windows platform, include WinSDKVer.h and
// set the _WIN32_WINNT macro to the platform you wish to support before including SDKDDKVer.h.
#include <SDKDDKVer.h>


#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
#endif

#include <rpc.h>
#include <ntdsapi.h>
#include <wchar.h>
#include <Winsock2.h>
#include <mstcpip.h>
#include <ws2tcpip.h>
#include <fwpmu.h>



#endif //PCH_H
