
#include "again.cpp"
//#include<iostream>

void Operations(int sel)
{
Transactions t1;
Bank_facilities b1;
Atm_card a1;
string receiver_ac;



 
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
                cout << amount << "withdrew "<< "balance is : ";
                cout << acc_details[ac_no]<<endl;
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

class Savings_ac :  public Transactions
{ public:
   bool saving;
    //Bank_facilities ab;
    

    

    
};
class Curr_ac : public Transactions
{ public:
   bool current;
   // Bank_facilities ab;
    

    

    
};

class Loan_ac : public Bank_facilities
{ public:
   bool lo;
    Bank_facilities ab;
    

    

    
};
