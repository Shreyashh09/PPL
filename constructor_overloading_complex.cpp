#include <iostream>
using namespace std;

class complex
{
int real, img;
public:
    complex()
    {
        real=0;
        img=0;
    }

    complex(int r)
    {
        real=r;
        img=r;
    }
    
    complex(int r, int i)
    {
        real=r;
        img=i;
    }

    void print()
    {
        cout<<"\nsum: "<<real<<"+"<<img<<"i";
    }

    friend complex sum(complex a,complex b);
};

complex sum(complex a, complex b)
{
    return complex(a.real+b.real,a.img+b.img);
}

int main()
{
    cout<<"\nexample of default constructor (real and img are zero)";
    complex b1;
    complex b2;
    complex res = sum(b1,b2);
    res.print();

    cout<<"\n\nexample of single parameter (real and img are equal)";
    int n,m;
    cout<<"\nenter real and imaginary part of first number: ";
    cin>>n;
    cout<<"\nenter real and imaginary part of second number: ";
    cin>>m;
    complex a1(n);
    complex a2(m);
    complex res2 = sum(a1,a2);
    res2.print();

    cout<<"\n\nexample of double parameter";
    int p,q,r,s;
    cout<<"\nenter real part of first number: ";
    cin>>p;
    cout<<"\nenter imaginary part of first number: ";
    cin>>q;
    cout<<"\nenter real part of second number: ";
    cin>>r;
    cout<<"\nenter imaginary part of second number: ";
    cin>>s;


    complex n1(p,q);
    complex n2(r,s);
    complex result = sum(n1,n2);
    result.print();

    return 0;
}
