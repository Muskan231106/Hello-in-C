//Q-2 search an element in a sorted array using binary search
#include <stdio.h>

   int binarySearch(int arr[],int n,int target){
       int st=0,end=n-1;
       while(st<end){
           int mid=st+(end-st)/2;
           if(arr[mid]==target){
            return mid;   
           }else if(arr[mid]>target){
               end=mid-1;
           }else{
               st=mid+1;
           }
       }
       return -1;
}

int main(){
int arr[]={12,34,54,2,3};
int n=sizeof(arr)/sizeof(arr[0]);
int target=3;
int result=binarySearch(arr,n,target);
if(result==-1){
printf("element not found in array ");
}else{
printf("element found at index %d\n",result);
}
return 0;
}
