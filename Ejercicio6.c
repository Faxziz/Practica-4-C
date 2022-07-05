#include <stdio.h>

int main() {
	int n1;
	int arr[n1];

	printf("Cuantos numeros va a ingresar?");
	scanf("%d", &n1);

	for(int i=0;i<n1;i++) {
		printf("Ingrese un numero: ");
		scanf("%d", &arr[i]);

		if ((arr[i] < 5) || (arr[i] > 100)) {
			printf("Error");
			break;
		}
	}
	return 0;
}
