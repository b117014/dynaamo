#include<stdio.h>
main()
{
int i,j,r,arr[5][5],arr2[5][5],c,add[5][5];

printf("enter row and column\n");
scanf("%d%d",&r,&c);
printf("enter element in matrix");
for(i=0;i<r;i++)
{

for(j=0;j<c;j++)
{
   scanf("%d",*arr);
*arr++;
arr++;



}
}
printf("enter element in sec matrix");
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
 {  scanf("%d",*arr2);
  *arr2++;
arr2++;
   }
 sum(&arr,&arr2,&add,r,c);
  for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
  { 
     printf("%d",**add);
  *add++;add++;
}
}
}



}
void sum(int *arr,int *arr2,int *add,r,c)
{
 int i,j;
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
{  
   add=*arr+*arr2;
  *arr++;
   arr++;
   *arr2++;
arr2++;
}
}
} 

 
