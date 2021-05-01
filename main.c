#include "func.h"

#define MAX_PACKET_SIZE 0x10000

char src[10];
char dest[10];
char ds[15];
unsigned short lowbyte;
unsigned short hibyte;

int main()
{
    char Buffer[MAX_PACKET_SIZE];

    int sock = createSocket();

    struct hostent* host;
    bindSocket(sock, host);

    ioctl(sock);

    return 0;
}