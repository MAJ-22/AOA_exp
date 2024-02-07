#include<stdio.h>
int main()
{
 int i,low,high,mid,n,key;
 int a[100];
 printf("Enter the size of array:\n");
 scanf("%d",&n);
 printf("Enter sorted elements:\n");
 for(i=0;i<=n;i++){
  scanf("%d",&a[i]);
 }
 printf("Enter the key:\n");
 scanf("%d",&key);
 low=0;
 high=n;
 while(low<=high){
  mid=(low+high)/2;
  if(a[mid]==key){
   printf("element %d found at position %d",key,mid);
   break;
  }
  else if(a[mid]<key){
   low=mid-1;
  }
  else{
   high=mid+1;
  }
 }
 return 0;
}