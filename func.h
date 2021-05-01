#ifndef _FUNC_H_
#define _FUNC_H_

#include "IPhead.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //memset()

#include <sys/types.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <sys/statvfs.h>

int createSocket();

#endif