#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void temp();

void temporizador(int hrs,int minu,int seg){

int horas=0,minutos=0,segundos=0,cont = 5;

while(1==1){


segundos++;


if(segundos == 60){
   segundos = 0;
   minutos++;
   }
if(minutos == 60){
   minutos = 0;
   segundos = 0;
   horas++;
   }
if(horas == 23){
   exit(-1);
   }

   usleep(1000000);

           system("clear");
           printf("\n\n");
           printf("\n\t\t\t\t\%.2d : %.2d : %.2d\n",horas,minutos,segundos);


                  printf("\tEl reloj se detendra en %d hora(s) con %d minuto(s) y %d segundo(s)\n",hrs,minu,seg);



            while(segundos == cont){
                printf("\n\t\t\t\tSegundos\n");
                 cont = cont + 5;
                 }

                  if(segundos == 0){
                   printf("\n\t\t\t\tSegundos\n");

                   cont = 5;
                  }


                 if(hrs == horas && minu == minutos && seg == segundos){
                    printf("\n\t\t\tEl cronometro ha finalizado\n");
                    exit(0);

                    usleep(1000000);




                   }
                 }
               }
