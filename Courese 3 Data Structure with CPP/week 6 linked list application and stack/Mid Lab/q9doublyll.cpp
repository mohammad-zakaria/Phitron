#include <bits/stdc++.h>
using namespace std;
const int
    totalSize = 110;
struct CreateNode
{
    int first;
    int second;
    int third;
};
CreateNode node[totalSize];
int n;
queue<int> Queue;
int depthFirstSearch(int element)
{
    if (node[element].third == 0)
    {
        return element;
    }
    return depthFirstSearch(node[element].third);
}
int main()
{
    int mark;
    int m;
    while (scanf("%d", &n) == 1)
    {
        mark = 1;
        while (!Queue.empty())
        {
            Queue.pop();
        }
        for (int i = 1; i <= n; i++)
        {
            scanf("%d%d", &node[i].first, &node[i].third);
            node[i].second = i;
            if (!node[i].first)
            {
                Queue.push(i);
            }
        }
        while (!Queue.empty())
        {
            int current;
            current = Queue.front();
            Queue.pop();
            if (!mark)
            {
                node[current].first = m;
                node[m].third = current;
            }
            mark = 0;
            m = depthFirstSearch(current);
        }
        //printf("The output is:\n");
        for (int i = 1; i <= n; i++)
        {
            printf("%d %d\n", node[i].first, node[i].third);
        }
    }
    return 0;
}
