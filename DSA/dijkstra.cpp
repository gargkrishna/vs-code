#include <bits/stdc++.h>
using namespace std;
#define v 9
int mindis(int dis[], bool p[])
{
    int min = INT_MAX, minI;
    for (int i = 0; i < v; i++)
    {
        if (p[i] == false && dis[i] <= min)
        {
            min = dis[i];
            minI = i;
        }
    }
    return minI;
}
void dijkstra(int g[v][v])
{
    int dis[v], i, j, k;
    bool p[v];
    for (i = 0; i < v; i++)
    {
        dis[i] = INT_MAX;
        p[i] = false;
    }
    dis[0] = 0;
    for (i = 0; i < v - 1; i++)
    {
        int u = mindis(dis, p);
        p[u] = true;
        for (j = 0; j < v; j++)
        {
            if (!p[j] && g[u][j] && (dis[u] != INT_MAX) && (dis[u] + g[u][j] < dis[j]))
            {
                dis[j] = dis[u] + g[u][j];
            }
        }
    }
    for (i = 0; i < v; i++)
    {
        cout << dis[i] << " ";
    }
    cout << '\n';
}
int main()
{
    int G[9][9] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                   {4, 0, 8, 0, 0, 0, 0, 11, 0},
                   {0, 8, 0, 7, 0, 4, 0, 0, 2},
                   {0, 0, 7, 0, 9, 14, 0, 0, 0},
                   {0, 0, 0, 9, , 10, 0, 0, 0},
                   {0, 0, 4, 14, 10, 0, 2, 0, 0},
                   {0, 0, 0, 0, 0, 2, 0, 1, 6},
                   {8, 11, 0, 0, 0, 0, 1, 0, 7},
                   {0, 0, 2, 0, 0, 0, 6, 7, 0}};
    dijkstra(G);
    return 0;
}