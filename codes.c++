#include<stdio.h>
int main ()
{
int LA[3]={},i;
printf("Array Before Instertion\n");
for(i=0;i<3;i++)
{
printf("LA[%d]=%d\n",i,LA[i]);
}
printf("Instertion Elements:\n");
printf("Array elements after Insertion:\n");
for(i=0;i<3;i++)
{
LA[i]=i+2;
printf("LA[%d]=%d\n",i,LA[i]);
}
return 0;
}