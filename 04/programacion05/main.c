#include <stdio.h>
#include <stdlib.h>
# define TAM 5
// VER PARAMETRO ACTUAL Y EL FORMAL. CUANDO SE PASA INT, FLOAT Y CHAR, ES COMO PASAR UN VALOR.


int const x = 10;


int main()

{

    int miArray[TAM] = {};
    int indice;

 // LOS ARRAY SON ESTATICOS Y TIENE INCIO Y FIN. EN ESTE TIENE UN LIMITE DE 10.
 // EL [] ES LA CANTIDAD. EL {} ES LA INICIALIZACION
 //   int miArray[5] = {0};
//LO QUE APARECE ES LA DIRECCION DE MEMORIA DEL ARRAY.
    cargarArray(miArray, TAM);
    mostrarArray(miArray, TAM);
    indice = buscarValor(miArray,TAM,5);
    printf("EL INDICE ES %d ", indice);

    if(indice!=-1)
    {
     printf("\n EL iNDICE ES %d",indice);
    }else
    {
      printf("\n EL VALOR ES INEXISTENTE");
    }
    return 0;
}


