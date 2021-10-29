#include<stdio.h>
#include<stdlib.h>

int a[50],n,i;
void create(int a[])
{
	printf("Enter the no. of element to create an array \n");
	scanf("%d",&n);
	printf("Enter the elements to be inserted \n");
		for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
	
	void display(int a[])
	
	{
	printf("The array element are :\n");
	for( i=0;i<n;i++)
	printf("%d\t",a[i]);
	}

	void insert(int ele,int pos)
	
	{
	n=n+1;
		for( i=0;i>pos;i--)
		{
		a[i]=a[i-1];
		}
		a[pos]=ele;
	}
	
	void delete(int pos)

	{
	int ele;
	if(pos>n)
	{
	printf("Invalid position !!! please enter the valid position \n");
	}
	else 
	{
	ele=a[pos];
		for(i=pos;i<n;i++)
		{
		a[i]=a[i+1];
		}
		n=n-1;
		}
	}
	
	void main()
	
	{
	
		int elem,pos, choice;
		while(1)
		{
			printf("\n enter your coice::\n 1.create \n 2.display\n 3.insert\n 4.delete\n 5.exit\n");
			scanf("%d",&choice);
			printf("-------------------------------------------------------\n");
			

			switch (choice)
			{
				case 1:create(a);
				break;

				case 2:display(a);
				break;
				case 3:printf("enter the elemet to be inseted\n");
				scanf("%d",&elem);
				printf("ENTER The position\n");
				scanf("%d",&pos);
				insert(elem,pos);	
				break;
				case 4:
				printf("enter the position\n");
				scanf("%d",&pos);
				delete(pos);
				break;
				case 5:exit(0);
				break;
				default : printf("invalid");
				break;
			}
		}
	}
