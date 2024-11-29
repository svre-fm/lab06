#include<iostream>
using namespace std;

int main(){
    int x;
    int Even = 0,Odd = 0;
    while(true){

        cout << "Enter an integer: ";
        cin >> x;

        if(x==0){
          break;
        }

        if(x%2 == 0){
          Even++;
        }else{
          Odd++;
        }

    }
    cout << "#Even numbers = " << Even << endl;
    cout << "#Odd numbers = " << Odd ;
    return 0;
}