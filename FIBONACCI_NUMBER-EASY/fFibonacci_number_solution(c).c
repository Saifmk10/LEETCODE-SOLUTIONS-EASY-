#include<stdio.h>

int fibonacci(int n){
    if(n<=1){
        return n;
    }

    int fibNumber , firstNumber = 1, secondNumber = 0;

    for(int i=2; i<=n; i++){
        fibNumber = firstNumber + secondNumber;
        secondNumber = firstNumber; 
        firstNumber = fibNumber;
    }

    return fibNumber;
}

int main(){
    int number , result;
    printf("Enter the number: ");
    scanf("%d" , &number);

    result = fibonacci(number);
    printf("%d" , result);
} 