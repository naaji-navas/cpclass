// program to implent the binary search
#include<stdio.h>

int sum(int *a, int *b){
 // a and b are the formal parameters

  int temp = *a;
  *a = *b;
  *b = temp;
  return *a + *b;
}

int main(){

  int a=1;
  int b=2;
  int c=3;
  c= a++ + --b;
  printf("%d %d %d\n", a, b, c);








  // example to implent the call by value and call by reference
  int x = 10;
  int y = 20;
  printf("The sum of %d and %d is %d\n", x, y, sum(&x, &y)); 

  // call by reference

  sum(&x, &y); // actual parameters

  // 30 or 300


  
  // actual parameters


  
}
