
#include <iostream>
#include<queue>
#include<stdlib.h>
#include<algorithm>
#define SIZE 100000
using namespace std;

int main()
{
    int a[SIZE];
    for(int i=0;i<SIZE;i++) a[i] = rand();
    
    priority_queue<int,vector<int>,greater<int>>pq;
    
    for(int i:a)
    {
        if(pq.size() < 10)
        {
            pq.push(i);
        }
        else{
            pq.push(i);
            pq.pop();
        }
    }
    cout<<"My solution with PQ (nlogk)--\n";
    for(int i=0;i<10;i++)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<"\n";
    sort(a,a+SIZE,greater<int>());
    cout<<"Solution with sorting (nlogn)--\n";
     for(int i=9;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    
    return 0;
}
