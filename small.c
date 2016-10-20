#include<stdio.h>
int main()
{
unsigned long int input_val;
int temp_ordering[11],temp,c,i,j,k,swap-temp;
printf("Enter the value");
scanf("%lu",input_val);
printf("value if k");
scanf("%d",&k);
for(i=0,c=1;;i++,c++)
{
temp=input_val%10;
temp_ordering[i]=temp;
input_val=input_val%10;
if(input_val==0)
break;
{
for(i=0;i<c;++i)
{
for(j=i+1;j<c;++j)
{
if(temp_ordering[i]==temp_ordering[j])
{
swap_temp=temp_ordering[i];
temp_ordering[i]=temp_ordering[j];
temp_ordering[j]=swap_temp;
}
}
}
printf("the result is:");
for(i=0;i<c-k;i++)
{
printf("%d",temp_ordering[i]);
}
return 0;
}
