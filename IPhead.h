#include <stdio.h>

typedef struct _IPHeader
{
    unsigned char  ver_len;		// version
    unsigned char  tos;			// type of service 
    unsigned short length;		// length of packet 
    unsigned short id;			// Id 
    unsigned short flgs_offset;	// flags and offset
    unsigned char  ttl;			// time of life
    unsigned char  protocol;
    unsigned short xsum;		// check sum 
    unsigned long  src;			// Source ip 
    unsigned long  dest;		// Destination ip 
    unsigned short *params;
    unsigned char  *data;			
} IPHeader;