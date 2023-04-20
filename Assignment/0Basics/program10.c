/* Program 10: Write a program to check if a character is a vowel or
consonant. Take all the values from the user
Input: var= ”A”;
Output: A is a vowel.
Input: var= ”D”;
Output: D is a consonant. */


#include<stdio.h>
void main(){
        char var;
        printf("enter the value var=");
        scanf("%c",&var);


        if (var== 'A' || var =='a'){
                printf("%c",var);
                printf(" is a vowel");
        }
	 if (var== 'E' || var == 'e'){
                printf("%c",var);
                printf(" is a vowel");
        }
         if (var== 'I' || var == 'i'){
                printf("%c",var);
                printf(" is a vowel");
        }
         if (var== 'O' || var == 'o'){
                printf("%c",var);
                printf(" is a vowel");
        }
       if (var== 'U' || var == 'u'){
                printf("%c",var);
                printf(" is a vowel");
        }

        else  {
               
                printf(" is a consonant");
        }
}


