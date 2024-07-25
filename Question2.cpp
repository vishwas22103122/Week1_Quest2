#include<iostream>
#include<vector>
using namespace std;

int average(vector<int> &arr) {
    int sum=0;
    for(auto &i:arr) {
        sum+=i;
    }
    return (sum);
}

int main() {
    int n;
    cout<<"Enter the number of numbers: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the numbers: ";
    for(int i=0;i<n;i++) {
        int data;
        cin>>data;
        arr.push_back(data);
    }
    int ans = average(arr);
    cout<<"The average of "<<n<<" numbers is: "<<ans/n;
}
