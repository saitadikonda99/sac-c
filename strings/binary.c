//program to reverse a string using 'swapping of characters'

#include<stdio.h>
int main() {
        char str[100];
        printf("Input the string: ");
        scanf("%s", str);

        int n = 0, i;
        for(i=0; str[i]!='\0'; i++) {
                n++;
        }
        printf("Length of the string: %d\n", n);
        char temp;
        for(i=0; i<n/2; i++) {
                temp = str[i];
                str[i] = str[n-i-1];
                str[n-i-1] = temp;
        }

        printf("reversed binary string: %s\n", str);
        return 0;

}
