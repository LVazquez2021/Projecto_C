#include <stdio.h>
#include <stdlib.h>


//declaracion de funciones/procedimientos 
void MostrarProductos(int codigo_producto[], int precio_producto[],int cantidad_productos);
int BuscarProducto(int codigo_producto[], int codigo_buscado, int cantidad_productos);
void ActualizarTotal(int *total_puntero,int monto_venta);

//sistema de gestion de inventarios

int main(int argc, char *argv[]) {
	
	 //Productos Almacen	
	int cantidad_productos=4;
	
	int codigo_producto[cantidad_productos];
	int precio_producto[cantidad_productos];
	
	int codigo, precio, numero_venta, monto_venta;
	int indice_buscado,cantidad_venta;
	
	int monto_diario;
	int *total_puntero=0;
	total_puntero= &monto_diario;
	
	
	int i=0;
	
	//inicializo los vectores para evitar se muestre datos random/basura al recorrerlos
	for(i=0; i<cantidad_productos; i++ )
	{
		codigo_producto[i]=0;
		precio_producto[i]=0;
	}
	

	//MostrarProductos(codigo_producto, precio_producto, cantidad_productos);
	
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
	
	//ejecuto el procedimiento para recorrer el vector y mostrar su contenido
	MostrarProductos(codigo_producto, precio_producto, cantidad_productos);
	
	printf("\nIngrese el numero de factura: ");
	scanf("%d", &numero_venta);
	while(numero_venta != 0)
	{
	
	printf("ingrese el codigo de producto que desea vender: ");
	scanf("%d", &codigo);		
	
	
	indice_buscado = BuscarProducto(codigo_producto,codigo, cantidad_productos);
	
	
	if(indice_buscado == -1)
	{
		printf("\n El producto es inexistente");
	}else{
		printf("\nEl producto existe");
		
		printf("\n Ingrese la cantidad de productos vendida: ");
		scanf("%d",&cantidad_venta);
		
		monto_venta= cantidad_venta * precio_producto[indice_buscado];
		printf("El monto de la venta es: %d",monto_venta);
		ActualizarTotal(total_puntero, monto_venta);
		
		
	}
	
	
	printf("\nIngrese el numero de factura: ");
	scanf("%d", &numero_venta);	
	}
	
	printf("\n En el dia se recuado un total de: %d", monto_diario);	
	//printf("\n En el dia se recaudo un total de: %d", *total_puntero);		
	
	return 0;

}

//definicion de funciones/procedimientos

void MostrarProductos(int codigo_producto[], int precio_producto[], int cantidad_productos )
{
	int i;
	
	for(i=0; i<cantidad_productos; i++)
	{
		printf("\nel valor del producto codigo numero %d es de: %d\n",codigo_producto[i], precio_producto[i] );
	}

}


int BuscarProducto(int codigo_producto[], int codigo_buscado, int cantidad_productos)
{
	int i; 
	for(i=0; i<cantidad_productos; i++)
	{
		if(codigo_producto[i] == codigo_buscado)
		{
			return i;
		}
			
	}
	return -1;
}


void ActualizarTotal(int *total_puntero,int monto_venta){
	*total_puntero+=monto_venta;
}

