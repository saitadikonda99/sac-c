#include<stdio.h>

int main() {

char ch[99];
printf(" ----input the word---- : " );
scanf("%s",ch);

for( int i=0;ch[i]!='\0';i++ ) {

printf("%c --> %d\n" ,ch[i],ch[i] );

}

return 0;
}
