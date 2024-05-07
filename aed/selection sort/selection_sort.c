#include <stdio.h>
#include "selection_sort.h"


int main(){
     int arr[8] = {13,22,9,17,16,12,1,2};
     selection_sort(arr, 8);
     for(int i =0; i<8; i++){

        printf("%d ", arr[i]);
     }
     return 0;
     
 }