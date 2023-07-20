#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>


using namespace std;
#define s std ::

unordered_map<string, vector<string> > sav_acounts;
unordered_map<string, vector<string> > curr_acounts;
unordered_map<string, vector<string> > loan_acounts;
unordered_map<string, vector<string>  > transactions_details;
unordered_map<string, double> acc_details;  
unordered_map<string, vector<string>  > per_details;
unordered_map< string,vector<string> >atm_details;
unordered_map<string,bool>sav_yes;
unordered_map<string,bool>curr_yes;
unordered_map<string,bool>loan_yes;
unordered_map<string,vector<double>>withdrawals;
unordered_map<string,vector<double>>deposits;
unordered_map<string,vector<double>>sent;
unordered_map<string,vector<double>>received;
unordered_map<string,string>sent_to;
unordered_map<string,string>received_from;
unordered_map<string,vector<double>>home_installments;
unordered_map<string,vector<double>>personal_installments;
unordered_map<string,vector<double>>business_installments;
unordered_map<string,double>loan_amount_pending;
unordered_map<string,string>ac_to_loan_ac;
unordered_map<string,string>loan_type;
unordered_map<string,vector<double>>installments;
unordered_map<string,vector<int>>open_dates;
unordered_map<string,vector<int>>loan_taken_dates;


unordered_map<int,int>dates;
//dates[1]->1;






string randomString(int ch)
{
    char alpha[10] = { '1', '2','3','4','5','6','7','8','9','0'};
    string result = "";
    for (int i = 0; i<ch; i++)
        result = result + alpha[rand() % 10];

    return result;
}
unordered_map<string,string>name_ac_no;


class Customer
{  public :
        string name;
        string age;
        string email;
        

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
    
};
class Transactions : public Bank_facilities
{
    
    public :
    
            double cal_interest(double bal, double dur,double rate)
            {
                double ans = (bal * dur * 0.01 * rate)/365;
                return ans;

            }

            void withdraw(string ac, double amount)
            {   
                acc_details[ac]-= amount;
                vector<double>wd = withdrawals[ac];
                wd.push_back(amount);
                withdrawals[ac] = wd;


            }
            double deposit(double bal, double amount, string ac)
            {
                vector<double>dd = deposits[ac];
                dd.push_back(amount);
                deposits[ac] = dd;
                return bal = bal + amount;
            }           
};

class Atm_card
{ public :
     string atm_id;
     string cvv;
    string exp_date;


};


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
    


 Transactions ta;
    cout << "WHat Account type u want??"<<endl << "1 for Saving" << endl<< "Anything else for current";
    int x;
    cin >> x;
     Bank_facilities fac;

    fac.balance = 0;
    
    fac.ac_no = randomString(12);
    
    Savings_ac sav;
    Loan_ac lo;
    Curr_ac curr;
    
    

   
    if(x == 1)
    {
        sav.saving = 1;
        double dep;
        cout << "Deposit amount : ";
        cin >> dep;
        
        cout << "Deposit atleast 10k to open";
        if(dep<10000)
        {
            cout << "restart";
            return;
        }
        else{
            ta.deposit(0,dep,fac.ac_no);
            acc_details[name_ac_no[cust.name]] = dep;
            fac.ac_no = randomString(12);
            name_ac_no[cust.name] = fac.ac_no;
             cout << endl << name_ac_no[cust.name]<< endl;

             fac.balance = dep;
             acc_details[name_ac_no[cust.name]] = dep;
             sav_yes[fac.ac_no] = 1;

        }


        cout << endl << "Opened savings" << endl;
        
       
    }
    else
    {
        curr.current = 1;
        int dep;
        cin>>dep;
        cout << "Deposit atleast 100k to open";
        if(dep<100000)
        {
            cout << "restart";
            return;
        }
        else{
            ta.deposit(0,dep,fac.ac_no);
            acc_details[name_ac_no[cust.name]] = dep;
            fac.ac_no = randomString(12);
            name_ac_no[cust.name] = fac.ac_no;
             cout << endl << name_ac_no[cust.name]<< endl;

             fac.balance = dep;
             acc_details[name_ac_no[cust.name]] = dep;
             curr_yes[fac.ac_no] = 1;

        }

        cout << endl << "Opened current ac"<< endl;
       // continue;
    }

   
    
    per_details[name_ac_no[cust.name]].push_back(cust.name);
    per_details[name_ac_no[cust.name]].push_back(cust.age);
    per_details[name_ac_no[cust.name]].push_back(cust.email);

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

cout<< endl<< "atm card no: " << abc[0]<<endl;
    cout<< endl<< "cvv: " << abc[1]<<endl;
    cout << endl << "exp_date : " << abc[2]<<endl;


cout << " Put in some ";
    
  
    
}

    

bool cansend(string ac_no, double balance, double amount)
{ 
       if(balance < amount)
       {
            cout << endl <<"can't transact"<<endl;
            return false;
       }
        cout << endl<<"Can transact "<<endl;
        return true;

}
void transaction(string sender,string receiver, double amount)
{ if(per_details.find(sender)!=per_details.end() && per_details.find(receiver)!=per_details.end())
    {if(cansend(sender, acc_details[sender],amount) )
    {
        acc_details[sender] -= amount;
        acc_details[receiver] += amount;
        vector<double>sd = sent[sender];
                sd.push_back(amount);
                sent[sender] = sd;
        vector<double>rd = received[receiver];
        rd.push_back(amount);
        received[receiver] = rd;

        sent_to[sender] = received_from[receiver];
        received_from[receiver] = sent_to[sender];
        
    }
    }
}
