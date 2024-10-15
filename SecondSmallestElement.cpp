#include <iostream>
#include <climits>  // For INT_MAX
using namespace std;

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n < 2) {
        cout << "Array must have at least two elements!" << endl;
        return 1; // Exit if the array has fewer than 2 elements
    }

    int arr[n];

    // Input array elements
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize variables to store the smallest and second smallest elements
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    // Traverse the array to find the smallest and second smallest elements
    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest; // Update second smallest
            smallest = arr[i];         // Update smallest
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];   // Update second smallest
        }
    }

    // Check if there is a valid second smallest element
    if (secondSmallest == INT_MAX) {
        cout << "There is no second smallest element in the array." << endl;
    } else {
        cout << "The second smallest element is: " << secondSmallest << endl;
    }

    return 0;
}
