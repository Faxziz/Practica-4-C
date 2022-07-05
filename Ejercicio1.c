#include <stdio.h>

int main()
{
	int arr[101];
	
	for(int i=0;i<100;i++) {
		arr[i] = i + 1;
	}
	
	for(int i=0;i<100;i++) {
		printf("\nNumeros: %d", arr[i]);
	}
	
	return 0;
}

