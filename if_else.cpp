#include <iostream>
using namespace std;

int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;

    if (n>25){
        cout<<"Number is greater than 25"<<endl;
    }

    else if (n==25){
        cout<<"Number is equal to 25"<<endl;
    }

    else{
        cout<<"Number is less than 25"<<endl;
    }

    return 0;

}