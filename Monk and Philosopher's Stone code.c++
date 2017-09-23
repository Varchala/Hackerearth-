#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
stack < int > s;
vector < int > v;
int main()
{
     int n,q,x,c=0,j=0;
    string s1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>q;
        v.push_back(q);
    }
    cin>>q>>x;
    while(q--)
    {
        cin>>s1;
        if(s1=="Harry")
        {
            c=c+v[j];
            s.push(v[j++]);
        }
        if(s1=="Remove")
        {
            c=c-s.top();
            s.pop();
        }
        if(c==x)
        {
        cout<<s.size();
        break;
        }
    }
        if(c!=x)
        cout<<-1;
        return 0;
}
