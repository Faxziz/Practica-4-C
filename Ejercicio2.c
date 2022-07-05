#include <stdio.h>

int main()
{
	int arr[101];
	int i;
	
	for(i = 100;i<200;i++) {
			arr[i] = i+1;
	}
	
	for(int i=100;i<200;i++) {
		printf("\nNumeros del array: %d", arr[i]);
	}
	
	return 0;
}

