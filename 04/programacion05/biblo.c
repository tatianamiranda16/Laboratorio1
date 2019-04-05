void mostrarArray(int array[], int tam)
{

    int i;
    for(i=0; i<tam;i++)
    {
        printf("%d\n",&array[i]);
    }
}
void cargarArray(int array[], int tam)
{
    int i;
    for (i= 0; i <tam;i++)
    {
        printf("INGRESE UN NUMERO: ");
        scanf("%d",array[i]);
    }
}
int buscarValor(int array[], int tam, int valor)
{
 // SI LA FUNCION DEVUELVE UN ENTERO, DECLARO UNA FUNCION  Y LO DE DEVUELVO
 int indice = -1;
 int i;
 for(i = 0; i <tam;i++)
 {
    if(array[1] == valor)
    {
        indice =  i;
        break;

    }

 }

 return indice;

}
