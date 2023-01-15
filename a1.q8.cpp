#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int j=n;
    int ct=0;
    int x = 1;
    while(j!=0){
        ct++;
        j=j/10;
        x=x*10;
    }
    int y=1;
    while(k--){
    	y=y*10;
    }
    int temp = n%y;
    x=x/y;
    n=n/y;
    int rtt = temp*x + n;
    cout<<rtt<<endl;
    // int shift=n/pow(10,k);
    // int f=pow(10,k);
    // int rtt=(n%f)*pow(10,ct-k)+shift;
    // cout<<rtt;
return 0;
}
