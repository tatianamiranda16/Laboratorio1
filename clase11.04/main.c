#include <stdio.h>
#include <stdlib.h>
#define cantidad_alumnos 3
// VER STRIGNLETRA
int getStringLetra (char mensaje,char input);
void getString(char mensaje[],char input[]);
int main()
{
 //ARRAY PARALELOS
 // ATRIBUTOS DEL ELEMENTOS. EJ NOMBRE{ ,  ,  , } APELLIDO{  ,  ,  , } EDAD{  , , ,} NOTA{  , ,  ,} TODO ESTO ES DE UN ALUMNO
 // DEBEN TENER LA MISMA CANTIDAD DE ELEMENTOS
// AL DEFINIR ARRIBA LA CANTIDAD DE CARACTERES [10]
// EN EL DEFINE SE DEFINE LA CANTIDAD DE ALMUNOS , 3  EN ESTE CASO
  char nombre[cantidad_alumnos][10] = {"Juan","Maria","Elena"};
  char apellido[cantidad_alumnos][10] = {"Fernandez","Garcia","Lopez"};
  int edad = {20,21,24};
  int nota = {10,7,8};

  int i;
  for(i = 0; i < cantidad_alumnos;i++)
{
    if(nombre[i] !=-1)
        {
        printf("\n nombre %s ", nombre[i]);
        }
}

char unNombre[10];
getString("ingrese un nombre \n",unNombre[i]);
 int esSoloLetra(char palabra[]);
 {
  int i;
  while
    {
     if (palabra[i]!='')
     {
      if(palabra[i]<'a' && palabra [i]>'z')
        {
         if(palabra[i]<'A' && palabra>'z')
            {
            return 0;
            }
        }
     }

    }
 }



}
void getString(char mensaje[],char input[])
{
 printf(mensaje);
 scanf("%s",input);

}
int getStringLetra (char mensaje,char input)
{
   printf(mensaje);
   scanf("%d",input);

}
