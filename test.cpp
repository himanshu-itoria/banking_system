#include <ctime>
#include <iostream>
#include <typeinfo>

using namespace std;
int main()
{
    // // Declaring argument for time()
    // time_t tt;
  
    // // Declaring variable to store return value of
    // // localtime()
    // struct tm* ti;
  
    // // Applying time()
    // time(&tt);
  
    // // Using localtime()
    // ti = localtime(&tt);
  
    // cout << "Current Day, Date and Time is = "
    //      << asctime(ti);
  
    // return 0;
    time_t tmNow;
    tmNow = time(NULL);
    struct tm t = *localtime(&tmNow);
    cout<<"Current Date: "<<t.tm_mday<<"-"<<t.tm_mon+1<<"-"<<t.tm_year+1900;
    cout<<endl;
    
    cout << typeid(t.tm_mday).name();
    int a = 3;
    cout << " " << typeid(a).name();
    return 0;

}