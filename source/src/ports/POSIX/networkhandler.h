/*******************************************************************************
 * Copyright (c) 2009, Rockwell Automation, Inc.
 * All rights reserved.
 *
 ******************************************************************************/
#ifndef OPENER_NETWORKHANDLER_H_
#define OPENER_NETWORKHANDLER_H_

#include <string.h>
#include <sys/socket.h>

#include "typedefs.h"

/** @brief Executes platform dependent network handler initialization code
 *
 * 	@return EipStatusOk if initialization was successful, otherwise EipStatusError
 */
EipStatus NetworkHandlerInitializePlatform(void);

/** @brief Platform dependent code to close a socket
 *
 *  @param socket_handle The socket handle to be closed
 */
void CloseSocketPlatform(int socket_handle);

/** @brief This function shall return the current time in microseconds relative to epoch, and shall be implemented in a port specific networkhandler
 *
 *  @return Current time relative to epoch as MicroSeconds
 */
MicroSeconds GetMicroSeconds(void);

/** @brief This function shall return the current time in milliseconds relative to epoch, and shall be implemented in a port specific networkhandler
 *
 *  @return Current time relative to epoch as MilliSeconds
 */
MilliSeconds GetMilliSeconds(void);

#endif /* OPENER_NETWORKHANDLER_H_ */
