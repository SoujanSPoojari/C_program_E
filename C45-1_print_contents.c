#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp;
char info[50];
fp = fopen("data.txt", "r");
info = read(fp);
printf("%s", info);
}