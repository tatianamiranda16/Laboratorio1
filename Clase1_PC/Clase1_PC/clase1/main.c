#include <stdio.h>
#include <stdlib.h>
// es que no devuelve nada el void, es un prototipo esto un tipo variable y al final se pone el codigo y en el medio se llama
void saludar(void);
//devuelve un entero y no recibe nada
int dameNumero(void);
//se puede poner la variable pide y retorna
float sacarPromedio(int suma,int cantidad);
void esPrimo(int numero);
// no retorna nada, solo muestra si hay primos o no
// se puede en el main , poner hacer y tener 5 funciones separadas  de lo que se debe hacer, en el futuro
int main()
{
    int edad;
    int contador;
    float altura;
    int suma;
    float promedio;
    int numero;
    contador =0;
    suma = 0;
    saludar();
    int limite;
    /*pedido de datos
   printf("\n ingrese su edad:");
   scanf("%d",&edad);
   printf("\n ingrese su altura:");
   scanf("%f",&altura );

    printf("Hello world!\n");
    printf("su edad es %d \n", edad);
    printf("Su altura es %f\n",altura);

*/
limite = dameNumero();
//dado que limite es igual a 5
while(contador <limite)

{
    printf("\n ingrese un numero: ");
    scanf("%d",&numero);

    suma = suma+numero;


    contador ++;
}
/*promedio = (float)suma/contador;*/
promedio = sacarPromedio(suma,contador);
printf("El promedio es: %f ",promedio);




    return 0;
}
void saludar(void)
{
//implementacio es lo hay aca
printf("Hola mundo c");
}
int dameNumero()
{//poner siempre el & una especie de concatenacion para que de con la variable y no un string
    int cantidad;
   printf("\n ingrese cantidad de interacciones:");
   scanf("%d",&cantidad);
   return cantidad;

}
float sacarPromedio(int suma,int cantidad)
{
 float promedio;
promedio = (float)suma/cantidad;
return promedio;
}/* hacer un numero misterioso, con funciones si toca tal numeor. en el main, solo tendria que haber
 tres funciones , da tales numeros si o no. el main solo deberia ser llamado de atencion. la semana que viene ver ejerci nuevos.
