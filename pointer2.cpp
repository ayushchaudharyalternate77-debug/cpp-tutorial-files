// #include <iostream>
// using namespace std;

//     int *ptr1=new int;
// int main(){
//     int *ptr2=new int;
//     cout<<ptr1<<endl;
//     cout<<*ptr1<<endl;
//     cout<<ptr2<<endl;
//     cout<<*ptr2;
    
    
    
    
    
//     return 0;
// }
class Solution {
public:
    int reverse(int x) {
        long long  int temp,sum=0,remainder; 
       
        temp=x;
        if (x>2147483647){
            return 0;
        }
        else{
         while(temp!=0){
            remainder=temp%10;
            sum=sum*10+remainder;
            temp=temp/10;
         } 
         return sum;  
        }
    }
};


