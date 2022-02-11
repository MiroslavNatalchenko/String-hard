#include <bits/stdc++.h>

using namespace std;

int translate(string S)
{
    int sum=0;
    if (S.size()==1)
        return S[0]-'0';
    else
        for (int i=0;i<S.size();i++)
            sum+=(S[i]-'0')*pow(10,S.size()-i-1);
    return sum;
}

int armstrong(string S)
{
    int sum=0;
    for (int i=0;i<S.size();i++)
            sum+=pow(S[i]-'0',S.size());
    return sum;
}

int main()
{
    freopen("armstrong.in","r",stdin);
    freopen("armstrong.out","w",stdout);
    string text,separator=" .,&![]"";:",S;
    int cnt=0;
    while (getline(cin,text))
    {
        int pos=0;
        int pos_end=0;
        while(pos_end!=-1)
        {
            pos_end=text.find_first_of(separator,pos);
            S=text.substr(pos,pos_end-pos);
            pos=pos_end+1;
            if (S[0]>='0' && S[0]<='9' && translate(S)==armstrong(S))
            {
                cout << S << '\n';
                cnt++;
            }
        }
    }
    if (cnt==0)
        cout << -1;
}
