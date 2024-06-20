#include<stdio.h>
int main()
{
FILE *fp;
fp = fopen("file1.txt", "r");
char c;
while((c=fgetc(fp)) != EOF)
{
    if(c=='c')
    {
        printf("%d", ftell(fp) - 1 );
    }
}
fclose(fp);
return 0;
}