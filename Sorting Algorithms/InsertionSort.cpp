#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i,a,b) for (int i = a; i < b; i++)
typedef long long ll;
using namespace std;
ll MOD=1000000007;

void insertion_sort(int arr[], int n){
    for(int i = 1; i<n; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for0(i, n){
	    cin>>arr[i];
	}
	insertion_sort(arr, n);
	for0(i, n){
	    cout<<arr[i]<<" ";
	}
  
}
