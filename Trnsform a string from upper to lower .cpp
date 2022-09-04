
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{

}
int main()
{
    int t;

    string s;
    char c;
    cin >> c;
    getline(cin,s);
    s=c+s;
   transform(s.begin(),s.end(),s.begin(),::toupper);
   cout << s << endl;
   transform(s.begin(),s.end(),s.begin(),::tolower);
   cout << s << endl;

}
