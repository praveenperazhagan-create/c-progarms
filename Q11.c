#include<stdio.h>
 int main(){
 	 int a,b;
 	 scanf("%d",&a);
 	 b=a/100;
 	 if (a>99&a<1000&b%2==0){
 	 	printf("%d is even",b);
 	 	
	  }
	  else
	  printf("%d is odd",b);
	  return 0;
 	 
 }