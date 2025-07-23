#include <iostream>
using namespace std;

int main(){
    int a,set,selected_bit,reset,bit_to_reset;
    cout<<"Enter a Value: ";
    cin>>a;
    cout<<"Enter the bit position to be selected(R to L): ";
    cin>>selected_bit;
    cout<<"Enter the bit position to Reset(R to L): ";
    cin>>bit_to_reset;
    set= a|(1<<selected_bit);
    reset= a&(~(1<<bit_to_reset));
    cout<<"\nYour Number is(Before Reset): "<<set;
    cout<<"\nYour Number is(After Reset): "<<reset;
}