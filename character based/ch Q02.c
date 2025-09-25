#include<stdio.h>
  int main(){
  	char ch;
  	scanf("%c",&ch);
  	if (ch>='A'&& ch<='Z'){
  		printf("%c is a uppercase",ch);
	  }
	  else if ( ch>='a'&& ch<='z'){
	  	printf("%c is a lowercase",ch);
	  }
	  else if (ch>='0'&& ch<='9'){
	  	printf("%c is a digit",ch);
	  }
	  else 
      printf("%c is a special smybol",ch);
      return 0;
  }