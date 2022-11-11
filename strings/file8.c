#include<stdio.h>

int main() {

char ch[99];

printf(" ---- input the string ---- : ");
scanf("%[^\n]",ch);

int words=0;
for( int i=0;ch[i]!='\0';i++) {
  
if( ch[i]==' ' && ch[i+1]!=' ' )
words++;
}

printf("----words = %d\n",words+1);

return 0;
}
