#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
//#include "again.cpp"
#include "personal.cpp"
using namespace std;
//int player();


int main()
{ cout << "come on";
    open_account();

cout << "Transaction Options" << endl;
cout << "1. Withdraw amount: "<< endl;
cout << "2. Print pasbook: "<<endl;
cout << "3. Calculate my interest: "<<endl;
cout << "4. Give my ATM card details"<<endl;
cout << "5. Try again"<<endl;
int sel;
cin >> sel;
Operations(sel);
Loan_ac la;
double inter = la.interest;

cout << "Do you want to open a loan account : "<<endl <<"Yes   No"<<endl;
string ask;
cin >>ask;
if(ask == "Yes")
{  string ac;
    if(sav_yes[ac] == 1)
    {
    create_loan_ac(ac);
    cout << endl <<"Type of Loan Needed : ";
    int what_type;
    cin >> what_type;
    double bal = acc_details[ac];

    switch(what_type)
    {
        case 1:
            la.home_loan(bal);
            break;

        case 2:
            la.car_loan(bal);
            break;
        
        case 3:
            la.personal_loan(bal);
            break;

        case 4:
            la.business_loan(bal);
            break;

        default:
            break;

        
        
                
    }
    }

cout << "Pay installments: "<<endl<<"Yes No" <<endl;
string ad;
cin >> ad;
if(ad == "Yes")
{
    
}

}
   //player();
    return 0;
}