#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
//include <bits/stdc++.h>


using namespace std;
#define s std ::

unordered_map<string, vector<string> > sav_acounts;
unordered_map<string, vector<string> > curr_acounts;
unordered_map<string, vector<string> > loan_acounts;
unordered_map<string, vector<string>  > transactions_details;
unordered_map<string, int> acc_details;  // balance, nrv, interest,
unordered_map<string, vector<string>  > per_details;



string randomString(int ch)
{
    char alpha[10] = { '1', '2','3','4','5','6','7','8','9','0'};
    string result = "";
    for (int i = 0; i<ch; i++)
        result = result + alpha[rand() % 10];

    return result;
}
unordered_map<string,string>name_ac_no;
//vector<string>account_numbers


class Customer
{  public :
        string name;
        string age;
        string email;
        //vector<string>address[7];



};

class Address
{ public :
    vector<string>add[7];

};
unordered_map< string,vector<string> >address_details;
class Bank_facilities
{ public:
    string ac_no;
    double balance;
    double nrv;
    int interest_rate;

    //int calculate_interest(interest_rate, )


    
};
class Transactions : public Bank_facilities
{
    
    public :
    // Bank_facilities acc1;
    // Bank_facilities acc2;


            double cal_interest(double bal, double dur,double rate)
            {
                double ans = (bal * dur * 0.01 * rate)/365;
                return ans;

            }

            double withdraw(double bal, double new_bal)
            {
                double ans = bal - new_bal;
                return ans;

            }
            double deposit(double bal, double new_bal)
            {
                double ans = new_bal - bal;
                return ans;

            }

            
};


class Savings_ac : public Bank_facilities, public Transactions
{ public:
   bool saving;
    Bank_facilities ab;
    

    

    
};
class Curr_ac : public Bank_facilities, public Transactions
{ public:
   bool current;
    Bank_facilities ab;
    

    

    
};

class Loan_ac : public Bank_facilities, public Transactions
{ public:
   bool lo;
    Bank_facilities ab;
    

    

    
};




//vector<Atm_card>atms;
class Atm_card
{ public :
     string atm_id;
     string cvv;
    string exp_date;

//     void atmprint()
// {
//     Atm_card details;
//     details.atm_id = randomString(16);
//     details.cvv = randomString(3);
//     details.exp_date = randomString(2) + "_" + randomString(2)+ "_" + randomString(4);
//     //

    
//     atms.push_back(details);


//     //cout << "These are your atm details : " << atms[details.atm_id];

   
//     //return atms;

// }
};
// Atm_card cons;
 unordered_map< string,vector<string> >atm_details;
class Transactions : public Bank_facilities
{ public:
    void withdraw()
    {

    }
    void deposit()
    {

    };
    void cal_interest()
    {

    };
    
};





class Account_create
{ public:
    
};




// enum class loan_type
// {
//     Home,
//     Car,
//     Personal,
//     Business
// };

void print_Passbook()
{
    Customer x;
    x.age= 23;
    cout << x.age;
}

void open_account()
{
    Customer cust;
    cout << "Name : ";
    cin >> cust.name;
    cout << endl <<"Age : " ;
    cin >> cust.age;
    cout << endl << "Email id: ";
    cin >> cust.email;
    cout << endl << "Address : ";

    Address ab;
    cout << endl <<"House no : ";
    string st;
    cin >> st;
    ab.add->push_back(st);

    cout << endl <<"Lane no : ";
    string sa;
    cin >> sa;
    ab.add->push_back(sa);

    cout << endl <<"Locality : ";
    string sb;
    cin >> sb;
    ab.add->push_back(sb);

    cout << endl <<"Pincode : ";
    string sc;
    cin >> sc;
    ab.add->push_back(sc);

    cout << endl <<"City : ";
    string sd;
    cin >> sd;
    ab.add->push_back(sd);

    cout << endl <<"State : ";
    string se;
    cin >> se;
    ab.add->push_back(se);
    //address_details[name_ac_no[cust.name]] ->push_back(st);
    // store address credentials here





    




   

    cout << "WHat Account type u want??"<<endl << "1 for Saving" << endl<< "Anything else for current";
    int x;
    cin >> x;
     Bank_facilities fac;

    fac.balance = 0;
    
    fac.ac_no = randomString(12);
    
    Savings_ac sav;
    Loan_ac lo;
    Curr_ac curr;
    //int c = rand();
    

   
    if(x == 1)
    {
        sav.saving = 1;
        int dep;
        cout << "Deposit atleast 10k to open";
        if(dep<10000)
        {
            cout << "restart";
            return;
        }
        else{
            fac.ac_no = randomString(12);
            name_ac_no[cust.name] = fac.ac_no;
             cout << endl << name_ac_no[cust.name]<< endl;

             fac.balance = dep;

        }


        cout << endl << "Opened savings" << endl;
        
        //continue;
    }
    else
    {
        curr.current = 1;
        int dep;
        cout << "Deposit atleast 100k to open";
        if(dep<100000)
        {
            cout << "restart";
            return;
        }
        else{
            fac.ac_no = randomString(12);
            name_ac_no[cust.name] = fac.ac_no;
             cout << endl << name_ac_no[cust.name]<< endl;

             fac.balance = dep;
        }

        cout << endl << "Opened current ac"<< endl;
       // continue;
    }

   // Atm_card a;

    
    //a.atmprint();
    //void atmprint()

    Atm_card details;
    details.atm_id = randomString(16);
    details.cvv = randomString(3);
    details.exp_date = randomString(2) + "_" + randomString(2)+ "_" + randomString(4);
    
    vector<string> cust_atm[3];
    cust_atm->push_back(details.atm_id);
    cust_atm->push_back(details.cvv);
    cust_atm->push_back(details.exp_date);

atm_details[name_ac_no[cust.name]].push_back(details.atm_id);
atm_details[name_ac_no[cust.name]].push_back(details.cvv);
atm_details[name_ac_no[cust.name]].push_back(details.exp_date);



vector<string> abc = atm_details[name_ac_no[cust.name]];

// for(int i = 0;i<3;i++)
// {
//     cout<< endl<< "atm card no: " << abc[0]<<endl;
//     cout<< endl<< "cvv: " << abc[1]<<endl;
//     cout << endl << "exp_date : " << abc[2]<<endl;

// }
cout<< endl<< "atm card no: " << abc[0]<<endl;
    cout<< endl<< "cvv: " << abc[1]<<endl;
    cout << endl << "exp_date : " << abc[2]<<endl;


    
   // atms.push_back(details);
//    for(int i =0; i<3;i++)
//    {
//     string s = cust_atm[i];
//     atm_details[name_ac_no[cust.name]].push_back(s);

//    }

    //atm_details[name_ac_no[cust.name]] = cust_atm;

    //cout << endl << atm_details[name_ac_no[cust.name]];

    //cout << "These are your atm details : " << atms[details.atm_id];

   
    //return atms;




    
}

    
//void print_atm




    
void send_receive(string sender,string receiver)
{

}










int main()
{ open_account();
 //string abc = randomString(16);
 //cout << abc;
    //cout <<"Hello World";
    return 0;
}