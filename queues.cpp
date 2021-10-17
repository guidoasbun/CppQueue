//
// Created by guido on 10/16/2021.
//

#include "queues.h"
#include <queue>
#include <stack>

using namespace std;

void reverseQueue(queue<int>& q, stack<int>& s)
{
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
}
