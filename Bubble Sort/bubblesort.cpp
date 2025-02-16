// Bubble Sort Algorithm
#include <iostream>
using namespace std;
void bubblesorter(int arr[], int size);
int main()
{
    int size;
    int arr[10] = {42, 17, 93, 58, 24, 76, 35, 89, 12, 67};
    cout << "Before: ";
    for (int element : arr)
    {
        cout << element << " ";
    }
    size = sizeof(arr) / sizeof(arr[0]);
    bubblesorter(arr, size);
    cout << "\nAfter: ";
    for (int element : arr)
    {
        cout << element << " ";
    }
    cout << "\nPress any button to exit";
    cin.get();
    return 0;
}

void bubblesorter(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}