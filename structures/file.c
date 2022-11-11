#include<stdio.h>

struct pet {

int long id;
char name[99];
float height;

};

int main() {

struct pet k;

printf("enter the pet id : ");
scanf("%ld",&k.id);

printf("enter the name of the pet : ");
scanf("%s",k.name);

printf("enter the height of the pet : ");
scanf("%f",&k.height);

printf("Id : %ld\n",k.id);
printf("Name : %s\n",k.name);
printf("Height : %.2f\n",k.height);

return 0;
}
