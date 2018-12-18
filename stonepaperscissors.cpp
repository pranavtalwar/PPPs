#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string Alice[n];
    string Bob[n];
    int alicewins=0,bobwins=0;
    for(int i=0;i<n;i++)
    {
        cin>>Alice[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>Bob[i];
    }
    for(int i=0;i<n;i++)
    {
        if(Alice[i] == "paper")
        {
            if(Bob[i] == "rock")
            {
                alicewins++;
            }
            else
            {
                if(Bob[i] == "scissors")
                {
                    bobwins++;
                }
            }
        }
        if(Alice[i] == "rock")
        {
            if(Bob[i] == "paper")
            {
                bobwins++;
            }
            else
            {
                if(Bob[i] == "scissors")
                {
                    alicewins++;
                }
            }
        }
        if(Alice[i] == "scissors")
        {
            if(Bob[i] == "paper")
            {
                alicewins++;
            }
            else
            {
                if(Bob[i] == "rock")
                {
                    bobwins++;
                }
            }
        }
        
    }
    cout<<alicewins<<" "<<bobwins<<endl;
    return 0;
}
