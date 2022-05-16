#include <stdio.h>
#include <stdlib.h>

#define TAMCAD 10

int aplicarAumento(int precioProducto,int* precioAumentado);
int reemplazarCaracteres(char cadena[],int tamCad,char char1,char char2);

typedef struct{
    int id;
    char nombre[20];
    char tipo; //dos tipos s de sputnik o p de pfizer
    float efectividad;

}eVacuna;


int main()
{

    int precioProducto;
    int precioAumentado;

    printf("ingrese precio: ");
    scanf("\n%d", &precioProducto);

    aplicarAumento(precioProducto, &precioAumentado);
    printf("%d", precioAumentado);


    char cadena[TAMCAD];
    char char1;
    char char2;






    int proxId=1000;
    //eVacuna lista[4] = {1000, "juan", 's', 0.75},{1001, "pedro", 'p', 0.65},{1003, "german", 'p', 0.65},{1004, "bob", 's', 0.75}




    return 0;
}

int aplicarAumento(int precioProducto, int* precioAumentado){

    int todoOk=0;

    if(precioAumentado!=NULL)
    {
        *precioAumentado=precioProducto+((precioProducto/100)*15);
        todoOk=1;
    }


    return todoOk;
}

int reemplazarCaracteres(char cadena[],int tamcad, char char1, char char2){

    char auxChar;
    int contador;

    for(int i=0;i<tamcad;i++)
    {
        if(cadena[i]==char1)
        {
            char1=auxChar;
            char2=char1;
            auxChar=char2;

            contador++;
        }
    }

    return contador;
}
