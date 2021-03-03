#include<bits/stdc++.h>
using namespace std;

//TIME COMPLEXITY - O(N) WHERE N IS THE SIZE OF THE ARRAY


int linearsearch(vector<int>v, int target){
    for(int i = 0 ; i<v.size() ; i++){
        if(target == v[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int n, target;
    cin>>n>>target;
    vector<int>v(n);
    for(int i = 0 ; i<n ; i++){
        cin>>v[i];
    }
    int index = linearsearch(v, target);
    if(index == -1){
        cout<<"The target value is not present in the array"<<'\n';
    }
    else{
        cout<<"The target value is present in the array at index "<<index<<'\n';
    }
    
	   
}