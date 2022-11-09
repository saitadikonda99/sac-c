#include<stdio.h>

int main()  {
char name[99];
printf("input the name: ");
scanf("%s",name);
int len;
for( int i=0;name[i]!='\0';i++)
len++;

printf("length of a string = %d\n" , len );

printf( "----without vowels----\n" );

for( int i=0;i<len;i++ ) {

if( name[i]!='a' && name[i]!='e' && name[i]!='i' && name[i]!='o' && name[i]!='u' ) {
printf("%c",name[i]);
}
}
printf("\n");

return 0;
}

