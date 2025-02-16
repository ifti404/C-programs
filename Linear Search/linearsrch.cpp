// LINEAR SEARCH ALGORITHM
#include <iostream>
using namespace std;

int linearsrch(int array[], int size, int usernum);
int main()
{
    cout << "Enter the number you want to search the index of:\n";
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculates the size
    int index;
    int userNum;
    cin >> userNum;
    index = linearsrch(arr, size, userNum); // the function will return the index number

    if (index != -1)
    {
        cout << "Your number is at index: " << index << endl;
    }
    else
    {
        cout << "Sorry, we could not find your number in the array\n";
    }

    cout << "Press any button to exit";
    cin.ignore();
    cin.get();
    return 0;
}

int linearsrch(int array[], int size, int userNum)
{
    for (int i = 0; i < size; i++) // The loop will check the number until it finds the desired number
    {
        if (array[i] == userNum)
        {
            return i; // if it finds, it will return the index number
        }
    }
    return -1; // if it doesnt find, it will show -1 as detection of failure
}
