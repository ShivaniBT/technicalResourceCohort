#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;
    //finding gcd and lcm of two numbers.
    int gcd=min(num1,num2);
    while(gcd){
        if(num1%gcd==0 && num2%gcd==0){
            cout<<gcd;
            break;
        }
        else{
            gcd--;
            continue;
        }
    }
    cout<<"\n";
    int lcm=(num1*num2)/gcd;
    cout<<lcm;
}
