#include <iostream>
using namespace std;
int main(){
    // int *ptr1=new int(7);
    // cout<<"Address of 7: "<<ptr1<<endl;
    // cout<<"Value at "<<ptr1<<" ="<<*ptr1<<endl;
    // int value=9;
    // cout<<"Address of Vareable Value: "<<&value<<endl;
    // int *ptr2=new int(value);
    // cout<<"Value of ptr2: "<<ptr2<<endl;
    // cout<<"Value at "<<ptr2<<" "<<*ptr2;


    // int *ptr1=new int [5];
    // cout<<"base address: "<<ptr1<<endl;
    int arr[5];
    cout<<"Base address: "<<arr<<endl;
    int *ptr2=new int(arr[5]);
    cout<<"Value of ptr2: "<<ptr2;
    return 0;
}