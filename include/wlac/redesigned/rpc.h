
// 2017 Dec 22

#ifndef __WLAC_REDESIGNED_RPC_HEADER__
#define __WLAC_REDESIGNED_RPC_HEADER__

#include "first_includes/common_include_for_headers.h"

#pragma include_alias( <rpc.h>, <rpc.h> )

#ifdef XDR_RPC_LIB_INCLUDE
#include <rpc/rpc.h>  // Include header by ...
#endif  // #ifdef XDR_RPC_LIB_INCLUDE
#include "../shared/rpc.h"  // Include header by Windows


#pragma include_alias( <rpc.h>, <redesigned/rpc.h> )


#endif /* ndef __RPC_HEADER__ */
