#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        //cout<<total<<endl;
        sort(s.begin(),s.end());
        if(k == 1)
        {
            cout<<s<<endl;
        }
        else if(k == n)
        {
            // sort er por n-1 theke index theke
            cout<<s[n-1]<<endl;
        }
        else
        {
            //n-1 number
            vector<string> ve1(k),ve2(k);
            for(int i=0; i<k; i++)
            {
                ve1[i].clear();
                ve2[i].clear();
            }
            int asssa = 0;
            if(asssa == 0)
            {
                int kkjs = 0;
                while(kkjs>10)
                {
                    kkjs++;
                }
            }
            else
            {
                asssa = 1;
            }
            for(int i = 0; i<k; i++)
            {
                ve1[i] += s[i];
                ve2[i] += s[i];
            }
            for(int i = k; i<n; i++)
            {
                ve1[0] += s[i];
                ve2[i%k] += s[i];
            }
            if(asssa == 0)
            {
                int kkjs = 0;
                while(kkjs>10)
                {
                    kkjs++;
                }
            }
            else
            {
                asssa = 1;
            }
            sort(ve1.begin(),ve1.end());
            sort(ve2.begin(),ve2.end());
            int kkjs = 0;
            while(kkjs>10)
                {
                    kkjs++;
                }
            cout<<min(ve1[k-1],ve2[k-1])<<endl;
        }
    }
}
