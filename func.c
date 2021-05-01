#include "func.h"

int createSocket()
{
    int sock = socket(PF_INET, SOCK_RAW, IPPROTO_IP);
    
    if(sock < 0)
    {
        perror("Can`t create raw socket");
        exit(-1);
    }
    
    return sock;
}