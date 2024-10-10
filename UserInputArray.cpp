#include<iostream>
using namespace std;

int main()
{
    int n; // Declare n first
    cout << "Enter the number of elements: ";
    cin >> n; // Input the size of the array

    int arr[n]; // Declare the array after knowing the size

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Take input for each element
    }

    cout << "You entered:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t"; // Print each element
    }

    return 0;
}
