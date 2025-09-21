#include <stdio.h>
#include<time.h>
int main()
{
printf("1.Milk \n2.Bread \n3.Eggs \n4.Broom \n5.Soap \n6.Curd \n7.Chips \n8.Soda \n9.Mop
\n10.Icecream");
char *I[20],ci[20],ph[20];
int MRP[20],rate[20],qty[20],amt[20],n,k,a=0,am=0,b=0;
for(int i=0;i<20;i++)
{
a++;
printf("\nEnter the number of the item from above(Enter 0 to end)\n");
scanf("%d",&n);
switch(n)
{
case 1:
{
I[i]="Milk";
printf("Enter quantity");
scanf("%d",&qty[i]);
MRP[i]=22;
rate[i]=20;
}
break;
case 2:
{
I[i]="Bread";
printf("Enter quantity");
scanf("%d",&qty[i]);
MRP[i]=30;
rate[i]=28;
}
break;
case 3:
{
I[i]="Eggs";
printf("Enter quantity");
scanf("%d",&qty[i]);
MRP[i]=36;
rate[i]=35;
}
break;
case 4:
{
I[i]="Broom";
printf("Enter quantity");
scanf("%d",&qty[i]);
MRP[i]=180;
rate[i]=170;
}
break;
case 5:
{
I[i]="Soap";
printf("Enter quantity");
scanf("%d",&qty[i]);
MRP[i]=20;
rate[i]=19;
}
break;
case 6:
{
I[i]="Curd";
printf("Enter quantity");
scanf("%d",&qty[i]);
MRP[i]=35;
rate[i]=34;
}
break;
case 7:
{
I[i]="Chips";
printf("Enter quantity");
scanf("%d",&qty[i]);
MRP[i]=20;
rate[i]=19;
}
break;
case 8:
{
I[i]="Soda";
printf("Enter quantity");
scanf("%d",&qty[i]);
MRP[i]=40;
rate[i]=39;
}
break;
case 9:
{
I[i]="Mop";
printf("Enter quantity");
scanf("%d",&qty[i]);
MRP[i]=200;
rate[i]=190;
}
break;
case 10:
{
I[i]="Icecream";
printf("Enter quantity");
scanf("%d",&qty[i]);
MRP[i]=20;
rate[i]=18;
}
break;
default:
i=30;
break;
}
amt[i]=qty[i]*rate[i];
am+=amt[i];
b+=qty[i]*MRP[i];
}
time_t t;
t = time(NULL);
struct tm tm = *localtime(&t);
printf("Enter the Customer ID\n");
scanf("%s",ci);
printf("Enter the Customer Ph. No.\n");
scanf("%s",ph);
printf("Grocery Basket\n#6, Swamy Vivekananda Road,2nd Block\nThyagarajanagar,
Bangalore-560028\n");
printf("Ph.no. 9348234890/2359812653\nGSTIN 67SDIJPO6756D2FY\nINVOICE\n");
printf("Customer ID %s\t Customer Ph.No. %s\n",ci,ph);
printf("Date: %d-%d-%d\tTime: %d:%d:%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900,
tm.tm_hour, tm.tm_min, tm.tm_sec);
printf("------------------------------------\n");
printf("Item\tQty.\tMRP\tRate\tAmt\n");
printf("------------------------------------\n");
for(int j=0;j<a-1;j++)
{
printf("%s\t%d\t%d\t%d\t%d\n",I[j],qty[j],MRP[j],rate[j],amt[j]);
}
printf("------------------------------------\n");
printf("Total amt\t\t\t%d\n",am);
printf("You saved\t\t\t%d\n",b-am);
printf("------------------------------------\n");
printf("No Return Policy\nThank You and Visit Again");
}
