#include<stdio.h>
#include<conio.h>

void main(){
int i,N;
int a=0,b=1,c;
clrscr();
printf("Enter any number: ");
scanf("%d",&N);
printf("%d\n%d\n",a,b);
  for(i=3;i<=N;i++){
     c=a+b;
     a=b;
     b=c;
     printf("%d\n",c);

  }
getch();
}