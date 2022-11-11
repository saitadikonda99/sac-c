#include<stdio.h>
#include<string.h>
int main() {
        char name[100];
        printf("Input your name: ");
        scanf("%s", name);
        int len, count = 0;
        for(int i=0;name[i]!='\0'; i++) {
                count++;
        }
        len = count;
        printf("Length of the string = %d\n", len);
        printf("Name in normal form:\n");
        for(int i=0; i<len; i++) {
                printf("%c", name[i]);
        }
        printf("\n");
        printf("Name in reverse form:\n");
        for(int i=len-1; i>=0; i--) {
                printf("%c", name[i]);
        }
        return 0;
}
