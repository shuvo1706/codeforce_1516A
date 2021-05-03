//https://codeforces.com/problemset/problem/4/C
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int n,j=1;
    cin >> n;

    map<string, int> database;
    string s;
    while (n--)
    {
        cin >> s;
        if (database[s] == 0)
        {
            cout << "OK" << endl;
            database[s] = 1;

        }
        else
        {
                               database[s]=database[s]+1;
                               s=s+to_string(database[s]-1);

                            cout<<s<<endl;
                                database[s]=database[s]+1;

        }
    }
    return 0;
}
