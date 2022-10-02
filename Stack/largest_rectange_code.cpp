#include <bits/stdc++.h>
using namespace std;

int get_max_area(vector<int> arr)
{
    int n = arr.size(), ans = 0;
    stack<int> st;
    arr.push_back(0);
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() and arr[st.top()] > arr[i])
        {
            int t = st.top();
            int h = arr[t];
            st.pop();
            if (st.empty())
            {
                ans = max(ans, h * i);
            } else {
                int len = i - st.top() - 1;
                ans = max(ans, h * len);
            }
        }
        st.push(i);
    }
    return ans;
}

int main()
{

    vector<int> arr = {2, 1, 5, 6, 2, 3};
    cout << get_max_area(arr);

    return 0;
}