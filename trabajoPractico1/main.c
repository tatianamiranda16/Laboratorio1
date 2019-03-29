#include <stdio.h>
#include <stdlib.h>
/*1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir*/
int opcionesMenu (char[]);

int main()

{
    int numero1 = "x";
    int numero2 = "y";
    int flag;
    int opcion;
    char seguir = 's';

    do
    {
      opcion = opcionesMenu("1.Ingrese 1 operable\n2.Ingrese 2 operable \n3.Calcular todas las operacione\n a) Calcular la suma (A+B)\n b) Calcular la resta (A-B)\n c) Calcular la division (A/B)\n d) Calcular la multiplicacion (A*B)\n e) Calcular el factorial (A!) \n4.Informar resultados \n a) El resultado de A+B es: r \n b) El resultado de A-B es: r\n c) El resultado de A/B es: r o No es posible dividir por cero\n d) El resultado de A*B es: r\n e) El factorial de A es: r1 y El factorial de B es: r2 \n5.Salir");
     switch(opcionesMenu)
      {
     case 1:
         scanf()
        break;
     case 2:
        break:
     case 3:
        break;
    case 4

      }

    }while(seguir == 's' );

    return 0;
}
int opcionesMenu(char texto [])
{
    int opcion;
    printf("%s",texto);
    scanf("%d",&opcion);
    return opcion;

}
