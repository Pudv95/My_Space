#include <bits/stdc++.h>
using namespace std;

class MyCircularQueue
{
public:
    vector<int> q;
    int s, e;
    int size;
    MyCircularQueue(int k)
    {
        q.resize(k);
        s = 0;
        e = -1;
        size = k;
    }

    bool enQueue(int value)
    {
        if (s != e)
        {
            q[s++] = value;
            if (s == size)
            {
                s = 0;
            }
            if (e == -1)
                e=s - 1;
            ;
            return true;
        }
        return false;
    }

    bool deQueue()
    {
        if (e == -1)
        {
            return false;
        }
        else
        {
            e++;
            if (e == size)
                e = 0;
            if (s == e)
            {
                e = -1;
            }
            return true;
        }
    }

    int Front()
    {
        if (e == -1)
            return -1;
        return q[s];
    }

    int Rear()
    {
        if (e == -1)
            return -1;
        if(s==0) return q[size-1];
        return q[s-1];
    }

    bool isEmpty()
    {
        return e==-1;
    }

    bool isFull()
    {
        return s == e;
    }
};

int main()
{
    MyCircularQueue myCircularQueue =  MyCircularQueue(3);
    if(myCircularQueue.enQueue(1)){
        cout<<"True"<<endl;
    } 
    else{
        cout<<"False"<<endl;
    }
    if(myCircularQueue.enQueue(2)){
        cout<<"True"<<endl;
    } 
    else{
        cout<<"False"<<endl;
    }
    if(myCircularQueue.enQueue(3)){
        cout<<"True"<<endl;
    } 
    else{
        cout<<"False"<<endl;
    }
    if(myCircularQueue.enQueue(4)){
        cout<<"True"<<endl;
    } 
    else{
        cout<<"False"<<endl;
    }
    cout<< myCircularQueue.Rear()<<endl;     
    if(myCircularQueue.isFull()){
        cout<<"Full hai"<<endl;
    }   // return True
    else{
        cout<<"khali hai"<<endl;
    }
    if(myCircularQueue.deQueue()){
        cout<<"True"<<endl;
    } // return True
    else{
        cout<<"False"<<endl;
    }
    if(myCircularQueue.enQueue(4)){
        cout<<"True"<<endl;
    } 
    else{
        cout<<"False"<<endl;
    } // return True
    cout<<myCircularQueue.Rear()<<endl;    
    return 0;
}