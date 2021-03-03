#include<bits/stdc++.h>
using namespace std;

//Dry Running the Code 
// v[5] = {1,2,3,4,5} target = 2
// l = 0, r = 4
// mid = 2 
// arr[mid] = 3 since (arr[mid] > target) r = mid - 1 = 1
// l = 0, r = 1 
// mid = 0
// arr[mid] = 1 since (arr[mid] < target) l = mid + 1 = 1 
// l = 1 r = 1
// mid = 1
// arr[mid] = 2 since (arr[mid] == target) return mid i.e the index at which the target value is present

// TIME COMPLEXITY - O(logn) where n is the size of the array 
 
int binarysearch(vector<int>v, int left, int right, int target){
    while(left <= right){
        int mid = left + (right - left)/2;
        if(v[mid] == target){
            return mid;
        }
        // the value is present to the left of the mid
        else if(v[mid] > target){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    return -1;
}

int main(){
    int n, target;
    cin>>n;
    vector<int>v(n);
    for(int i = 0 ; i<n ; i++){
        cin>>v[i];
    }
    cin>>target;
    sort(v.begin(), v.end());
    int index = binarysearch(v, 0, v.size()-1, target);
    if(index == -1){
        cout<<"The target value is not present in the array"<<'\n';
    }
    else{
        cout<<"The target value is present in the array at index "<<index<<'\n';
    }
}