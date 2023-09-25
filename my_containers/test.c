#include<stdio.h>
#include<string.h>
int main(){
    char a[10];
    char *p="0123456789";
    strcpy(a,p);
    printf("%s\n",a);
    return 0;
}