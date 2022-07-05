#include <stdio.h>

int main()
{
    int arr[256];
    int cont = 0;
    int aux;
    
    for(int i=0;i<256;i++) {
        printf("Ingrese un numero: ");
        scanf("%d", &arr[i]);
        
        if (arr[i] < 0) {
            break;
        }
    }
    
    for(int i=0;i<256;i++) {
        if ((arr[i] < 0) || (arr[i] > 99)) {
            if (arr[i+1]==arr[i]) {
                aux = arr[i];
                cont++;
                }
             }
    }
    
    printf("El numero que mas se repitio es: %d", aux);
            
    
    return 0;	
}
