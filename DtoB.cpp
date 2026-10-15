#include <iostream>
// int power(int n,int m){
//     int product=1;
//     for(int i=1;i<=m;i++){
//         product=product*n;
//     }
//     return product;
// }
// #include <cmath>
using namespace std;
int main(){
    int n,temp,remainder,sum=0,count=0,power=1;
    cout<<"Enter the decimal number whose binary you want to know: ";
    cin>>n;
    temp=n;
    while(temp!=0){
        remainder =temp%2;
        temp=temp/2;
        // sum=sum+remainder*pow(10,count);
        // count+=1;
        sum+=remainder*power;
        power*=10;
        
    }
    cout<<sum;
    return 0;
}