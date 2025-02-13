#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cars[] = {"Audi", "BMW", "Corola", "Mercedes"};
    for (string i : cars)
    {
        cout << i << "\n";
    }
    return 0;
}
