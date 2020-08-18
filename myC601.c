/*Program Name : program start
Author : Mr.Peerapon Sornkaew
Date : 8/18/63
*/
#include<stdio.h>//Link from library studio.h
void message();//Function prototype declaration section
void cat();//Function prototype declaration section

void main(){
    int animal=5;//Variable declaration
    printf("Hello World\n");//Executeetable part
    printf("%i",animal);//Executeetable part
    message();//Function call
    cat();//Function call
}

//Sub function : message
void message(){
    printf("We can take mor sub function\n");
}

//Sub function : cat
void cat(){
    printf("I Love My Cat\n");
}