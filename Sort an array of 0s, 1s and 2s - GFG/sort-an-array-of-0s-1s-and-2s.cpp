// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int arr[3]={0};
        for(int i=0;i<n;i++)
        {
            arr[a[i]]++;
        }
        int i=0;
        while(arr[0]!=0)
        {
            a[i]=0;
            arr[0]--;
            i++;
        }
        while(arr[1]!=0)
        {
            a[i]=1;
            arr[1]--;
            i++;
        }
        while(arr[2]!=0)
        {
            a[i]=2;
            arr[2]--;
            i++;
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends