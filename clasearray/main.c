#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mostrarVector(int datos[],int tamanio);
void mostrarPalabras(char datos[][10],int tamanio);

int main()

{// EL ARRAY SE VA A TRATAR COMO UN STRING, ACA HAY UN SOLO DATO, UN VECTOR DE CARACTERES.
 // ES UNA SOLA PALABRA ESTO,
    char usuario[][10] = {"JOSE","MARIA","JESUS","MARTA","NICOLAS"};
    //PUNTERO OCULTO, ACA SI VA A VER 10 DATOS EN TOTAL
    int nota[10] = {8,5,2,10,3};
    int i;
    int j;


    mostrarVector(nota,5);
    mostrarPalabras(usuario,5);
      for( i=0;i<5;i++)
   {
       printf("alumno: %s nota: %d    \n,",usuario[i],nota[i]);
   }//ORDENAMIENTO POR NOTA

   for(i=0;i<5;i++)
   {
       for(j=0;j<4;j++)
       {int resultado;

           /* EJEMPLOS DE TIPO DE ARGUMENTACION
        printf("%d => %d   \n",nota[i],nota[j]);

       resultado = strcmp("hola","hola");//0
       printf("\n iguales: %d",resultado);
       resultado = strcmp("Hola","hola");//-1
       printf("\n primera: %d",resultado);
       resultado = strcmp("hola","Hola");//1
       printf("\n segunda: %d",resultado);
       resultado = strcmp("hola","Hola");//1

       */




       // COMPARACION DE ESAS DOS PALABRAS
        resultado =(strcmp(usuario[i],usuario[j]) == -1);
        if(resultado == 1)

        {// COMO PASAR DE UN VASO EL LIQUIDO A OTRO SIN MEZCLAR. NECESITANDO UN EXTRA
         // PARA PASARLO
            int aux = nota[i];
            nota[i] = nota[j];
            nota[j] = aux;

            char auxstring [10];
             // ESTE ES PARA COPIAR
            strcpy(auxstring,usuario[i]);
            strcpy(usuario[i],usuario[j]);
            strcpy(usuario[j],auxstring);


        }
       }

   }


    // EL PRIMER FOR TOMA EL NUMERO Y EL SEGUNDO COMPARA
/*   for( i=0;i<5;i++)
   {
       printf("alumno: %s nota: %d    \n,",usuario[i],nota[i]);
   }*///ORDENAMIENTO POR NOTA
   /*
   for(i=0;i<5;i++)
   {
       for(j=0;j<4;j++)
       {
        printf("%d => %d   \n",nota[i],nota[j]);
        // DE MENOR A MAYOR FORMA DE ORDENAMIENTO
        if(nota[i]<nota[j])

        {// COMO PASAR DE UN VASO EL LIQUIDO A OTRO SIN MEZCLAR. NECESITANDO UN EXTRA
         // PARA PASARLO
            int aux = nota[i];
            nota[i] = nota[j];
            nota[j] = aux;
             char auxstring [10];
            strcpy(auxstring,usuario[i]);
            strcpy(usuario[i],usuario[j]);
            strcpy(usuario[j],auxstring);


        }
       }
   }for( i=0;i<5;i++)
   {
       printf("alumno: %s nota: %d    \n,",usuario[i],nota[i]);
   }
    /* INICIALIZACION DE ARRAY EN PARARELO
    for (i=0;i<5;i++)
    {// el "" MUESTRA UNA LETRA
      //  usuario[i][0]=" ";
//  PARA INICIALIZAR UN ARRAY SIN DATOS AL PONERLO ASI NO ARROJA BASURA Y QUEDA VACIO
    strcpy(usuario[i],"");
 //   nota[i] = 0;
    }/* CARGA SECUENCIAL DE ARRAY PARALELO
    for(i=0;i<5;i++)
        {// POR CADA USUARIO HAY UN NOTA
    printf("Ingrese un usuario: # %d ",i+1);
    scanf("%s",usuario[i]);
    // EN VES DE SCANF , SE PUEDE UTILIZAR
    gets(usuario[i]); DE CADA VEXZ QUE SE APRETE UN ENTER
  //  printf("Ingrese nota: # %d ",i+1);
    //scanf("%d",&nota[i]);
        }

/*
    printf("test %s   \n",usuario[0]);
    printf("test %s   \n",usuario[1]);*/
/*    for(i=0;i<5;i++)
    {
        printf("Hello  %s NOTA: %d  \n",usuario[i],nota[i]);
    }

  /*  printf("Ingrese un usuario: ");
    scanf("%s",usuario[0]);
    printf("Ingrese un usuario: ");
    scanf("%s",usuario[1]);
    // EL STRLEN MUESTRA EL BARRA 0 EN EL CODIGO, ES PARA BUSCAR., SE VA METIENDO EN LA MEMORIA
    int tamanio = strlen(usuario[8]);
    printf("tamaño : %d   \n",tamanio);
    for(i=0;i<10;i++)
    {

    // SE ELEIGE QUE DIMENSION MOSTRAR , LA PRIMERA O LA SEGUNDA DE ARRAYS
    printf("Hello  %s  \n",usuario[i]);
    printf("Hello  %s  \n",usuario[1]);
    printf("Hello  %s  \n",usuario[2]);
    // AUNQUE NO HAYA UN VALOR INICIALIZADO PUEDE QUE HAYA UN VALOR DE TIODAS MANERAS*/


    return 0;
    }
    void mostrarVector(int datos[], int tamanio)
    {
        int i;
        for(i = 0;i<tamanio;i++)
        {
            printf("nota:%d \n",datos[i]);
        }

    }
    void mostrarPalabras(char datos[][10],int tamanio)
    {
      int i;
      for(i=0;i<tamanio;i++)

      {
          printf("nombre: %s \n",datos[i]);
      }
    }


