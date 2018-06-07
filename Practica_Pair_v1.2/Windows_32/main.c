#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"
#include "string.h"

/****************************************************
    Menu:
        1. Parse del archivo data.csv
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/


int main()
{
    int aux;

    Employee* auxEmpleado;


    Employee*e1;
    Employee*e2;

    ArrayList* lista;
    lista=al_newArrayList();//se le pide memoria al sistema operativo .

    e1=(Employee *)malloc(sizeof(Employee));//cargar valores para empleados
    e1->id=666;
    strcpy(e1->name,"AAJuan");
    strcpy(e1->lastName,"AAGomez");
    e1->isEmpty=1;

    al_add(lista,e1);

    e2=(Employee *)malloc(sizeof(Employee));//cargar valores para empleados
    e2->id=777;
    strcpy(e2->name,"BBPedro");
    strcpy(e2->lastName,"BBFulano");
    e2->isEmpty=2;

    al_add(lista,e2);
    aux=al_len(lista);

    auxEmpleado=(Employee*)al_get(lista,0);//o para arrancar en el primer lugar disponible.

    printf("cantidad de empleados: %d\n",aux);

    int i;
    for(i=0;i<2;i++)
    {
        auxEmpleado=(Employee*)al_get(lista,i);
        employee_print(auxEmpleado);
    }

    printf("\n\n\nDespues de ordenar\n");
    al_sort(lista,employee_compare,1);
    for(i=0;i<2;i++)
    {
        auxEmpleado=(Employee*)al_get(lista,i);
        employee_print(auxEmpleado);
    }



    return 0;
}
