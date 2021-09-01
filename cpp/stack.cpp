#include <bits/stdc++.h>
using namespace std;

#define n 5

void swap(int num1,int num2)
{
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
}

class myStack
{
    int *arr;
    int top;

public:
    myStack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int val)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = val;
        return;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack already empty" << endl;
            return;
        }
        top--;
    }

    void DisplayStack()
    {
        int i = 0;
        while (i <= top)
        {
            cout << arr[i] <<"  ";
            i++;
        }
        cout<<endl;
        return;
    }

    int peek()
    {
        if (top == -1)
        {
            cout << "Oops! Stack is empty" << endl;
        }

        return arr[top];
    }

    void IsEmpty()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }

        else
        {
            cout << "Stack is not empty" << endl;
        }
    }

    void Reverse()
    {
        int terms = 0;
        while (terms < top)
            terms++;

        int m, tmp;
        if (terms % 2 == 0)
            m = terms / 2;

        else
            m = (terms - 1) / 2;

        for (int i = 0; i < m; i++)
        {
            swap(arr[0+i], arr[terms-i-1]);
        }

        for (int i = 0; i < terms; i++)
        {
            cout << arr[i] << ", ";
        }
        cout << endl;
    }

    void debug(int index)
    {
        cout<<arr[index]<<endl;
    }
};

int main(void)
{
    myStack st;
    st.push(1);  //0
    st.push(2);  //1
    st.push(3);  //2
    st.push(4);  //3
    st.push(5);  //3
    // st.push(0);

    // st.pop();
    st.DisplayStack();
    // st.IsEmpty();

    st.Reverse();

    // st.debug(3);

    return 0;
}