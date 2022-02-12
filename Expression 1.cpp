#include <bits/stdc++.h>
using namespace std;
void output(double a,double b,char sign)
{
   if (sign=='+')
   {
       if (a+b == floor(a+b))
            cout << fixed << setprecision(0) << a+b;
       else
            cout << fixed << setprecision(4) << a+b;
   }
   if (sign=='-')
   {
      if (a-b == floor(a-b))
         cout << fixed << setprecision(0) << a-b;
      else
         cout << fixed << setprecision(4) << a-b;
    }
    if (sign=='/')
    {
       if (b==0)
          cout << "Error";
       else
       {
           if (a/b == floor(a/b))
              cout << fixed << setprecision(0) << a/b;
           else
              cout << fixed << setprecision(4) << a/b;
       }
    }
    if (sign=='*')
    {
       if (a*b == floor(a*b))
           cout << fixed << setprecision(0) << a*b;
       else
           cout << fixed << setprecision(4) << a*b;
    }
}

int main()
{
    freopen("expression_1.in","r",stdin);
    freopen("expression_1.out","w",stdout);
    string S,separator="+-*/";
    int N=0;
    while(getline(cin,S))
    {
        string first,last;
        int place;
        place=S.find_first_of(separator,0);
        first=S.substr(0,place);
        last=S.substr(place+1,S.size());
        double one=stod(first);
        double two=stod(last);
        if (N>0)
            cout << '\n';
        output(one,two,S[place]);
        N++;
    }

}
