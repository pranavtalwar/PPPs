#include<iostream>
using namespace std;
bool is_palindrome(int check[], int num)
{
    bool ans = true;
    for(int i=0; i<(num/2); i++)
    {
        if(check[i]!=check[num-i-1])
        {
            ans = false;
            break;
        }
    }
    return ans;
}


int main(){
    int n;
    cin >> n;
    int *input = new int[n]; // A dynamic array with n slots
    for (int i = 0 ; i < n ; i++){
        cin >> input[i];
    }

    if (is_palindrome(input,n) == true ){
        cout << "This is a palindrome.";
    }else{
        cout << "This is NOT a palindrome.";
    }
    return 0;
}

