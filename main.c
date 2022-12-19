#include <stdio.h>

int main(void) {
  int i,a;
  int arr[]={1,2,3,4,5,6,7};
int size=sizeof(arr)/sizeof(int)-1;
  
  for(i=0;i<=size/2;i++){
      a=arr[i];
     arr[i]=arr[size-i];
     arr[size-i]=a;
   } 
  for(i=0;i<=size;i++){
    printf("%d\n",arr[i]);
  }
  //printf("%d",size);
  return 0;
}