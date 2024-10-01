#include<iostream>
using namespace std;

class climbStairs{
    public:
    int climbSolution(int n){
        int steps , one = 1, two = 2;

        if(n == one){
            return 1;
        }
        if(n == two){
            return 2;
        }

        for(int i=3; i<=n; i++){
            steps = one + two;
            one = two;
            two = steps;
        }

        return steps;
    }
};

int main(){
    int number;
    cout<<"enter the number : ";
    cin>>number;

    climbStairs output;
    int result = output.climbSolution(number);
    cout<<result;
}
