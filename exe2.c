#include <stdio.h>
int main()
{int a,b,res,choice;
printf("=====BITWISE OPPERATORS=====\n");
printf("Enter the First Number:");
scanf("%d",&a);
printf("Enter the Second number:");
scanf("%d",&b);
printf("\n----MENU----\n");
printf("1.Bitwise AND (&)\n");
printf("2.Bitwise OR (|)\n");
printf("3.Bitwise XOR (^)\n");
printf("4.Bitwise NOT (~)\n");
printf("5.Left Shift(<<)\n");
printf("Right Shift(>>)\n");
printf("\nEnter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
   res = a&b;
printf("Bitwise AND Result =%d",res);
break;
case 2:
res = a|b;
printf("Bitwise OR Result =%d",res);
break;
case 3:
res = a^b;
printf("Bitwise XOR Result=%d",res);
break;
case 4:
res = ~a;
printf("Bitwise NOT Result=%d",res);
break;
case 5:
res = a<<b;
printf("Left Shift Result =%d",res);
case 6:
res = a>>b;
printf("Right Shift Result=%d",res);
break;
default:
printf("Invalid Choice.");
}
return 0;
}

