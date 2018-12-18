#include<iostream>
#include<string>
using namespace std;
int main()
{
    string input;
    getline(cin,input);
    int flag = 1;
    int i=0,j=input.length() - 1;
    while(flag && i<=j)
    {
        if(isalpha(input[i]) && isalpha(input[j]))
        {
            if((input[i] == input[j]) || (input[i] == (input[j] - 32))|| (input[j] == (input[i] - 32)))
            {
                i++;
                j--;
            }
            else
            {
                flag = 0;   
            }
        }
        else
        {
            if(!isalpha(input[i]))
            {
                i++;
            }
            if(!isalpha(input[j]))
            {
                j--;
            }
        }
    }
    if(flag == 0)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Yes";
    }
    return 0;
}
