#include "conioGetch.h"
#include "gotoxy.h"
#include <stdlib.h>

#define DOWN 107
#define UP 105
#define ENTER 97


void agenda();
void temp();

void menu(){
int tecla = 0;
int i = 1;

gotoxy(10,3 + i );printf("==>");

do{

gotoxy(15,2);printf("\tPequenia agenda de organizacion\n");
gotoxy(15,4);printf(".Temporizador\n");
gotoxy(15,5);printf(".Agenda\n");
gotoxy(15,6);printf(".Salir\n");

tecla = getch();

gotoxy(10,3 + i );printf("   ");


switch(tecla){

case UP: i--;
  if(i == 0){
    i = 3;
  }
break;

 case DOWN: i++;
     if(i == 4){
     i = 1;
     }
break;

 case ENTER:


       if(i == 1){

       printf("\x1B[2J\x1B[H");
        gotoxy(15,4);temp();
        getch();
        }

       if(i == 2){
        gotoxy(15,4);system("clear");
        gotoxy(20,11);agenda();
        getch();
        }

       if(i == 3){
         exit(0);
        }
 break;

}


gotoxy(10,3 + i );printf("==>");


}while(1==1);

}

/*no le prestes antencion
switch(tecla){

case UP: i--;
  if(i == 0){
    i = 3;
  }

 case DOWN: i++;
     if(i == 4){
     i = 1;
     }
break;

 case ENTER:
       if(i == 1){
        temporizador();
 break;

}

*/

/*

if(tecla==UP ){
i--;
  if(i == 0){
    i = 3;
  }
}
else if(tecla == DOWN){
i++;
     if(i == 4){
     i = 1;
     }
}

else if(tecla == ENTER){
       if(i == 1){
        temporizador();
       }
}


*/
