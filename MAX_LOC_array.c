#include<stdio.h>
int main()
{
int a[10],i,n,max,loc;
printf("enter the no of elements\n");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
if(max<a[i])
{
max=a[i];
loc=i;
}}
printf("max no is %d",max);
printf("loc is %d",loc);
return 0;
}
