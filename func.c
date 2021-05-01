#include "func.h"

int createSocket()
{
    int sock = socket(PF_INET, SOCK_RAW, IPPROTO_IP);
    
    if(sock < 0)
    {
        perror("Can`t create raw socket.\n");
        exit(-1);
    }
    
    return sock;
}

void bindSocket(int sock, struct hostent* host)
{
    char name[128];
    gethostname(name, sizeof(name));
    host = gethostbyname( name );

    struct sockaddr_in sa;
    sa.sin_family = AF_INET;
    sa.sin_addr.s_addr = ((struct in_addr*)host->h_addr_list[0])->s_addr;

    if(bind(sock, (struct sockaddr*)&sa, sizeof(struct sockaddr_in)) != 0)
    {
        perror("Error in bind socket.\n");
        exit(-1);
    }
}