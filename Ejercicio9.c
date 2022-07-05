#include <stdio.h>

int sumaAlt(int arr[], int);

int main() {
    int n;
    
    printf("Ingrese la longitud del array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    for(int i=0;i<n;i++) {
        printf("Ingrese un numero: ");
        scanf("%d", &arr[i]);
    }
    
    printf("El prpducto de los elementos pares es: %d", sumaAlt(arr,n));
    return 0;
}

int sumaAlt(int arr[], int n) {
    int calc = 1;
   
    for(int i=0;i<n;i++) {
        if(arr[i]%2==0){
        calc *= arr[i];}
    }
    
    return calc;
}