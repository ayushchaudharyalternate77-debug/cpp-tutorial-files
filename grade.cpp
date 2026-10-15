#include <iostream>
using namespace std;
int main(){
    int marks;
    cout <<"enter your marks : ";
    cin>>marks;
    if(marks>=90 && marks<=100){
        cout<<"A";
    }
    else if(marks>=80 && marks<=100){
        cout<<"B";
    }
    else if(marks>=70 && marks<=100){
        cout <<"C";
    }
    else if(marks>=50 && marks<=100){
        cout <<"D";
    }
    else if(marks>=33 && marks<=100){
        cout <<"E";
    }
    else if(marks>=0 && marks<=100){
        cout<<"Fail";
    }
    else{
        cout<<"enter marks in range [0,100]";
    }
    return 0;
    

}