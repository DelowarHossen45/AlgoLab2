#include <bits/stdc++.h>
using namespace std;
 
int main() {
	freopen("WhatIsYourMobileNumber(Input).txt","r",stdin);
	freopen("WhatIsYourMobileNumber(Output).txt","w",stdout);
    int t,c;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        c=0;
        if(s[0]!='0')
        {    for(unsigned int j=0;j<s.size();j++)
            {
                int x=s[j];
                if(x>=48&&x<58)
                c++;
            }
            if(c==10)
            cout<<"YES\n";
            else
            cout<<"NO\n";
        }
        else
        cout<<"NO\n";
    }
	
	return 0;
}
