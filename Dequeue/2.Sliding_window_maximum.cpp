#include<bits/stdc++.h>
using namespace std;

int main(){


    // // it is first method 
    int n, k; cin>>n>>k;
    vector<int> arr(n);
    for(auto i : arr)
        cin>>i;

    // multiset<int, greater<int>> s;
    // vector<int> ans;
    // for(int i=0; i<k; i++){
    //     s.insert(arr[i]);
    // }

    // ans.push_back(*s.begin());
    // for(int i = k; i< n; i++){
    //     s.erase(s.lower_bound(arr[i-x]));
    //     s.insert(arr[i]);
    //     ans.push_back(*s.begin());
    // }

    // for(auto i : ans)
    //     cout<<i<<" ";
    // cout<<"\n";


    deque<int> q;
    vector<int> ans;

    for(int i=0; i<k; i++){
        while(!q.empty() and arr[q.back() < arr[i]]){
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(q.front());

    for(int i = k; i < n; i++){
        if(q.front() == i - k){
            q.pop_front();
        }
        while (!q.empty() and arr[q.back()] < arr[i])
        {
            q.pop_front();
        }
        q.push_back(i);
        ans.push_back(arr[q.front()]);
    }
    
    for(auto i : ans){
        cout<<i<<" ";
    }

    return 0;
}