#include <iostream>
using namespace std;
int a=5,b=10;
int sum(int a,int b){
    cout<<"Value of local a = "<<a<<", address of local a = "<<&a<<"\n";
    cout<<"Value of local b = "<<b<<", address of local b = "<<&b<<"\n";
    int s=a+b;
    a=b=7;
    cout<<"new value of local a = "<<a<<", new value of local b = "<<b<<"\n";
    return s;
}
int main(){
    cout<<"Value of global a = "<<a<<", address of global a = "<<&a<<"\n";
    cout<<"Value of global b = "<<b<<", address of global b = "<<&b<<"\n";
    
    cout<<sum(a,b)<<"\n";
    
    cout<<"new Value of global a = "<<a<<", new value of global b = "<<b<<"\n";
    
    return 0;   
}





