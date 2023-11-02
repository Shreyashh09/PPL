// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Complex{
    private:
        int real;
        int imag;
    public:
    	friend ostream& operator <<(ostream &ostream, Complex & c);
    	friend istream& operator >>(istream &istream, Complex & c);
        
};
ostream& operator <<(ostream &ostream, Complex & c)
        {
            ostream<<c.real<<"+i"<<c.imag<<endl;
            return ostream;
        }
istream& operator >>(istream &istream, Complex & c)
        {
            cout<<"enter real:";
            istream>>c.real;
            cout<<"enter img:";
            istream>>c.imag;
            return istream;
        }
int main() {
    Complex c1;
    cin>>c1;
    cout<<c1;
    

    return 0;
}
