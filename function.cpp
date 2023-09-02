#include<iostream>
using namespace std;
int Max(int x , int y)
{
        // if(x>y)
        // return x;
        // else
        // return y;
        if(x>y){
                return x;
        }
        else{
                return y;
        }
}
int main(){
        int a = 70 ,  b = 50;
        int m=Max(a,b);
        cout<<"m is "<< m;

}
