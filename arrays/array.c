// program to implement the 1d array
#include<stdio.h>
int main(){
  int a[10];
  int n;
  printf("Enter the number of elements in the array\n");
  scanf("%d",&n);
  printf("Enter the elements of the array\n");
  for (int i=0 ;i<n ; i++){
    scanf("%d",&a[i]);
  }
  printf("The elements of the array are\n");
  for (int i=0 ;i<n ; i++){
    printf("%d\n",a[i]);
  }

}