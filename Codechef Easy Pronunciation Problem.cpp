#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int n,cnt=0;
    bool f=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if((s[i]!='a'&& s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'))
        {
            cnt++;
        }
        else cnt=0;
    if(cnt>=4) 
    {
        f=1;
        break;
    }
    else f=0;
    }
    if(f==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}
