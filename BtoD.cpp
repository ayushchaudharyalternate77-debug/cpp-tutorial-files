#include <iostream>
using namespace std;
int main(){
    int n,temp;
    cout<<"Enter the binary number to know its decimal: ";
    cin>>n;
    temp=n;
    int remainder,ans=0,two=1;
    while(temp!=0){
        remainder=temp%10;
        ans+=remainder*two;
        temp=temp/10;
        two*=2;


    }
    cout<<ans;
    return 0;
}