#include <stdio.h>
#include <stdlib.h>
#include "tramite.h"
#include "arraylist.h"

int main()
{
    int opcion ;
    int i;
    int len;

    int ultimoIdTramiteUrgente=0;
    int ultimoIdTramiteRegular=0;

    arraylist* listaTramitesUrgentes;
    arraylist* listaTramitesRegulares;

    arraylist* atendidosUrgentes;
    arraylist* atendidosRegulares;

    eTramite * tramiteActual;
    char dni [10];

    listaTramitesUrgentes=al_newarraylist();
    listaTramitesRegulares=al_newarraylist();

    atendidosUrgentes=al_newarraylist();
    atendidosRegulares=al_newarraylist();

    do
    {
        printf("------MENU------                                                                  \n");
        printf("1.Tramite urgente\n");
        printf("2.Tramite regular\n");
        printf("3.Proximo\n");
        printf("4.Listar\n");
        printf("5.Informar\n");
        printf("6.SALIR\n");
                                                                                                                                                scanf("%d",opcion);

        switch(opcion)
        {
        case 1:
            tramiteActual=new_Tramite();
            ultimoIdTramiteUrgente++;
            setId(tramiteActual,ultimoIdTramiteUrgente);
            printf("Ingrese su dni:");
            fflush(stdin);
            gets(dni);
            setDni(tramiteActual,dni);
            listaTramitesUrgentes->add(listaTramitesUrgentes,tramiteActual);

            break;
        case 2:
            tramiteActual=new_Tramite();
            ultimoIdTramiteRegular++;
            setId(tramiteActual,ultimoIdTramiteRegular);
            printf("Ingrese su dni:");
            fflush(stdin);
            gets(dni);
            setDni(tramiteActual,dni);
            listaTramitesRegulares->add(listaTramitesRegulares,tramiteActual);

            break;
        case 3:
            if(!listaTramitesUrgentes->isEmpty(listaTramitesUrgentes))
                {
                    tramiteActual=(eTramite*)listaTramitesUrgentes->pop(listaTramitesUrgentes);
                    printf("cliente a ser atendido(URGENTE):");
                    mostrarTramite(tramiteActual);
                }else if(!listaTramitesRegulares->isEmpty(listaTramitesRegulares))
                {
                    tramiteActual=(eTramite*)listaTramitesRegulares->pop(listaTramitesRegulares);
                    printf("cliente a ser atendido(REGULAR):");
                    mostrarTramite(tramiteActual);
                }

            break;
          case 4:
                if(!listaTramitesUrgentes->isEmpty(listaTramitesUrgentes))
                    {
                        len=listaTramitesUrgentes->len(listaTramitesUrgentes);

                printf("TRAMITES URGENTES");
                        for(i=0;i<listaTramitesUrgentes->len;i++)
                        {
                            tramiteActual=(eTramite*) listaTramitesUrgentes->get(listaTramitesUrgentes,i);
                            mostrarTramite(tramiteActual);
                        }
                printf("TRAMITES REGULARES");
                        for(i=0;i<listaTramitesRegulares->len;i++)
                        {
                        tramiteActual=(eTramite*) listaTramitesRegulares->get(listaTramitesRegulares,i);
                        mostrarTramite(tramiteActual);
                        }
                    }
                break;
            case 5:
                 if(!atendidosUrgentes->isEmpty(atendidosUrgentes))
                    {
                        len=atendidosUrgentes->len(atendidosUrgentes);
                        atendidosUrgentes->sort(atendidosUrgentes,compararDni,0);
                        printf("TRAMITE URGENTE:\n");
                        for(i=0;i<len;i++)
                            {
                                tramiteActual=(eTramite*)atendidosUrgentes->get(atendidosUrgentes);
                            }
                    }
                    if(!atendidosRegulares->isEmpty(atendidosRegulares))
                        {
                            len=atendidosRegulares->len(atendidosRegulares);
                            atendidosRegulares->sort(atendidosRegulares,compararDni,0);
                            printf("TRAMITE REGULAR:\n");
                            for(i=0;i<len;i++)
                                {
                                    tramiteActual=(eTramite*)atendidosRegulares->get(atendidosRegulares);
                                }
                        }
        }

    }while(opcion!=6);

}
