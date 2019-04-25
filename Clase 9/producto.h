typedef struct
{
char nombre[50];
char codigoDeBarra[13];
float precio[50];
char fechaVencimiento[50];
char proveedor[50];
}eProducto;



eProducto pedirProducto();
void mostrarProducto(eProducto);
void cargarArray(int,eProducto[]);
void mostrarArray(int tam, eProducto listado[]);
