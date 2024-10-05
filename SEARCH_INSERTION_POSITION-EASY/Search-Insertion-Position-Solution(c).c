#include<stdio.h>

int searchInsertionSolution(int *array , int size , int target){
    int i;

    for(int i=0; i<size; i++){
        if(array[i] == 0){
            return i;
        }
        if(array[i] > target){
            return i;
        }
    }

    return i;
}

int main(){
    int array[4] = {1 , 3 , 5 , 6}; // the numbers in the array can be changed as per the wish 
    int size = 4 , target; //same goes with the size , can be chnaged as per the wish 
    printf("Enter the target :");
    scanf("%d" , &target);

    int result = searchInsertionSolution(array , size , target);

    printf("%d" , result);
}