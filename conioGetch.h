#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

#ifndef conioGetch
#define conioGetch1


int getch(void) // Getch para linux
{
struct termios oldattr, newattr;
int ch;
tcgetattr( STDIN_FILENO, &oldattr );
newattr = oldattr;
newattr.c_lflag &= ~( ICANON | ECHO );
tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
ch = getchar();
tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
return ch;
}
#endif // conioGetch
