#include <iostream>
using namespace std;
int main() {
        int n;
        cin>>n;
        int nums[n],i,j,target,flag=0;
        for(i=0;i<n;i++){
            cin>>nums[i];
        }
        cin>>target;
        int sol[2];
        for(i=0;i<n;i++){
            sol[0]=i;
            for(j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    sol[1]=j;
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                break;
            }
        }
        cout<<sol[0]<<" "<<sol[1];
        return 0;
}