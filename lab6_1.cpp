#include<iostream>
using namespace std;

int main(){
    int i=1;
    int Even =0 ;
    int Odd =0;
   
    while(i!=0){
        cout << "Enter an integer: ";
        cin>>i;
        if (i%2==0 &&i!=0){
           Even=Even+1;
        }
        if (i%2!=0 &&i!=0){
               Odd=Odd+1;
        }
        

    }
          
    cout << "#Even numbers = "<<Even<<"\n";
    cout << "#Odd numbers = "<<Odd;
    return 0;
}