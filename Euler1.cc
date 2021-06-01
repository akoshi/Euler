//***************************
//Finds the sum of multiples
//of 3 and 5 under 1000 
//***************************
#include <iostream>
using namespace std;

int main(){
    int sum =0;
    int max =1000;

    for (int i = 0; i < max; i++) {
  	  if(i%3==0 || i%5==0)
      	    sum = sum + i;
  	}

    cout<<"The sum is of all multiples of 3 and 5 under " << max << " is " << sum;
}
