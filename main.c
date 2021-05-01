#include "func.h"

char src[10];
char dest[10];
char ds[15];
unsigned short lowbyte;
unsigned short hibyte;

int main()
{
    int sock = createSocket();

    struct hostent* host;
    bindSocket(sock, host);

    return 0;
}