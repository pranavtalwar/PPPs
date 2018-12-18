#include<iostream>
using namespace std;
int main()
{
    double input=0.0;
    int count = 0;
    double sum=0.0;
    while(input!=-1)
    {
        cin>>input;
        if(input!=-1)
        {
            sum += input;
            count++;
        }
    }
    cout<<sum/count;
    return 0;
}
