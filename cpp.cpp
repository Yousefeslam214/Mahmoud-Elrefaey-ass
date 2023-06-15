// Fig. 3.1: AccountTest.cpp
// Creating and manipulating an Account object.
#include <iostream>
#include <string>

using namespace std;

int main() {
       double money;
       double rial;
       double dollar;
       double euore;
       char currency;
       cout<<"how much EGP you want transform: ";
       cin>>money;
       cout<<"what corrency you want to be transformed ";
       cout<<"r =>rial ,d=>dollar ,e =>euore : ";
       cin>>currency;
       if (currency == 'r' ) {
              cout<<"how much rial equal: ";
              cin>>rial;
              money=money/rial;
       }else if(currency == 'd') {
              cout<<"how much dollar equal: ";
              cin>>dollar;
              money=money/dollar;
       } else if(currency == 'e'){
              cout<<"how much euore equal: ";
              cin>>euore;
              money=money/euore;
       } else{
              cout<<"wrong character";
              return 0;
       }

       
       cout<<"The amount is: "<<money<<"\n";
       if(money <= 5000){
              cout<<"you under line of poor";
       } else{
              cout<<"you are rich" ;
       }
       return 0;


}