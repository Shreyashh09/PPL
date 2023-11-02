#include <iostream>
using namespace std;

class series
{
int n;
long int sum;
public:
    series()
    {
        n=0;
        sum=0;
    }

    series(int num)
    {
        n=num;
        sum=0;
    }

    void calcsum()
    {
        long int term =0;
        for(int i=0;i<n;i++)
        {
            term+=9;
            sum+=term;
            term*=10;
        }
        cout<<sum;
    }
};

int main()
{
    int n;
    cout<<"\nenter no of terms: ";
    cin>>n;
    series s(n);
    s.calcsum();
    return 0;
}