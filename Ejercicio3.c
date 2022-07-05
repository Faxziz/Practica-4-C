#include <stdio.h>

int main() 
{
	int n;
	int arr[n];

	printf("Ingrese cuantos numeros va a contener el array: ");
	scanf("%d", &n);

	for(int i=0;i<n;i++) {
		printf("Ingrese un numero aleatorio: ");
		scanf("%d", &arr[i]);
	}

	int opcion;

	printf("Ingrese una opcion, 1 para mostrar el array de forma directa, 2 para mostrarlo de forma invertida: ");
	scanf("%d", &opcion);

  if (opcion == 1) {
    	for(int i=0;i<n;i++) {
				printf("\n%d", arr[i]);
			}
  } else if (opcion == 2) {
    	for(int i= n-1 ;i >= 0;i--) {
				printf("\nNumeros: %d", arr[i]);
			}
  } else {
    printf("Opcion incorrecta");
    }

	return 0;
}
