#include<iostream>
using namespace std;

int main(){
    int x, i=0;
    int Even,Odd;
    cout << "Enter an integer: ";
    cin >> x;
    while(x != 0){
        cout << "Enter an integer: ";
        cin >> x;
        if(x%2==0){
            x =+ 1;
        }else{
            x =+ 1;
        }
        i++;
    }
    cout << "#Even numbers = " << Even << endl;
    cout << "#Odd numbers = " << Odd ;
    return 0;
}
