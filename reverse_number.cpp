#include<iostream>
using namespace std;
int main(){
    int n,rev_num=0,rem;
    cout  << "Enter a number: ";
    cin >>  n;
    
    while(n>0){
        rem=n%10;
        rev_num=rev_num*10+rem;
        n/=10;
    }
    cout <<"Reversed number is : "<< rev_num << endl;
}