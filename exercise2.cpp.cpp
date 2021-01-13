///Vasiliki Papadimou icsd14151
#include <iostream>
#include <complex>
using namespace std;
template <typename T> class Praxis
{

public:
    T prosthesi(T x , T y);
    T aferesi(T x, T y);
    T pol(T x, T y);
};
template <typename T> T Praxis<T>:: prosthesi(T x, T y)
            {
                return x + y;
            }
template <typename T> T Praxis<T>:: aferesi(T x, T y)
            {
                return x-y;
            }
template <typename T> T Praxis<T>:: pol(T x, T y)
            {
                return x*y;
            }

 int main()

{
     complex <int> a, b, c;

        cin >> a >> b;
        c = a + b;
        cout << c << "\n";

    Praxis <int> int_Praxis_class;
    cout << " (5 + 2i) + (3 + 4i) = " << int_Praxis_class.prosthesi(a,b) << "\n";
    Praxis <int> int_Praxis_class;
    cout << " (5 + 2i) - (3 + 4i) = " << int_Praxis_class.aferesi(a,b) << "\n";
    Praxis <int> int_Praxis_class;
    cout << " (5 + 2i) * (3 + 4i) = " << int_Praxis_class.pol(a,b) << "\n";

    return 0;
}
