#include<iostream>
using namespace std;
int fact(int n){
        int ans = 1;
        for(int i = 1 ; i<=n ; i++){
                ans = ans *i;
        }
        return ans;
}
int main(){
        int a;
        cout<<"Enter the number: "<<endl;
        cin>>a;
        int output = fact(a);
        cout<<output<<endl;
}
