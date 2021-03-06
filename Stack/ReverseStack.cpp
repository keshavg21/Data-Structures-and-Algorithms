#include<bits/stdc++.h>
using namespace std;

void transfer(stack<int>&s, stack<int>&temp, int val){
    for(int i = 0 ; i<val ; i++){
        int k = s.top();
        temp.push(k);
        s.pop();
    }
}

void reverse_stack(stack<int>&s){
    int n = s.size();
    stack<int>temp;
    for(int i = 0 ; i<n ; i++){
        //store the topmost element of stack and pop the top most element from the stack
        int x = s.top();
        s.pop();
        //transfer n-i-1 elements from s to temp
        transfer(s, temp, n-i-1);
        //push the element x in top
        s.push(x);
        //transfer n-i-1 elements from temp to s
        transfer(temp, s, n-i-1);
    }
}

int main(){
    stack<int>s;
    stack<int>temp;
     for(int i = 1 ; i<=5 ; i++){
        temp.push(i);
    }
    for(int i = 1 ; i<=5 ; i++){
        s.push(i);
    }
    cout<<"Elements before reverse are "<<'\n';
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<'\n';
    reverse_stack(s);
    cout<<"Elements after reverse are "<<'\n';
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
