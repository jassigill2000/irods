/*** Copyright (c), The Regents of the University of California            ***
 *** For more information please refer to files in the COPYRIGHT directory ***/
/* dataObjClose.h - This file may be generated by a program or script
 */

#ifndef DATA_OBJ_CLOSE_H__
#define DATA_OBJ_CLOSE_H__

/* This is a high level type API call */

#include "rcConnect.h"
#include "dataObjInpOut.h"
#include "objInfo.h"
#include "rodsType.h"

#if defined(RODS_SERVER)
#define RS_DATA_OBJ_CLOSE rsDataObjClose
/* prototype for the server handler */
int
rsDataObjClose( rsComm_t *rsComm, openedDataObjInp_t *dataObjCloseInp );
int
irsDataObjClose( rsComm_t *rsComm, openedDataObjInp_t *dataObjCloseInp,
                 dataObjInfo_t **outDataObjInfo );
int
_rsDataObjClose( rsComm_t *rsComm, openedDataObjInp_t *dataObjCloseInp );
int
l3Close( rsComm_t *rsComm, int l1descInx );
int
_l3Close( rsComm_t *rsComm, int l3descInx );
int
l3Stat( rsComm_t *rsComm, dataObjInfo_t *dataObjInfo, rodsStat_t **myStat );
int
procChksumForClose( rsComm_t *rsComm, int l1descInx, char **chksumStr );
#else
#define RS_DATA_OBJ_CLOSE NULL
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* prototype for the client call */
/* rcDataObjClose - Close an opened iRODS data object descriptor.
 * Input -
 *   rcComm_t *conn - The client connection handle.
 *   dataObjCloseInp_t *dataObjCloseInp - Relevant items are:
 *	l1descInx - the iRODS data object descriptor to close.
 *
 * OutPut -
 *   int status of the operation - >= 0 ==> success, < 0 ==> failure.
 */

int
rcDataObjClose( rcComm_t *conn, openedDataObjInp_t *dataObjCloseInp );

#ifdef __cplusplus
}
#endif
#endif	// DATA_OBJ_CLOSE_H__