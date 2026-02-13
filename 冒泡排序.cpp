#include<stdio.h>
void bubble_sort(int arr[],int sz)
{
	for(int j=0;j<sz-1;j++)
	{
		int flag=1;
  	 for(int i=0;i<sz-1-j;i++)
	  {
	  	
		 if(arr[i]>arr[i+1])
		 {
			 int str=arr[i];
			 arr[i]=arr[i+1];
			 arr[i+1]=str;
			 flag=0;
		 }
	  }
	  if(flag==1)
		 break;
    }
}
void print_sort(int arr[],int sz)
{
	for(int i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	int arr[10]={0};
	int i=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	} 
	int sz=sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,sz);
	print_sort(arr,sz);
	return 0;
}
