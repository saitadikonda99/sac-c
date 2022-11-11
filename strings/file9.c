#include<stdio.h>
#include<string.h>

int main() {

char name1[99];

printf(" --- input the string-1 --- : ");
scanf("%s",name1);

char name2[99];

strrev(name1);
if( name1 == name2 )
printf("---- palindrome ---- \n ");

else 
printf("---- note a palindrome ---- \n ");

return 0;
}
