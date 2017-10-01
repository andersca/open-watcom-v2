/****************************************************************************
*
*                            Open Watcom Project
*
* Copyright (c) 2017-2017 The Open Watcom Contributors. All Rights Reserved.
*    Portions Copyright (c) 1983-2002 Sybase, Inc. All Rights Reserved.
*
*  ========================================================================
*
*    This file contains Original Code and/or Modifications of Original
*    Code as defined in and that are subject to the Sybase Open Watcom
*    Public License version 1.0 (the 'License'). You may not use this file
*    except in compliance with the License. BY USING THIS FILE YOU AGREE TO
*    ALL TERMS AND CONDITIONS OF THE LICENSE. A copy of the License is
*    provided with the Original Code and Modifications, and is also
*    available at www.sybase.com/developer/opensource.
*
*    The Original Code and all software distributed under the License are
*    distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
*    EXPRESS OR IMPLIED, AND SYBASE AND ALL CONTRIBUTORS HEREBY DISCLAIM
*    ALL SUCH WARRANTIES, INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF
*    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR
*    NON-INFRINGEMENT. Please see the License for the specific language
*    governing rights and limitations under the License.
*
*  ========================================================================
*
* Description:  WHEN YOU FIGURE OUT WHAT THIS FILE DOES, PLEASE
*               DESCRIBE IT HERE!
*
****************************************************************************/


#include "variety.h"
#include "widechar.h"
#include <stdlib.h>
#include <direct.h>
#include <dos.h>
#if defined( __OS2__ )
    #include <wos2.h>
#endif
#include "rterrno.h"
#include "thread.h"


_WCRTLINK CHAR_TYPE *__F_NAME(_getdcwd,_wgetdcwd)( int drive, CHAR_TYPE *buffer, size_t maxlen )
{
    unsigned            olddrive, tmpdrive;

    /*** Change drive if necessary ***/
    if( drive != 0 ) {
        _dos_getdrive( &olddrive );
        _dos_setdrive( drive, &tmpdrive );
        _dos_getdrive( &tmpdrive );
        if( drive != tmpdrive ) {
            _RWD_errno = ENODEV;
            return( NULL );
        }
    }
    buffer = __F_NAME(getcwd,_wgetcwd)( buffer, maxlen );
    if( drive != 0 )  _dos_setdrive( olddrive, &tmpdrive );
    return( buffer );
}
