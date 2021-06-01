//***************************
//Finds the sum of even-valued
//Fibonacci sequence less than 4 million
//***************************
#include <iostream>
using namespace std;

int fib(int x){
    return(fib(x-1)+fib(x-2));
}

int main(){
    int a = 1;
    int b = 2;
    int n = 10;
    int i=0;

    while(i < n){
        cout << " " << fib(i);
        i++;
    }
    return 0;
}