
#include <iostream>


using namespace std;
int factorial (int x)
{
    cout << "x= "<< x << " at " << &x << endl;
    if (x==0) {
        return 1;
    }
    else if (x==1) {
        return 1;
    }
    else {
        return factotial (x-1)*x;

    }

}
int main ()
{
    int n; cin >> n;
    cout << factorial(n);
}
//day gia tri giam dan
