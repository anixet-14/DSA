#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    // Finding Whether Element is present using Binary Search
    cout << "Is 6 present? " << binary_search(v.begin(), v.end(), 6) << endl;

    // Finding Lower Bound of 6
    cout << "Lower Bound of 6: " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    
    // Finding Upper Bound of 4
    cout << "Upper Bound of 4: " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    int a = 3;
    int b = 5;

    // Max and Min operations
    cout << "Max of 3 and 5: " << max(a, b) << endl;
    cout << "Min of 3 and 5: " << min(a, b) << endl;

    // Swapping a and b
    swap(a, b);
    cout << "After swapping, a: " << a << ", b: " << b << endl;

    string str = "abcd";
    reverse(str.begin(), str.end());
    cout<<"Reversed String : "<<str<<endl;    

    cout<<"After rotation : ";
    rotate(v.begin(), v.begin()+1, v.end());

    for (int i : v){
    cout<<i<<" ";
    }
    cout<<endl;

    cout<<"After sorting : ";

    sort(v.begin(), v.end());
    for (int i : v){
    cout<<i<<" ";
    }
    cout<<endl;

    return 0;

}
