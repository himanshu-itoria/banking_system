
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
   double interest;
   double duration_months = 120;//10 years
    
   string loan_account_no;
    
    double  car_loan(double bal)
    {   interest = 8;
        loan_type[loan_account_no] = "Car";
        double grantable_amount = 0.4 * balance;
        double duration_needed;
        cout << "For how many months : ";
        double amount_to_pay =  grantable_amount*(1 + ((duration_needed * 0.08)/12));
        cout << "You got to pay : " << amount_to_pay << " after " << duration_needed<<" months "<<endl;
       
    }
     double  home_loan(double bal)
    {   interest = 7;
         loan_type[loan_account_no] = "Home";
        double grantable_amount = 0.4 * balance;
        double duration_needed;
        cout << "For how many months : ";
        double amount_to_pay =  grantable_amount*(1 + ((duration_needed * 0.08)/12));
        cout << "You got to pay : " << amount_to_pay << " after " << duration_needed<<" months "<<endl;
       
    }
     double  personal_loan(double bal)
    {   interest = 12;
         loan_type[loan_account_no] = "Personal";
        double grantable_amount = 0.4 * balance;
        double duration_needed;
        cout << "For how many months : ";
        double amount_to_pay =  grantable_amount*(1 + ((duration_needed * 0.08)/12));
        cout << "You got to pay : " << amount_to_pay << " after " << duration_needed<<" months "<<endl;
       
    }
     double  business_loan(double bal)
    {   interest = 15;
         loan_type[loan_account_no] = "Business";
        double grantable_amount = 0.4 * balance;
        double duration_needed;
        cout << "For how many months : ";
        double amount_to_pay =  grantable_amount*(1 + ((duration_needed * 0.08)/12));
        cout << "You got to pay : " << amount_to_pay << " after " << duration_needed<<" months "<<endl;
       
    }
    
};
void create_loan_ac(string ac)
{
        vector<string> person = per_details[ac];
        int age = stoi(person[1]);

        if(age >25 && (sav_yes[ac] || curr_yes[ac]))
        {      string loan_ac_no = randomString(12);
                loan_yes[ac] = 1;
                ac_to_loan_ac[ac] = loan_ac_no;
        }


}
