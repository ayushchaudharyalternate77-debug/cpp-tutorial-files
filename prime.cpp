#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int isprime=1;
    int n;
    cout<<"enter the natural number(>=1) you want to check weather it is prime or composite ";
    cin>>n;
    if(n==1){
        cout<<"1 is neither prime nor composite";
    }
    else if(n<=0){
        cout<<"entered number is not natural";
    }
    else{
        int i=2;
        while(i<n){
            if (n%i==0){
                isprime=0;
                break;
            }
            (i++);
        }
        if(isprime==0){
            cout<<n<<" is a composite number";
        }
        else{
            cout<<n<<" is a prime number";
        }
    }
}
