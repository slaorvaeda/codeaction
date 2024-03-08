#include <stdio.h>
int main()
 {
   int it[]={1,2,3,4};
   int qt[]={4,5,10,3};
   float ppu[]={25.50,10.00,5.00,450.00};
   int size = sizeof(it)/sizeof(it[0]);
   float sum=0;
   int i,j;

   printf("\nsale bill\n\n");
   printf("\t\t\t\tGenx Store\n");
   printf("\t\t\t    Rasulgarh,cuttack\n");
   printf("******************************************************************************\n");
   printf("\t\t%7s \t%4s \t%9s \t%7s \n","Item","Qty","Price(rs)","Total(rs)");

   for(i=0;i<size;i++){
    printf("\t\t%7d \t%4d \t%7.2f \t%7.2f",it[i],qt[i],ppu[i],qt[i]*ppu[i]);
    printf("\n");
    sum += (qt[i]*ppu[i]);
   }
   printf("\t\t\t\b\b********************************************\n\n");
   printf("\t\t\t\t\t\t\tGrand Total=%.2f\n\n\n",sum);

    printf("\t\t\t  !Thank you Visit Again\n\n");

   
   

   return 0;
 }