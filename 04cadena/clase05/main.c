#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{// EXISTE UN CORTE DE LINEA \0
  char nombre[6];
  char otroNombre[50]="jose perez";
  int largo;
  int compara;

// SE CONVIERTE TODO EN MAYUSCULA.
strupr(otroNombre);
  //FUNCION QUE RECIBE UN CHAR0
 // strcpy(nombre,otroNombre);
//strncpy(nombre,otroNombre,5);
  printf("Su nombre es %s",otroNombre);


//printf("INGRESE SU NOMBRE: ");
  // ES UNA FUNCION ESPECIALIZADA EN LEER CADENA DE CARACTERES.
 //  ESTA ES SOLO PARA WINDOWS
 //gets(nombre);
 //OTRA FORMA MAS:)
// fgets(nombre,50,stdin);
scanf("%s",&nombre);
 // OTRA FORMA PARA WINDOWS
 //scanf("%[^\n", nombre)
/* largo = strlen(nombre);
printf(" %d ",largo);
 strlen(nombre);*/
// LA FUNCION DEVUELVE UN ENTERO
// CUANDO ES EL MISMO NOMBRE ES 0.
// CUANDO SON DISTINTAS ES -1. Y EL VALOR ES MENOR. TIPO LETRA M Y P. O 43 Y 57
// Y CUANDO SON DISTENTAS PERO EL VALOR ES MAYOR. DEVUELVE UN 1 W Y P. O 70 Y 57
// STRICMP ES PARA TOMAR LAS MAYUSCULAS
// compara = stricmp(nombre , "pepe");
// printf("%d",compara);
// ESTA ES LA FORMA EN JAVAS
/* if(nombre == "pepe")
 {
    printf("Usted se llama pepe");

 }*/

 // printf("SU NOMBRE ES:  %s", nombre);
    return 0;
}
// HACER EL STRLEN, ESCRIBIENDO EL \0 EN LOS LUGARES DONDE VA A EL \N. PARA DEVOLVER SIEMPRE 4 Y NO BASURA.
//PRACTICAR CON UNA VARIABLE CON EL NOMBRE. ESTA ES DE IGUAL MANERA INGREASDA DEL USUARIO
// EN OTRA EL APELLIDO. ESTA TAMBIEN DE IGUAL MANERA
// OTRA CON APELLIDO Y NOMBRE. PRIMER LETRA EN MAYUSCULA UNA COMA(,) LA PRIMERA LETRA DEL NOMBRE EN MAYUSCULA EL RESTO EN MINISCULA

