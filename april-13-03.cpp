#include<iostream>
using namespace std;
int main()
{
    string user_str;

    while (getline(cin, user_str))
    {
        cout << string(user_str.rbegin(), user_str.rend()) <<endl;
    }
    return 0;
}
