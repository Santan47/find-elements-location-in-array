#include<stdio.h>
int main()
{
int a[10],i,n,l,u,item,loc,c=0,mid;
printf("enter the no of elements");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the item");
scanf("%d",&item);
l=1;
u=n;
while(l<u)
{
mid=(l+u)/2;
	if(a[mid]==item)
	{
	loc=mid;
	printf("%d",loc);
	c=1;
	break;
	}

		else if(item<mid)
		{
		u=mid-1;
		}
			else
			{
			l=mid+1;
			}
}
if(c==0)
{
printf("no is not found");
}
return 0;
}
