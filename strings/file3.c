#include<stdio.h>
int main() {
char name[99];
char name2[99];
printf("enter the name: ");
scanf("%s",name);
int len=0;
for( int i=0;name[i]!='\0';i++ )
     len++;
 printf("length = %d\n " ,len);
for( int i=0;i<len;i++ ) {
name2[i]=name[i];
}
 printf("---name copy---\n");
for( int i=0;i<len;i++ )
printf("%c",name2[i]);
printf("\n");
return 0;
}
