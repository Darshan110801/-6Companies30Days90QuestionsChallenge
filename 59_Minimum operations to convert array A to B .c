// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

// class Solution {
//   public:
//     int minInsAndDel(int a[], int b[], int m, int n) {
//       unordered_set<int> st;
//       vector<int>probable_ans;
//       for(int i=0;i<m;i++) st.insert(a[i]);
//       for(int i=0;i<n;i++) if(st.find(b[i]) != st.end()) probable_ans.push_back(b[i]);
//       vector<int>  ans;
//       for(int i=0;i<probable_ans.size();i++)
//       {
//           auto it = lower_bound(ans.begin(),ans.end(),probable_ans[i]);
//           if(it == ans.end()) ans.push_back(probable_ans[i]);
//           else *it = ans[i];
//       }
//       return m+n-2*ans.size();
//     }
// };
class Solution {
  public:
   
    int minInsAndDel(int A[], int B[], int N, int M) {
        // code here
        unordered_set<int>st;
        for(int i=0; i<M; i++){
            st.insert(B[i]);
        }
        vector<int>vec;
        for(int i=0; i<N; i++){
            if(st.find(A[i]) != st.end()){
                vec.push_back(A[i]);
            }
        }
         vector<int>res;
        for(int i=0; i<vec.size(); i++){
            auto it = lower_bound(res.begin(),res.end(),vec[i]);
            if(it == res.end()){
                res.push_back(vec[i]);
            }
            else{
                *it = vec[i];
            }
        }
  
        return (N+M) - 2*res.size();
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M;
        cin>>N>>M;
        
        int A[N], B[M];
        for(int i=0; i<N; i++)
            cin>>A[i];
        for(int i=0; i<M; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.minInsAndDel(A,B,N,M) << endl;
    }
    return 0;
}  // } Driver Code Ends
