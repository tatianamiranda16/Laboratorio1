#include <stdio.h>
#include <stdlib.h>
// E EL MAIN SOLO LLAMADA DE FUNCIONES
int pedirOpcionMenu(char []);
//ESTO REPRESNTA UN STRING CHAR []


int main()
{
    int opcion;
    char seguir = 's';
    do
    {// SE CAMBIA POR SUMAR, MULTIPLICAR DIVIDIDR Y ASI ELEIGR QUE HACER CON LOS NUMEROS
        opcion = pedirOpcionMenu("1.Alta\n2.Baja\n3.modifcacion\n4.Informes\n.Salir\n Elija una opcion: ");
// LO DE ARRIBA ES COMO EL PROMPT
    switch(opcion)
    {
    case 1:
        printf("Estoy dando de alta \n");
        break;
    case 2:
            printf("Estoy dando de baja \n");
        break;
    case 3:
            printf("Estoy modificando\n");
        break;
    case 4:
            printf("Estoy informando\n");
        break;
    case 5:
            seguir ='n';
        break;
        default:
            printf("Opcion incorrecta\n");
            break;
    }

    system("pause");
    system("cls");

    }while(seguir =='s');




    return 0;
}
//incrementar
int pedirOpcionMenu(char texto[])
{
    int opcion;
    printf("%s",texto);
    scanf("%d",&opcion);

    return opcion;

}
