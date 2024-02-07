#include<stdio.h>
#include<conio.h>
void main(){
int i,j,key,n;
int a[100];
clrscr();
printf("enter size of array:\n");
scanf("%d",&n);
printf("enter the elements:\n");
for(i=1;i<=n;i++){
scanf("%d",&a[i]);
}
for(j=2;j<=n;j++){
 key=a[j];
 i=j-1;
 while(i>0 && a[i]>key){
  a[i+1]=a[i];
  i=i-1;
 }
 a[i+1]=key;
}
printf("Sorted list:\n");
for(i=1;i<=n;i++){
printf("%d\t",a[i]);
}
}
