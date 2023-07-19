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
   //player();
    return 0;
}