//
// file:		dlfcn.h
// created on:	2018 Dec 17
//
#ifndef __wlac_dlfcn_h__
#define __wlac_dlfcn_h__

#include <first_includes/common_include_for_headers.h>
#include <WinSock2.h>
#include <Windows.h>
#include <WS2tcpip.h>

// https://linux.die.net/man/3/dlopen
// https://docs.microsoft.com/en-us/windows/desktop/api/libloaderapi/nf-libloaderapi-loadlibraryexa

__BEGIN_C_DECLS

#define  RTLD_LAZY (LOAD_LIBRARY_AS_DATAFILE_EXCLUSIVE|LOAD_LIBRARY_AS_IMAGE_RESOURCE)

//GEM_API_FAR int poll_sockets(struct pollfd *fds, nfds_t nfds, int timeout);

#define dlopen(_fileName,_flag)		( (void*)LoadLibraryExA((_fileName),NULL,(_flag))	)

__END_C_DECLS

#endif  // #ifndef __wlac_dlfcn_h__
