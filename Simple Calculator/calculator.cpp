#include <iostream>
using namespace std;

int main()
{
    float op, n1, n2, sum;
    cout << "Welcome to Calculator program!\n";
    cout << " Select what do you want to do: 1) Addition 2)Substraction 3)Multiplication 4) Division 5) Modulus \n";
    cin >> op;
    cout << "Great. Please Choose First Number: \n";
    cin >> n1;
    cout << "Now Choose Second Number";
    cin >> n2;

    switch (op)
    {
    case 1:
        sum = n1 + n2;
        cout << n1 << "+" << n2 << "=" << sum;
        break;
    case 2:
        sum = n1 - n2;
        cout << n1 << "-" << n2 << "=" << sum;
        break;
    case 3:
        sum = n1 * n2;
        cout << n1 << "x" << n2 << "=" << sum;
        break;
    case 4:
        sum = n1 / n2;
        cout << n1 << "/" << n2 << "=" << sum;
        break;
    case 5:
        sum = n1 % n2;
        cout << n1 << "%" << n2 << "=" << sum;
        break;
    }

    return 0;
}
