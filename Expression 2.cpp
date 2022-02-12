#include <bits/stdc++.h>
using namespace std;
double output(double a,double b,char sign)
{
   if (sign=='+')
   {
       return a+b;
   }
   if (sign=='-')
   {
      return a-b;
   }
}

int main()
{
    freopen("expression_2.in.txt","r",stdin);
    freopen("expression_2.out.txt","w",stdout);
    string S,separator="+-*/";
    int N=0;
    while(getline(cin,S))
    {
        if (N>0)
               cout << '\n';
        if (!S.empty())
        {
            string first,last;
            int place=0,pos=0;
            place=S.find_first_of(separator,pos);
            first=S.substr(0,place);
            double one=stod(first);
            while (place!=-1)
            {
                if (S.find_first_of(separator,place+1)==-1)
                    last=S.substr(place+1,place-pos+1);
                else
                    last=S.substr(place+1,place-pos);
                double two=stod(last);
                one=output(one,two,S[place]);
                pos=place+1;
                place=S.find_first_of(separator,pos);
            }
            cout << one;
            N++;
        }
        else
           cout << "NULL";
        N++;
    }

}
