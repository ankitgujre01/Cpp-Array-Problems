#include <iostream>
#include <climits>  // For INT_MIN
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

    // Initialize variables to store the largest and second largest elements
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    // Traverse the array to find the largest and second largest elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; // Update second largest
            largest = arr[i];        // Update largest
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];  // Update second largest
        }
    }

    // Check if there is a valid second largest element
    if (secondLargest == INT_MIN) {
        cout << "There is no second largest element in the array." << endl;
    } else {
        cout << "The second largest element is: " << secondLargest << endl;
    }

    return 0;
}
