#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int a,b,c,d;

        cin>>a>>b>>c>>d;
        if(a == 0 && d == 0){
            if(b % 2 == 1 ){
                cout<<"Tidak Ya Tidak Tidak"<<endl;
            }
            else{
                cout<<"Tidak Tidak Ya Tidak"<<endl;
            }
        }
        else if(b == 0 && c == 0){
            if(a % 2 == 1 ){
                cout<<"Ya Tidak Tidak Tidak"<<endl;
            }
            else{
                cout<<"Tidak Tidak Tidak Ya"<<endl;
            }
        }
        else{
            if((a+b) % 2 == 1 ){
                cout<<"Ya Ya Tidak Tidak"<<endl;
            }
            else{
                cout<<"Tidak Tidak Ya Ya"<<endl;

            }
        }

    }
}
