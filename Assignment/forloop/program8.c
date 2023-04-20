/* 8. WAP take two characters if these characters are equal then print the same but if
they are unequal then print their difference.... */





#include<stdio.h>
void main(){
	char ch1=0;
	char ch2=0;
	printf("Enter the first characters:");
	scanf("%c",&ch1);
	printf("Enter the second characters:");
	scanf(" %c",&ch2);
	{
	     if(ch1==ch2){
		      printf("They are same\n");
	      }
	     else{
		      printf("%d",ch2-ch1);
	      }
}
}
