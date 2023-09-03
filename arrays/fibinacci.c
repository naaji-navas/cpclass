// fibonacci series using recursion
// 0 1 1 2 3 5 8 13 21 
#include<stdio.h>
int main(){
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);

}
int fiboonacciiii (int n){
    if(n==0){
      return 0;
    }
    else if(n== 1){
      return 1;
    }else
    {
      return fiboonacciiii(n-1)+fiboonacciiii(n-2);
    }
  }