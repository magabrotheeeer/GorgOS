#include "ports.h"


unsigned char read_port(unsigned short port)
{
    unsigned char result;
    __asm__("in %%dx, %%al": "=a" (result) : "d" (port));

    return result;
}

void write_port(unsigned short port, unsigned char data)
{
    __asm__("out %%al, %%dx": : "a"(data), "d" (port));
}
