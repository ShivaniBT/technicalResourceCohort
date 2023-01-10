#include<iostream>
using namespace std;
int main(){
    //print Z.
    for(int i=1;i<=5;i++){
        for (int j=1;j<=5;j++){
            if (i==1||i==5){
                cout<<"*";
            }
            else{
                if((5-i)==j){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
    cout<<"\n";
    }
    return 0;
}
