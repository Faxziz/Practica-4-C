#include <stdio.h>

int main()
{
	int arr[51];

	
	for(int i=0;i<51;i++) {
		arr[i] = (i*3);
	}
	
	for(int i=0;i<51;i++) {
		printf("\nNumeros: %d", arr[i]);
	}
	
	return 0;
}

