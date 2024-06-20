#include<stdio.h>
#include<stdlib.h>
int main()
{
    int fp1, fp2;
    fp1 = open("file1.txt", "r");
    fp2 = open("file2.txt", "w");
    fclose(fp1);
    char info[50];
    info = read(fp1);
    write(fp2, info);
}