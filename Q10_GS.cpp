#include <bits/stdc++.h>
using namespace std;
vector<int> heap;

void pop(){
    heap.erase(heap.begin());
}

void insert(int k){
    if(heap.size()==10)
        pop();
    heap.push_back(k);
    int n=heap.size()-1;
    while(n){
        int parent=n/2;
        if(heap[parent]>heap[n])
            swap(heap[parent],heap[n]);
        n=parent;    
    }
}

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        insert(k);
    }
    //sort(heap,heap+10);
    for(int x:heap)
        cout<<x<<" ";
}

