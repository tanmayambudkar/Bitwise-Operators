#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cout<<"Enter the value of A: ";
    cin>>a;
    cout<<"Enter the value of B: ";
    cin>>b;
    cout<<"Enter a number for LeftShift of A: ";
    cin>>c;
    cout<<"Enter a number for RightShift of B: ";
    cin>>d;
    //Bitwise Operators
    int bit_and;
    int bit_or;
    int bit_xor;
    int bit_not;
    int bit_leftshift;
    int bit_rightshift;
    
    bit_and= a&b;
    bit_or= a|b;
    bit_xor= a^b;
    bit_not= ~a;
    bit_leftshift= a<<c;
    bit_rightshift= b>>d;
    cout<<"AND: "<<bit_and;
    cout<<"\nOR: "<<bit_or;
    cout<<"\nXOR: "<<bit_xor;
    cout<<"\nNOT of A: "<<bit_not;
    cout<<"\nLeftShift of A: "<<bit_leftshift;
    cout<<"\nRightShift of B: "<<bit_rightshift;
    return 0;
}