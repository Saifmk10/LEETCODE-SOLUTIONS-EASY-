#include<stdio.h>


int climbStairs(int n){
    int one = 1 , two = 2 , steps;

    if(n == one){
        return one; 
    }
    if(n == two){
        return two;
    }

    for(int i=3; i<=n; i++){
        steps = one + two;
        one = two ;
        two = steps;
    }

    return steps;
}

int main(){
    int num;
    printf("Enter the number :");
    scanf("%d" , &num);

    int result =  climbStairs(num);
    printf("%d" , result);
}
