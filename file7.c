#include<stdio.h>

int main() {

int n;
printf( " ----input the size--- : ");
scanf("%d",&n);

int arr[n];
printf( " -----input the array-----\n ");
for( int i=0;i<n;i++) {

printf("arr[%d] = " , i );
scanf("%d",&arr[i]);

}
for ( int i=0;i<n;i++ ) 
printf( " %d --> %c \n",arr[i],arr[i] );

return 0;
}
