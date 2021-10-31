#include <stdio.h>
//#include "test.h"

void static print_array(int array[],int array_size){
    for(int i = 0; i < array_size;i++){
        printf(" %d",array[i]);
    }
}

void static swap(int array[],int i,int j){
    int tmp = array[i];
    array[i]= array[j];
    array[j] = tmp;
} 

int main(void)
{
    int arr [10] = {9,7,4,3,1,6,8,5,2,10};
    int minPos;
    //printf("size:%d",sizeof(arr));
    printf("origin:");
    print_array(arr,10);
    printf("\n");

    for(int j = 0 ; j<9 ; j++){
        minPos = j;
        for(int i = j+1 ; i <10 ; i++){
            minPos = (arr[i]<arr[minPos])?i:minPos;
        }
        swap(arr,j,minPos);
        printf("%d time swap:",j);
        print_array(arr,10);
        printf("\n");  
    }
    
    printf("changed:");
    print_array(arr,10);
    printf("\n");
}

