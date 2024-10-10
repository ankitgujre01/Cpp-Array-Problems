#include<iostream>
using namespace std;

int main()
{
    int element;

    cout<<"Enter arrays size \n";
    cin>>element;

    int arr[element];

    int length = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];

    cout<<"Enter elements \n";
    for(int i = 0; i< length; i++)
    {
        cin>>arr[i];

        if(arr[i] > max)
        {
          max = arr[i];
        }
    }
    cout<<"Maximum = "<<max;
}
