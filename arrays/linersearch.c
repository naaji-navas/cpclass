// program to implent the linear search
#include<stdio.h>
int main(){
  int a[5]={1,2,3,4,5};
  int key =4;
  int flag =0;
  for (int i =0 ; i<5; i++){
    if(a[i] == key){
      printf("The key is found at %d\n",i);
      break;
    } 

  }
}