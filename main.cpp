
#include <stdlib.h>
#include <stdio.h>
#include<conio.h> 
#include<windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	int espacio=0;//daclaracion de espacio con asignacion 0
	printf("ingrese el espacio del arreglo:");
	scanf("%d",&espacio);//declaracion de nuevo espacio
	
	int array[espacio];//asignacion del espacio al arreglo
	for(int i=0;i<espacio;i++){//iteracion para entregar valores al arreglo
		printf("ingrese un numero para el arreglo %d:\n",i+1);
		scanf("%d",&array[i]);//matriz reciviendo valores
		
	}
	for (int i=0;i<10;i++){
		printf("%d",array[i]);//mostrar arreglo
		
	}
	system("cls");
	int c,f;//definiendo espacio de matriz para filas y columnas
	printf("ingrese numero de filas:");
	scanf("%d",&f);
	printf("ingrse numero de columnas:");
	scanf("%d",&c);
	
	
	int array_2 [f][c];//asignando espacios para la matriz
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			printf("ingrese numero para la matriz%d:\n");//ingresando valores a la matriz
			scanf("%d",&array_2[i][j]);
		}
	}
	system("cls");//esto es para limpiar la pantalla
		for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			
			printf("%d",array_2[i][j]);//mostrando la matriz
		}
		printf("\n");//salto de linea para que no se vea todo muy pegado
	}
	
	
	
	getch();
	
	
	return 0;
}
