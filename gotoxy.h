#include <stdio.h>
#include <stdlib.h>

#ifndef GOTOXY_H
#define GOTOXY_H 1

void gotoxy(int x,int y){
    printf("%c[%d;%df",0x1B,y,x);
    }


#endif // GOTOXY
