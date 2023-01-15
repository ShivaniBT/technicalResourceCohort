#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    //Grading System
    /*for marks above 90, print excellent.
    for marks above 80 and less than equal to 90, print good.
    for marks above 70 and less than equal to 80, print fair.
    for marks above 60 and less than equal to 70, print meets expectations.
    for marks less than equal to 60, print below par.*/
    if(marks<=100 && marks>90){
        cout<<"excellent";
    }
    else if( marks<=90 && marks>80){
        cout<<"good";
    }
    else if(marks<=80 && marks>70){
        cout<<"fair";
    }
    else if(marks<=70 && marks>60){
        cout<<"meets expectations";
    }
    else if(marks<=0 && marks<=60){
        "below par";
    }
    return 0;
}
