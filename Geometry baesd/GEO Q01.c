#include<stdio.h>
 int main(){
 	int a,b,c;
 	scanf("%d %d %d",&a,&b,&c);
 	if (a==b&&c==a&&b==c){
 		printf("Given triangle is an equilateral triangle");
	 }
	 else if (a==b||b==c&&a==c||b==c&&a==b||a==c){
	 	printf("Given triangle is an isosceles triangle");
	 }
	 else 
	 printf("Given triangle is a scalene triangle");
	 return 0;
 }