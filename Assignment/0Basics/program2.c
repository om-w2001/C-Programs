/* Program 2: WAP print the value of the below expressions.
x =9 ;
ans = ++x + x++ + ++x
Print ans value and print x
ans1= ++x + ++x + ++x + ++x
Print ans1 value and print x
ans2 = x++ + x++ + ++x + x++ + ++x
Print ans2 value and print x
ans3 = x++ + x++ + x++ + x++
Print ans3 value and print x
Calculate with a proper diagram and write an explanation in your notebook
*/








#include<stdio.h>
void main(){
	int x=9;
	int ans;

	ans= ++x +  x++ + ++x ;
	printf("%d\n",x);
	printf("%d\n",ans);
	
        ans= ++x + ++x + ++x + ++x ;
        printf("%d\n",x);
        printf("%d\n",ans);

        ans= x++ +  x++ + ++x +x++ + ++x ;
        printf("%d\n",x);
        printf("%d\n",ans);

	ans= x++ +  x++ + x++ + x++ ;
        printf("%d\n",x);
        printf("%d\n",ans);

}
