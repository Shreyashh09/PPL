#include <stdio.h>
struct info
{
    int num, price, quan;
    char name[50];
};
void calculate(struct info in[], int n)
{
    int i, total = 0;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter product %d name: ", i + 1);
        scanf("%s", &in[i].name);
        printf("Enter product num: ");
        scanf("%d", &in[i].num);
        printf("Enter quantity: ");
        scanf("%d", &in[i].quan);
        printf("Enter price: ");
        scanf("%d", &in[i].price);
    }
    printf("\nBILL:");
    for (i = 0; i < n; i++)
    {
        printf("\nProduct no %d: %s", in[i].num, in[i].name);
        printf("\nPrice: %d", in[i].price);
        printf("\nQuantity: %d", in[i].quan);
    }
    for (i = 0; i < n; i++)

    {
        total += in[i].price * in[i].quan;
    }
    printf("\nTotal: %d", total);
}
int main()
{
    int n;
    printf("Enter total number of products: ");
    scanf("%d", &n);
    struct info in[n];
    calculate(in, n);
    return 0;
}
