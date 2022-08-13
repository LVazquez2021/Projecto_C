#include <stdio.h>
#include <stdlib.h>


//declaracion de funciones/procedimientos 
void MostrarProductos(int codigo_producto[], int precio_producto[],int cantidad_productos);



//sistema de gestion de inventarios

int main(int argc, char *argv[]) {
	
	 //Productos Almacen	
	int cantidad_productos=4;
	
	int codigo_producto[cantidad_productos];
	int precio_producto[cantidad_productos];
	
	int codigo, precio, numero_venta;
	
	int i=0;
	
	//inicializo los vectores para evitar se muestre datos random/basura al recorrerlos
	for(i=0; i<cantidad_productos; i++ )
	{
		codigo_producto[i]=0;
		precio_producto[i]=0;
	}
	
	//ejecuto el procedimiento para recorrer el vector y mostrar su contenido
	MostrarProductos(codigo_producto, precio_producto, cantidad_productos);
	
	//con este ciclo for efectuo la carga de los vectores codigo y precio productosa 
	for(i=0; i<cantidad_productos; i++)
	{
		printf("\nIngrese el codigo del producto: ");
		scanf("%d", &codigo);
		printf("\nIngrese el precio del producto: ");
		scanf("%d", &precio);
		
		codigo_producto[i]=codigo;
		precio_producto[i]=precio;
		
	}
	
	MostrarProductos(codigo_producto, precio_producto, cantidad_productos);
	
	printf("\nIngrese el numero de ventas: ");
	scanf("%d", &numero_venta);
	while(numero_venta != 0)
	{
	
		
	
	printf("Ingrese el numero de ventas: ");
	scanf("%d", &numero_venta);	
	}
	
	
			
	
	return 0;

}

//definicion de funciones/procedimientos

void MostrarProductos(int codigo_producto[], int precio_producto[], int cantidad_productos )
{
	int i;
	
	for(i=0; i<cantidad_productos; i++)
	{
		printf("\nel valor es de : %d %d\n",codigo_producto[i], precio_producto[i] );
	}
}
