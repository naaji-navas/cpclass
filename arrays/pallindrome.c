// 123321 is a pallindrome


#include <stdio.h>
int main(){
  int num;

  // 5487
  //5487 /10

  // 7 *10 + 8 = 78
  // 78*10 + 4 = 784

  // reverse  = 7845
  printf("Enter the number: ");
  scanf("%d", &num);
  int original = num;
  int reverse =0;
  while(num>0){
      int rem = num %10;
      reverse = reverse *10 + rem;
      num = num/10;
  }
  if(original == reverse){
    printf("The number is a pallindrome\n");




}