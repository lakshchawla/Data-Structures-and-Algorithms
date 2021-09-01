#include<bits/stdc++.h>
using namespace std;

class MyQueue
{
    int n = 0;
    int *arr;
    int front;
    int back;

public:
    MyQueue(){
        arr = new int[n];
        front = arr[0];
        back = arr[n-1];
    }

    void Enqueue(int val)
    {
        n++;
        arr[n-1] = val;
        back = arr[n-1];
        return;
    }

    void Dequeue()
    {
        int i = 0;
        while (i<n)
        {
            arr[i] = arr[i+1];
            i++;
        }
        n--;
        back = arr[n-1];        
    }

    int Peek()
    {
        return arr[0];
    }

    bool IsEmpty(){
        if(n == 0)
            return 1;

        else
            return 0;
    }

    void Display()
    {
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<"\t";
        }       
        cout<<endl;
    }
};

int main(void)
{
    MyQueue qu;
    qu.Enqueue(1);
    qu.Enqueue(2);
    qu.Enqueue(3);
    qu.Enqueue(4);
    qu.Enqueue(5);

    qu.Dequeue();
    qu.Dequeue();
    qu.Dequeue();
    qu.Dequeue();

    cout<<qu.IsEmpty()<<endl;
}