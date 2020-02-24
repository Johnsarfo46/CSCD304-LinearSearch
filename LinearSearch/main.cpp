#include <iostream>

using namespace std;
   int LinearSearch(int *, int, int);
int main()
{
    int arr[20]; int numbs; int value;
    int posit = 0;
    cout<<"Please enter the size of your array" << endl;
    cin>>numbs;
    cout<<"Enter the numbs for the array"<<endl;
    for(int i = 0;i < numbs; i++);
    cin>>arr[0];
    cout<<"Enter the value u want to find"<<endl;
    cin>>value;
    posit == LinearSearch(int arr[] , numbs ,value);
    if(posit == -1){
        cout<<"Value not found"<<endl;
    }
    else{
            cout<<"Value found at POSITION: "<<posit;
    }


    return 0;
}
