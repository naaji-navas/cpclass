// program to implent the binary search
#include<stdio.h>
int main(){
  int a[10] = {1,2,3,4,5,6,7,8,9,10};
  int key = 4;
  int low = 0;
  int high = 9;
  int mid =(low + high)/2; // here mid is 4
  while(low <=high){
    if(a[mid] == key ){
      printf("The key is found at %d\n",mid);
      break;
    }else if(a[mid]<key){
      low = mid +1;
      mid = (low + high)/2;
    }else{
      high = mid -1;
      mid = (low + high)/2;
    }

    
  

  }
  
}