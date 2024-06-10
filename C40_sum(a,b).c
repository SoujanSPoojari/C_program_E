#define SUM(A,B) ((A) + (B))
int main()
{
    int A,B;
    printf("Enter the num1: ");
    scanf("%d", &A);
    printf("Enter the num2: ");
    scanf("%d", &B);
    printf("The Sum is %d", SUM(A,B));
    return 0;
}