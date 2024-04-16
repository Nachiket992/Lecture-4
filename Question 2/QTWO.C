#include<stdio.h>
#include<conio.h>

main() {

int a = 10;
int b = 20;

a = a + b;
b = a - b;
a = a - b;

clrscr();

 printf("Swap the veriables without using third veriable.\n\n");
 printf("A is equals to %d.\n\n", a);
 printf("B is equals to %d.\n\n", b);
 printf("Thank you.");

getch();

}