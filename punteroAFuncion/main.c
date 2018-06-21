#include <stdio.h>
#include <stdlib.h>

void funcionBienvenida(char * nombre);
void funcionDespedida (char* nombre);
void fDelega(void(*punteroFuncion)(char* elDato),char * nombre);
//void funcionDespedidaSin(char* nombre);
///void funcionBienvenidaMas(char* nombre);
int main()
{
    fDelega(funcionBienvenida,"NATALIA NATALIA");
    getche();
    fDelega(funcionDespedida,"NATALIA NATALIA");
    getche();
    //fDelega(funcionDespedidaSin,"NATALIA NATALIA");
    //getche();
    //fDelega(funcionBienvenidaMas,"NATALIA NATALIA");
   // getche();

}

void funcionBienvenida(char* nombre )
{
    printf("Bienvenida %s , a la empresa .", nombre);
}

void funcionDespedida(char * nombre)
{
    printf("vos  %s estas despedida ----->.",nombre);
}

void fDelega(void(*punteroFuncion)(char* elDato),char * nombre)
{
    punteroFuncion(nombre);
}


