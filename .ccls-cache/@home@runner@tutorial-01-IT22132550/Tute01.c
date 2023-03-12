/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2;
  float avg;
  
  printf("enter mark 1:"); //prompt
  scanf("%d" ,&mark1); //reading mark1

  printf("enter mark 2:"); //prompt
  scanf("%d" ,&mark2); //reading mark2

  avg = ( mark1 + mark2 ) / 2.0; //calculat avarage
  

  printf("avarage is %.2f",avg); //print avarage
  
  return 0;
}


