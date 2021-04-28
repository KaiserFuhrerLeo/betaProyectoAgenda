#ifndef conioleo

#define conioleo

#include <termios.h>//se invonca a termios
#include <unistd.h>

char getch ();

char getch () {

termios oldAttr, newAttr;//se inicializan estas variables

tcgetattr(STDIN_FILENO, &oldAttr);//tcge.. referencia al archivo abierto asociado a nuestra terminal, es decir stdim, STDIN_FILENO, no tengo archivos estoy trabajando desde el flujo de entrada el teclado

newAttr = oldAttr;
newAttr.c_lflag &= ~ (ICANON | ECHO);

tcgetattr(STDIN_FILENO,TCSANOW,&newAttr);

char c = getchar();

tcgetattr(STDIN_FILENO, TCSANOW,&oldAttr);

return c;
}

#endif // conioleo
