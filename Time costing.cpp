#include<bits/stdc++.h>
using namespace std;

int Cost(int fromDate,int fromHour,int fromMin,int toDate,int toHour,int toMin)
{
    int curDate = fromDate,curHour = fromHour,curMin = fromMin;
    long long int cost = 0;
    while(1)
    {
        if( curHour == 0 && curMin ==  0 )
            break;
        if(fromDate == toDate){
            if(curHour == toHour && curMin == toMin){
                return cost;
            }

        }

        if(curHour >=0 && curHour<6 )
        {
            cost += 1;
        }
        if(curHour >=6 && curHour<12 )
        {
            cost += 2;
        }
        if(curHour >=12 && curHour<18 )
        {
            cost += 3;
        }
        if(curHour >=18 && curHour<=23 )
        {
            cost += 4;
        }
        curMin++;
        if(curMin >= 60){
            curMin = 0;
            curHour++;
        }
        if(curHour >=24){
            curHour = 0;
            curDate++;
        }

    }

    fromDate++;
    int DayDif = toDate - fromDate;
    cost += DayDif * 3600;
    //
    if(DayDif > 0){
        if(frHour < 6){

        }
    }
    //
    if(toHour < 6){
        cost += toHour * 60 * 1 + toMin;
    }
    else if(toHour < 12){
        cost += 6 * 60 * 1   + toMin*2 + (toHour - 6) * 2;
    }
    else if(toHour<18){
        cost += 6 * 60 * 1+6 * 60 * 2   + toMin*3 + (toHour - 12) * 3;
    }
    else{
        cost += 6 * 60 * 1+6 * 60 * 2   + 6 * 60 * 3 + toMin*4 + (toHour - 18) * 4;
    }

    return cost;



}

int main()
{
    int fD,fH,fM,tD,tH,tM;
    cin>>fD>>fH>>fM>>tD>>tH>>tM;
    cout<<Cost(fD,fH,fM,tD,tH,tM)<<endl;
}
