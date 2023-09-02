// program to implent bubble sort
#include<stdio.h>
int main(){
  int a[7] = {3,5,9,6,2,15,1}; // 7 elements
  int temp;
  for(int i =0; i<7 ; i ++){
    for(int j =0; j<7-i-1;j++)
    if(a[j]>a[j+1]){
      temp = a[j];
      a[j] = a[j+1];
      a[j+1] = temp;
    }
  }
  for(int i =0; i<7 ; i++){
    printf("%d\n",a[i]);
  }
  return 0;
}