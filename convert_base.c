#include <stdio.h>
void dectobin()
{
    int a, i, j;
    int bin[32];
    printf("enter decimal number to convert to binary:");
    scanf("%d",&a);
    for(i=0;a>0;i++)
    {
        bin[i]=a%2;
        a=a/2;
    }
    printf("\nbinary is "); 
    for(j=i-1;j>=0;j--)
    {
        printf("%d",bin[j]);
    }
}
void bintodec()
{
    int rem,b,dec=0,base=1;
    printf("\nenter binary number to convert to decimal:");
    scanf("%d",&b);
    while(b!=0)
    {
        rem=b%10;
        b=b/10;
        dec+=rem*base;
        base*=2;
    }
    printf("\ndecimal is %d",dec);  
}
void dectohex()
{
    int a;
    printf("enter decimal number to convert to hexadecimal:");
    scanf("%d",&a);
    printf("\nhexadecimal is %x",a);
}
void hextodec()
{
    int a;
    printf("enter hexadecimal number to convert to decimal:");
    scanf("%x",&a);
    printf("\ndecimal is %d",a);
}
void dectooct()
{
    int a, i, j;
    int oct[32];
    printf("enter decimal number to convert to octal:");
    scanf("%d",&a);
    for(i=0;a>0;i++)
    {
        oct[i]=a%8;
        a=a/8;
    }
    printf("\noctal is ");  
    for(j=i-1;j>=0;j--)
    {
        printf("%d",oct[j]);
    }
}
void octtodec()
{
    int rem,b,dec=0,base=1;
    printf("\nenter octal number to convert to decimal:");
    scanf("%d",&b);
    while(b!=0)
    {
        rem=b%10;
        b=b/10;
        dec+=rem*base;
        base*=8;
    }
    printf("\ndecimal is %d",dec);
}
void main()
{
    int n;
    printf("choose conversion\n1 for dec to bin\n2 for bin to dec\n3 for dec to hex");
    printf("\n4 for hex to dec\n5 for dec to oct\n6 for oct to dec\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:dectobin();
        break;
        case 2:bintodec();
        break;
        case 3:dectohex();
        break;
        case 4:hextodec();
        break;
        case 5:dectooct();
        break;
        case 6:octtodec();
        break;
        default: printf("invalid input");
        break;
    }
}
