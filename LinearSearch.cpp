#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,9,8,11,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 8;

    int ans = -1;

    for(int i = 0; i<size; i++)
    {
        if(arr[i]==key)
        {
            ans = i;
        }
    }
    cout<<ans<<endl;
}
