#include<iostream>
using namespace std;

int main(){
    int element;

    cout<<"Enter arrays size \n";
    cin>>element;

    int arr[element];

    int length = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;

    cout<<"Enter elements \n";
    for(int i =0; i < length; i++)
    {
        cin>>arr[i];
        sum += arr[i];

    }
    cout<<"Sum of all elements = "<<sum;
    /*cout<<"your elements \n";
    for(int i = 0; i<length; i++){
        cout<<sum<<"\t";
    }*/
}
