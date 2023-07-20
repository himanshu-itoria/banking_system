#include "personal.cpp"

//#inclue "aga"


void pay_emis(string ac_no, double emi_amount,double bal)
{ Transactions td;
   if(bal>=emi_amount)
   {
     loan_amount_pending[ac_no] -= emi_amount;
     vector<double>payit = installments[ac_no];
     payit.push_back(emi_amount);
     installments[ac_no] = payit;
   }
}


void assigning_date()
{
dates[1] = 31;
dates[2] = 29;
dates[3] = 31;
dates[4] = 30;
dates[5] = 31;
dates[6] = 30;
dates[7] = 31;
dates[8] = 31;
dates[9] = 30;
dates[10] = 31;
dates[11] = 30;
dates[12] = 31;

}