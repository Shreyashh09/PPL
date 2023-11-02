#include <stdio.h>
struct complex
{
    float real, img;
};
struct complex add(struct complex a1, struct complex a2)
{
    struct complex res;
    res.real = a1.real + a2.real;
    res.img = a1.img + a2.img;
    return res;
}
struct complex sub(struct complex a1, struct complex a2)
{
    struct complex res;
    res.real = a1.real + a2.real;
    res.img = a1.img + a2.img;
    return res;
}
struct complex mul(struct complex a1, struct complex a2)
{
    struct complex res;
    res.real = a1.real * a2.real - a1.img * a2.img;
    res.img = a1.real * a2.img + a2.real * a1.img;
    return res;
}
struct complex div(struct complex a1, struct complex a2)
{
    struct complex res;
    res.real = (a1.real * a2.real + a1.img * a2.img) / (a2.real * a2.real + a2.img * a2.img);
    res.img = (a2.img * a2.real - a1.real * a2.img) / (a2.real * a2.real + a2.img * a2.img);
    return res;
}
int main()
{
    struct complex a1, a2, res;
    int n, i = 1;
    while (i == 1)
    {
        printf("enter real part of 1st complex number:");
        scanf("%f", &a1.real);
        printf("enter imaginary part of 1st complex number:");
        scanf("%f", &a1.img);
        printf("enter real part of 2nd complex number:");
        scanf("%f", &a2.real);
        printf("enter imaginary part of 2nd complex number:");
        scanf("%f", &a2.img);
        printf("\nenter 1 for addition\nenter 2 for subtraction\nenter 3 for multiplication\nenter 4 for  division\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            res = add(a1, a2);
            break;
        case 2:
            res = sub(a1, a2);
            break;
        case 3:
            res = mul(a1, a2);
            break;
        case 4:
            res = div(a1, a2);
            break;
        default:
            printf("\ninvalid input");
        }
        printf("result:%f+%fi", res.real, res.img);
        printf("\nenter 1 to continue, 2 to exIt:");
        scanf("%d", &i);
    }
    return 0;
}
