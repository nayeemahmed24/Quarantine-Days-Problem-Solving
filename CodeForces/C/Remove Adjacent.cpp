#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<char>ve;
    for(int i = 0; i<n; i++)
        ve.push_back(s[i]);


    int eq = 'z'  - 'a';

    while(1)
    {
        int flag = 0,i=0;

        while(i<ve.size())
        {

            if(ve[i] - 'a' == eq)
            {
                if(i==0)
                {
                    if(ve[i+1] - 'a' + 1 ==  ve[i] - 'a')
                    {

                        ve.erase(ve.begin()+i);
                        flag = 1;
                        i-=2;

                    }
                }
                else if(i == n-1 )
                {
                    if(ve[i-1] - 'a' + 1 ==  ve[i] - 'a')
                    {

                        ve.erase(ve.begin()+i);
                        flag = 1;
                        i--;
                    }
                }
                else
                {
                    if(ve[i+1] - 'a' + 1 ==  ve[i] - 'a')
                    {
                        ve.erase(ve.begin()+i);
                        flag = 1;
                        i-=2;
                    }
                    else if(ve[i-1] - 'a' + 1 ==  ve[i] - 'a')
                    {

                        ve.erase(ve.begin()+i);
                        flag = 1;
                        i--;
                    }
                }
            }
            if(i<0)
                i=-1;

            i++;
        }
        eq--;
        if(eq == -1)
            break;

    }

    cout<<n-ve.size()<<endl;

}
