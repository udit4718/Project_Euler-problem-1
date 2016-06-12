#include<stdio.h>
#include<conio.h>

void main()
{

   int count=0;
   int i;

 for(i=1;i<1000;i++)
 {

     if(i%3==0||i%5==0)
     {
         count=count+i;
     }

 }
    printf("%d",count);


}
