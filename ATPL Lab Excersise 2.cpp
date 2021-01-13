#include <iostream>
using namespace std;
class MigadikesPrakseis{
private:
    int real,imag;
public:
    template <typename T>
    void myCalcs()
    {
        int real1,real2,imag1,imag2;
       cout <<"Dose real kai imaginary meros: "<<endl;
       cin  >> real1 >> imag1 ;
       cin  >> real2 >>imag2;
       real=real1+real2;
       imag=imag1+imag2;
       cout << "(" << real1 << " + " << imag1 << "i)"
            << " + " << "(" << real2 << " + " << imag2
            << "i) = (" << real << " + " << imag << "i)";

    }
};
