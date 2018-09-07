#include <stdio.h>
#include <stdlib.h>

#define ARR 10
//#define SORT 0
int sort;
int main(int argc, char *argv[]) 
{

float x[ARR];

float *ptr=x;
float temp;
int i,y;
char choise;

for(i=0;i<ARR;i++)
{
	printf("Enter %d nuber:\n",i);
	scanf("%f",&ptr[i]);
	fflush(stdin);
}
for(i=0;i<ARR;i++)
{
	printf("%f\n",ptr[i]);
}




puts("How do you want to sort? Acsending(1) or decsending(0)?");

do
{
	fflush(stdin);
	puts("Enter 1 or 0");
	scanf("%d",&sort);
	printf("\nSORT : %d\n",sort);
	}while((sort!=1)&&(sort!=0));
for(i=1;i<ARR;i++)
{
	for(y=0;y<ARR-1;y++)
	{
		if(sort)
		{
			if((ptr[y])>(ptr[y+1]))
			{
				temp=ptr[y];
				ptr[y]=ptr[y+1];
				ptr[y+1]=temp;
			}
		}
		else
		{
			if((ptr[y])<(ptr[y+1]))
			{
				temp=ptr[y];
				ptr[y]=ptr[y+1];
				ptr[y+1]=temp;
			}
		}
	}
}

for(i=0;i<ARR;i++)
{
	printf("%05f\n",ptr[i]);
}



return 0;	
}
