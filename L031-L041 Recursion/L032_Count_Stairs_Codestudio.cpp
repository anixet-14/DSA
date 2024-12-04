/*You've have been given a number of stairs. Initially
you are at the 0th stair and you need to reach Nth stair.
Each time you can either climb one or two steps. You
are supposed to return the number of distinct ways in 
which you can climb fromm 0th step to Nth step.*/

#include<iostream>
using namespace std;

//recurrence relation : f(n) = f(n-1)+ f(n-2)
//Either I have come using 1 step or two step.

int countDistingWayToClimbStair(long nStairs){
    //Base case
    if (nStairs<0){
        return 0;
    }
    if (nStairs==0){
        return 1; //Only 1 way to be at 0th stair;
    }
    int ans = countDistingWayToClimbStair(nStairs-1)+countDistingWayToClimbStair(nStairs-2);
    return ans;
}


int main(){
    int ans = countDistingWayToClimbStair(3);
    cout<<ans<<endl;
}