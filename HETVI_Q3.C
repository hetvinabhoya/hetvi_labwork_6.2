#include<stdio.h>
#include<conio.h>

void main(){
int i=1;
int N;
clrscr();
printf("Enter any number: ");
scanf("%d",&N);

 do{
   if(i%2==0){ printf("%d\n",i);}
   i++;
 }while(i<=N);
getch();
}