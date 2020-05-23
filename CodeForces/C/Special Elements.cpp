#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        int ara[n+5];
        int sum[8009];
        for(int i = 0;i<8009;i++)sum[i] = 0;
        for(int i = 1;i<=n;i++){
            scanf("%d",&ara[i]);

        }

        for(int i = 1;i<n;i++){
            int summ = ara[i];
            for(int j = i+1;j<=n;j++){
                summ += ara[j];
                if(summ<8005){
                    sum[summ] = 1;
                }
                if(summ>8005)break;
            }
        }
        int ans = 0;
        for(int i = 1;i<=n;i++){
            if(sum[ara[i]] == 1)ans++;
        }
        printf("%d\n",ans);




    }
}
