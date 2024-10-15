//C++ Program to find Largest and Smallest Element in an Array

#include<iostream>
using namespace std;
int main(){
    int num;

    cout<<"Enter the Number of Elements:\n";
    cin>>num;

    int arr[num];

    cout<<"Enter elements of array:\n";
    for(int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }

    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < num; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout<<"Largest = "<<largest<<endl;
    cout<<"Smallest = "<<smallest;
}
