#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <deque>
#include <stack>
using namespace std;


// Using deque
int main() {
    int q, type, x;
    cin >> q;
    
    deque<int> d;
    for(int i = 0; i < q; i++)
    {
        cin >> type;
        switch(type)
        {
            case 1:
                cin >> x;
                d.push_back(x);
                break;
            case 2:
                d.pop_front();
                break;
            case 3:
                if(!d.empty())
                    cout << d.front() << endl;
                break;
            default:
                break;
        }
    }
    return 0;
}

// Using Switch & Two Stack
/*
int main() {
    int q, type, x;
    cin >> q;
    
    stack<int> inStack, delStack;
    for(int i = 0; i < q; i++)
    {
        cin >> type;
        switch(type)
        {
            case 1:
                cin >> x;
                inStack.push(x);
                break;
            case 2:
                if(delStack.empty())
                    while(!inStack.empty())
                    {
                        delStack.push(inStack.top());
                        inStack.pop();
                    }
                
                delStack.pop();
                break;
            case 3:
                if(delStack.empty())
                    while(!inStack.empty())
                    {
                        delStack.push(inStack.top());
                        inStack.pop();
                    }
                
                cout << delStack.top() << endl;
                break;
            default:
                break;
        }
    }
    return 0;
}
*/

// Disscutions
/*
int main() {
    int q, type, x;
    cin >> q;
    
    stack<int> inStack, delStack;
    for(int i = 0; i < q; i++)
    {
        cin >> type;
        if(type == 1)
        {
            cin >> x;
            inStack.push(x);
        }
        else
        {
            if(delStack.empty())
            {
                while(!inStack.empty())
                {
                    delStack.push(inStack.top());
                    inStack.pop();
                }
            }
            
            if(!delStack.empty())
            {
                if(type == 2)
                    delStack.pop();
                else if(type == 3)
                    cout << delStack.top() << endl;;
            }
        }
    }
    return 0;
}
*/