#include "personal.cpp"

int countLeapYears(Date d)
{
    int years = d.y;
  
    if (d.m <= 2)
        years--;  
    return years / 4 
           - years / 100;
}

int getdays(Date dt1, Date dt2)
{    
    long int n1 = dt1.y * 365 + dt1.d;
  
    for (int i = 0; i < dt1.m - 1; i++)
        n1 += monthDays[i];  
    n1 += countLeapYears(dt1); 
    long int n2 = dt2.y * 365 + dt2.d;
    for (int i = 0; i < dt2.m - 1; i++)
        n2 += monthDays[i];
    n2 += countLeapYears(dt2);
    return (n2 - n1);
}
int loan_amount_cal(Date dt1,Date cr1,string loan_ac, double interest)
{ int days = getdays(dt1,cr1);
    if(days == 182)
    {
        loan_amount_pending[loan_ac] *= (1 + (interest * 0.01 *0.5*182));
    }
}



void daily_transact_count(string ac, Date d1)
{   
    time_t tmNow;
    tmNow = time(NULL);
    struct tm t = *localtime(&tmNow);
    d1.d = t.tm_mday;
    daily_tran[d1]++;
    if(daily_tran[d1]>5)
    {
        acc_details[ac] -= 500;
    }
}



