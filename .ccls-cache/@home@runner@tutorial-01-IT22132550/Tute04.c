/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

//declaring function
int minimum(no1, no2); 
int maximum(no1, no2);
int multiply(no1, no2);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : "); //prompt
   scanf("%d", &no1); //reading no1
   printf("Enter a value for no 2 : ");//promot
   scanf("%d", &no2); //reading no2
  
   printf("%d ", minimum(no1, no2)); 
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
  
   return 0;
}
int minimum(no1, no2){ //function implementation
    if(no1 < no2){
        return no1;
    }
    
    else{
        return no2;
    }
}

int maximum(no1, no2){//function implementation
    if(no1 < no2){
        return no2;
    }
    
    else{
        return no1;
    }
}

int multiply(no1, no2){//function implementation
    return no1 * no2;
}