#include<iostream>
#include<queue>
using namespace std;

int main(){
    //max-heap : Parent ≥ Children (maximum at root).
    priority_queue<int> maxi;

    maxi.push(1);
    maxi.push(3);
    maxi.push(0);
    maxi.push(5);
    maxi.push(6);

    int n = maxi.size();

    for (int i = 0; i< n; i++){ //If direct size() is used in loop, it'll keep updating according to pop resulting in loss of result.
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    //Min - Heap : Parent ≤ Children (minimum at root).

    priority_queue<int, vector<int>, greater<int> > mini;
    mini.push(1);
    mini.push(3);
    mini.push(0);
    mini.push(5);
    mini.push(6);

    int m = mini.size();

    for (int i = 0; i< m; i++){ //If direct size() is used in loop, it'll keep updating according to pop resulting in loss of result.
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

    cout<<mini.empty()<<endl;



}
