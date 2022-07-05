#include <stdio.h>

#define TAM 10

int main()
{
	int arr[TAM];
	int n;
	
	for(int i=0;i<TAM;i++) {
		printf("Ingrese un numero: ");
		scanf("%d", &arr[i]);
	}
	
	printf("Ingrese un numero a buscar: ");
	scanf("%d", &n);

	for(int i=0;i<TAM;i++) {
		if (arr[i] == n) return i;
	}
	
	return -1;
}

