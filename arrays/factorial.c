#include <stdio.h>

// Function declaration

int main() {
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  printf("The factorial of %d is %d\n", n, factoooorial(n));
  return 0;
}

// Function definition for factorial calculation
int factoooorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factoooorial(n - 1);
  }
}

  




  //5! = 5*4*3*2*1
  // 5! = 5*4!
  // 4! = 4*3!
  // 3! = 3*2!
  // 2! = 2*1!
  // 1! = 1*0!
  // 0! = 1

