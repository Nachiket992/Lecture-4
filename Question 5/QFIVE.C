#include<stdio.h>
#include<conio.h>

main() {

int a, b, ans;

clrscr();

 printf("Enter A:- ");
 scanf("%d", &a);

 printf("Enter B:- ");
 scanf("%d", &b);

 ans = (a*a*a) + (3*a*a*b*b) + (b*b*b);

 printf("The answer is %d.", ans);

getch();

}