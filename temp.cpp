#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>



void temporizador(int hrs,int minu,int seg);

void temp(){

int hrs,minu,seg;

do{

printf("\t\t\tCRONOMETRO\n");
printf("\tIngrese en que tiempo desea detenernse(solo numeros enteros porfavor)\n");
printf("\t\t\tEn cuantas horas? : ");
scanf("\t\t\t%d",&hrs);

printf("\t\t\tEn cuantos minutos? : ");
scanf("\t\t\t%d",&minu);

printf("\t\t\tEn cuantos segundos? : ");
scanf("\t\t\t%d",&seg);


if(hrs > 23 || hrs < 0 || minu > 60 || minu < 0 || seg > 60 || seg < 0){
printf("\t\t\t\nUn parametro esta fuera del limite establecido, intente de nuevo\n");


}
system("clear");

}while(hrs > 23 || hrs < 0 || minu > 60 || minu < 0 || seg > 60 || seg < 0);

system("clear");



temporizador(hrs,minu,seg);


}
