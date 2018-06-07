#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"
#include "string.h"


int employee_compare(void* pEmployeeA,void* pEmployeeB)
{
    int retorno=-1;
    Employee* empleado1=(Employee*)pEmployeeA;
    Employee* empleado2=(Employee*)pEmployeeB;

    retorno=strcmp(empleado1->name,empleado2->name);

    return retorno;
}


void employee_print(Employee* this)
{
    printf("%s--%d--%s\n",this->name,this->id,this->lastName);


}


Employee* employee_new(void)
{

    Employee* returnAux = NULL;

    return returnAux;

}

void employee_delete(Employee* this)
{


}

int employee_setId(Employee* this, int id)
{

    return 0;

}

int employee_getId(Employee* this)
{

    return 0;

}


