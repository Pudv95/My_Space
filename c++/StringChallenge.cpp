#include<bits/stdc++.h>
using namespace std;

/*
Format
    "12:30pm-12:00am"
*/


int minutesPassed(string timeGap){

    //starting time in 24 hour format
    string fromHour = timeGap.substr(0,2);
    string fromMinutes = timeGap.substr(3,2);
    bool am = (timeGap.substr(5,2) == "pm") ? false : true;
    int hourStarting = stoi(fromHour);
    // if(am && hourStarting == 12){
    //     hourStarting = 0;
    // }
    int minutesStarting = stoi(fromMinutes);
    int totalStartingMinutes = (hourStarting*60)+minutesStarting;
    // cout<<hourStarting<<" : "<< minutesStarting<<endl; 
    if(!am){
        totalStartingMinutes += 720;
    }
    //ending time in 24 hour format
    string toHour = timeGap.substr(8,2);
    string toMinutes = timeGap.substr(11,2);
    am = (timeGap.substr(13,2) == "pm") ? false : true;
    int hourEnding = stoi(toHour);
    int minutesEnding = stoi(toMinutes);
    // cout<<hourEnding<<" : "<< minutesEnding<<endl; 
    int totalEndingMinutes = (hourEnding*60)+minutesEnding;
    if(!am){
        totalEndingMinutes += 720;
    }
    // cout<<totalStartingMinutes<<"   "<<totalEndingMinutes<<endl;
    int ans =  abs(totalEndingMinutes-totalStartingMinutes);
    if(totalEndingMinutes<totalStartingMinutes){ 
        int toMidNight = 720 - totalStartingMinutes;
        cout<<toMidNight<<endl;
        ans+=toMidNight;
    }
    return ans;
}

int main(){
    string timeGap;
    cin>>timeGap;
    int ans = minutesPassed(timeGap);
    cout<<ans<<endl;
    return 0;
}