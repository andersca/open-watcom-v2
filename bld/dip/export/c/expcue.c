/****************************************************************************
*
*                            Open Watcom Project
*
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


#include "exp.h"

/*
        Stuff for source line cues
*/

walk_result DIPIMPENTRY( WalkFileList )( imp_image_handle *ii, imp_mod_handle im, 
                          DIP_IMP_CUE_WALKER *wk, imp_cue_handle *imp_cueh, void *d )
{
    /* unused parameters */ (void)ii; (void)im; (void)wk; (void)imp_cueh; (void)d;

    return( WR_CONTINUE );
}

imp_mod_handle DIPIMPENTRY( CueMod )( imp_image_handle *ii, imp_cue_handle *imp_cueh )
{
    /* unused parameters */ (void)ii; (void)imp_cueh;

    return( IMH_NOMOD );
}

size_t DIPIMPENTRY( CueFile )( imp_image_handle *ii, imp_cue_handle *imp_cueh, char *buff, size_t buff_size )
{
    /* unused parameters */ (void)ii; (void)imp_cueh; (void)buff; (void)buff_size;

    return( 0 );
}

cue_fileid DIPIMPENTRY( CueFileId )( imp_image_handle *ii, imp_cue_handle *imp_cueh )
{
    /* unused parameters */ (void)ii; (void)imp_cueh;

    return( 0 );
}

dip_status DIPIMPENTRY( CueAdjust )( imp_image_handle *ii,
                imp_cue_handle *src_imp_cueh, int adj, imp_cue_handle *dst_imp_cueh )
{
    /* unused parameters */ (void)ii; (void)src_imp_cueh; (void)adj; (void)dst_imp_cueh;

    return( DS_ERR|DS_FAIL );
}

unsigned long DIPIMPENTRY( CueLine )( imp_image_handle *ii, imp_cue_handle *imp_cueh )
{
    /* unused parameters */ (void)ii; (void)imp_cueh;

    return( 0 );
}

unsigned DIPIMPENTRY( CueColumn )( imp_image_handle *ii, imp_cue_handle *imp_cueh )
{
    /* unused parameters */ (void)ii; (void)imp_cueh;

    return( 0 );
}

address DIPIMPENTRY( CueAddr )( imp_image_handle *ii, imp_cue_handle *imp_cueh )
{
    /* unused parameters */ (void)ii; (void)imp_cueh;

    return( NilAddr );
}

search_result DIPIMPENTRY( LineCue )( imp_image_handle *ii,
                imp_mod_handle im, cue_fileid file, unsigned long line,
                unsigned column, imp_cue_handle *imp_cueh )
{
    /* unused parameters */ (void)ii; (void)im; (void)file; (void)line; (void)column; (void)imp_cueh;

    return( SR_NONE );
}

search_result DIPIMPENTRY( AddrCue )( imp_image_handle *ii,
                imp_mod_handle im, address addr, imp_cue_handle *imp_cueh )
{
    /* unused parameters */ (void)ii; (void)im; (void)addr; (void)imp_cueh;

    return( SR_NONE );
}

int DIPIMPENTRY( CueCmp )( imp_image_handle *ii, imp_cue_handle *imp_cueh1, imp_cue_handle *imp_cueh2 )
{
    /* unused parameters */ (void)ii; (void)imp_cueh1; (void)imp_cueh2;

    return( 0 );
}
