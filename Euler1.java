//***************************
//Finds the sum of multiples
//of 3 and 5 under 1000 
//***************************
public class Euler1{
  public static void main(String[]args){
  	int sum = 0;
  	int max = 1000;
  	for(int i = 0; i < max; i++){
  	  if(i%3==0 || i%5==0)
      	    sum += i;
  	}

  	System.out.println("Sum of multiples of 3 and 5 under "+ max +" is "+ sum);
  }
}