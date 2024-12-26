#include <stdio.h>

void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

int main(){
    int jumlah, pilih;
    scanf("%d %d", &jumlah, &pilih);
    int arr[1000];
    for (int i = 0; i < jumlah; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < jumlah - 1; i++){
        for (int j = 0; j < jumlah - 1 - i; j++){
            if (arr[j] > arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    if (pilih < 2){
        printf("%d", 0);
        return 0;
    }
    int selisih = pilih - 1;
    int minimum = arr[selisih] - arr[0];
    for (int i = 1; i < jumlah - selisih; i++){
        if (arr[i+selisih] - arr[i] < minimum){
            minimum = arr[i+selisih] - arr[i];
        }
    }
    
    printf("%d", minimum);

    return 0;
}