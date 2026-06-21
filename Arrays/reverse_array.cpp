#include <iostream>
using namespace std; // function to find the largest element in an array


int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << "Original array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Reverse array: ";

    for(int i = n-1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
