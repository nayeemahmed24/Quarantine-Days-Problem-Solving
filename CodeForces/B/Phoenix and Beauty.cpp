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
        int ara[n];
        set<int>se;
        for(int i = 0; i<n; i++)
        {
            cin>>ara[i];
            se.insert(ara[i]);
        }
        if(k<se.size())
            cout<<-1<<endl;
        else
        {
            set<int>::iterator it = se.begin();
            vector<int> ve;
// Iterate till the end of set
            while (it != se.end())
            {
                ve.push_back((*it));

                it++;
            }
            for(int i = ve.size(); i<k; i++)
            {
                ve.push_back(1);
            }
            cout<<n*ve.size()<<endl;
            for(int i = 0;i<n;i++){
                for(int j = 0;j<ve.size();j++){
                    cout<<ve[j]<< " ";
                }
            }
            cout<<endl;
        }
    }
}
