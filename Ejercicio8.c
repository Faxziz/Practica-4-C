#include <stdio.h>

int sumaArr(int arr[], int);
int devolver();

int main() {
    int n;
    
    printf("Ingrese la longitud del array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    for(int i=0;i<n;i++) {
        printf("Ingrese un numero: ");
        scanf("%d", &arr[i]);
    }
    
    printf("La suma de los elementos es: %d", sumaArr(arr,n));
    return 0;
}

int sumaArr(int arr[], int n) {
    int calc = 0;
   
    for(int i=0;i<n;i++) {
        calc += arr[i];
    }
    
    return calc;
}