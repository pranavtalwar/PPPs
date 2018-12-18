#include <iostream>
using namespace std;
bool leapyear(int year)
{
    bool isleap = false;
    if((year%4==0)&&(year%100 != 0))
    {
        isleap = true;
    }
    else
    {
        if(year%400 == 0)
        {
            isleap = true;
        }
    }
    return isleap;
}
int main()
{
    int input;
    input = 0;
    while(input >= 0)
    {
        cout<<"Enter a year (or negative number to quit):";
        cin>>input;
        if(input >= 0)
        {
            if(leapyear(input))
            {
                cout<<input<<" is a leap year."<<endl;
            }
            else
            {
                cout<<input<<" is not a leap year."<<endl;
            }
        }
        else
        {
            cout<<"Bye!"<<endl;
        }
    }
    return 0;
}
