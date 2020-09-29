#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
queue<ll>q;
q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.push(5);
int k=3;
stack<ll>s;
    for(int i=0;i<k;i++)
    {
        long val=q.front();
        s.push(val);
        q.pop();
    }
    long x=q.size();
    while(s.empty()!=true)
    {
        long val=s.top();
        q.push(val);
        s.pop();
    }
    for(int i=0;i<x;i++)
    {
        long val=q.front();
        q.pop();
        q.push(val);
    }
while(q.empty()!=true)
{
    cout<<q.front()<<" ";
    q.pop();
}
}
