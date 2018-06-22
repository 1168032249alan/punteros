#include "tramite.h"
#include <stdio.h>
#include <stdlib.h>

eTramite* new_Tramite()
{
    eTramite* aux;
    aux=(eTramite*)malloc(sizeof(eTramite));
}

int setId(eTramite* this,int id)
{
    int seteo=-1;

    if(this!=NULL)
        {
            this->idTramite=id;
            seteo=0;
        }
        return seteo;
}

int getId(eTramite* this)
{
    int id=-1;
    if(this!=NULL)
        {
            id=this->idTramite;
        }
        return id;
}

int setDni(eTramite* this, char dni)
{
    int seteo=-1;

    if(this!=NULL && dni!=NULL)
        {
            strcpy(this->dni,dni);
            seteo=0;
        }
        return seteo;

}

int getDni(eTramite* this)
{
    char * dni=NULL;

    if(this!=NULL)
        {
            dni=this->dni;
        }
    return dni;
}

void mostrarTramite(eTramite* this)
{
    int mostro=-1;
    if(this!=NULL)
        {
            printf("%d--%s \n",this->idTramite,this->dni);
            mostro=0;
        }
        return mostro;
}
