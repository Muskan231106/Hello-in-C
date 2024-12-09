//Q-1 find the maximum element in an array
#include <stdio.h>

   int findMax(int arr[],int n){
       int max=arr[0];
       for(int i=1;i<n;i++){
           if(arr[i]>max){
               max=arr[i];
           }
   }

    return max;
}

int main(){
int arr[]={12,34,54,2,3};
int n=sizeof(arr)/sizeof(arr[0]);
printf("maximum element is %d\n",findMax(arr,n));
return 0;
}
