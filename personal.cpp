
#include "again.cpp"
//#include<iostream>

void Operations(int sel)
{
Transactions t1;
Bank_facilities b1;
Atm_card a1;
string receiver_ac;


// cout << "Transaction Options" << endl;


// cout << "1. Withdraw amount: "<< endl;
// cout << "2. Print pasbook: "<<endl;
// cout << "3. Calculate my interest: "<<endl;
// cout << "4. Give my ATM card details"<<endl;
// cout << "5. Send money"<<endl;
// cout << "6. Try again"<<endl;
 
 string ac_no;
 cout<< "Type ac no ";
 cin >> ac_no;
 //int t;
 //cin>>t;
 vector<string>d1,d2;


switch(sel)
{
    case 1:
        
           
            int amount;
            cout << "give amount : "<< endl;
            cin >> amount;
            if(per_details.find(ac_no)!=per_details.end())
            {
                t1.withdraw(ac_no,amount);
                cout << amount << "withdrew "<<endl;
            }
            break;


            
        
    case 2:
        
            //vector<string> d1;
            d1 = per_details[ac_no];
            for(int i = 0; i< d1.size();i++)
            {
                cout << d1[i]<<endl;
            }
            break;



        

    case 3:
        
            cout << "will bve done";
            break;
        
    
    case 4:
        
            //vector<string> d2;
            d2 = per_details[ac_no];
            for(int i = 0; i< d2.size();i++)
            {
                cout << d2[i]<<endl;
            }
            break;
        
    case 5:
        
            cout << "send to: ";
            
            cin >> receiver_ac;
            int am;
            cin >> am;
            transaction(ac_no,receiver_ac,amount);

            cout << " The amount : "<< amount <<" has been sent"; 
            break;
        
    case 6:
        
            cout << "Retry";
            break;
        

    default:
        break;

}
    return;


}