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

int static length(int array[]){
    int l=0;
    while(array[l]){
        l++;
    }
    return l-1;
}

int main(void)
{

    int arr [10] = {9,7,4,3,1,6,8,5,2,10};

    int minPos,maxPos; // min value Position and max value Position
    int l = length(arr); //length of array

    //print original array
    printf("origin:");
    print_array(arr,10);
    printf("\n");

    for(int j = 0 ; j<(l-1)/2 ; j++){
        minPos= j;
        maxPos = l-j-1;
        for(int i = j+1 ; i <l-j ; i++){
            minPos = (arr[i]<arr[minPos])?i:minPos;
            maxPos = (arr[i]>arr[maxPos])?i:maxPos;
        }
        swap(arr,j,minPos);
        swap(arr,l-j-1,maxPos);
        printf("%d time swap:",j);
        print_array(arr,10);
        printf("\n");
        //printf("minpos:%d\n",minPos);    
    }
    
    printf("changed:");
    print_array(arr,10);
    printf("\n");
}

