#ifndef TRAMITE_H_INCLUDED
#define TRAMITE_H_INCLUDED


typedef struct
{
    int idTramite;
    char dni[10];
}eTramite;

eTramite * new_Tramite();
int setId(eTramite*,int);
int getId(eTramite*);

int setDni(eTramite*,char*);
int getDni(eTramite*);

void mostrarTramite(eTramite*);
int compararDni(void * tramiteA,void * tramiteB);
int mostrarListaTramite(arraylist* listado)
int atenderTramite()
#endif // TRAMITE_H_INCLUDED
