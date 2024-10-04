#include<iostream>
using namespace std;

class fibNumber{

    public:
    int fibNumberSolution(int n){
        if(n<=1){
            return n;
        }

        int fibNumber , firstNumber =1, secondNumber = 0;

        for(int i=2; i<=n; i++){
            fibNumber = firstNumber + secondNumber;
            secondNumber = firstNumber;
            firstNumber = fibNumber;
        }

        return fibNumber;
    }
};

int main(){
    int number , result;
    cout<<"Enter the number: ";
    cin>>number;

    fibNumber output;
    result = output.fibNumberSolution(number); 

    cout<<result;
}   