#include <iostream>
using namespace std;
int main(){
    int number,temp,digits=0,remainder,i,power,sum=0;
    cout<<"Enter the number : ";
    cin>>number;
    temp=number;
    while(temp!=0){
        digits++;
        temp/=10;
    }
    temp=number;
    while(temp!=0){
        remainder=temp%10;
        i=1;
        power=1;
        while(i<=digits){
            power=power*remainder;
            i++;
        }
        sum+=power;
        temp/=10;
    }
    if(sum==number){
        cout<<number<<" is an armstrong number.";
    }
    else{
        cout<<number<<" is not an armstrong number.";
    }
    return 0;
}