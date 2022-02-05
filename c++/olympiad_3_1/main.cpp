#include <iostream>
#include <vector>
#include <list>
using namespace std;

void add_edge(vector<int> adj[], int src, int dest)
{
    adj[src].push_back(dest);
    adj[dest].push_back(src);
}

bool BFS(vector<int> adj[], int src, int dest, int v,
         int pred[], int dist[])
{
    list<int> queue;

    bool visited[v];

    for (int i = 0; i < v; i++) {
        visited[i] = false;
        dist[i] = 2147483647;
        pred[i] = -1;
    }

    visited[src] = true;
    dist[src] = 0;
    queue.push_back(src);

    while (!queue.empty()) {
        int u = queue.front();
        queue.pop_front();
        for (int i = 0; i < adj[u].size(); i++) {
            if (visited[adj[u][i]] == false) {
                visited[adj[u][i]] = true;
                dist[adj[u][i]] = dist[u] + 1;
                pred[adj[u][i]] = u;
                queue.push_back(adj[u][i]);

                if (adj[u][i] == dest)
                    return true;
            }
        }
    }

    return false;
}

int printShortestDistance(vector<int> adj[], int s,
                           int dest, int v, int &answer, vector<vector<int>> &distances)
{
    int pred[v], dist[v];

    if (BFS(adj, s, dest, v, pred, dist) == false) {
//        cout << "Given source and destination"
//             << " are not connected";
        return -1;
    }

    vector<int> path;
    int crawl = dest;
    path.push_back(crawl);
    while (pred[crawl] != -1) {
        path.push_back(pred[crawl]);
        crawl = pred[crawl];
    }

//    cout << "Shortest path length is : "
//         << dist[dest];

//    cout << "\nPath is::\n";
    int capacity = 0;
//    vector<vector<int>> c = {{1, 2, 1}, {1, 3, 2}, {2, 3, 3}, {2, 4, 3},
//                             {2, 1, 1}, {3, 1, 2}, {3, 2, 3}, {4, 2, 3}};
    for (int i = path.size() - 1; i >= 0; i--)
    {
//        cout << path[i] << " ";
        if (i < path.size() - 1)
        {
            for (int m = 0; m < distances.size(); m++)
            {
                if (distances[m][0] == path[i + 1]
                    && distances[m][1] == path[i]
                    || distances[m][1] == path[i + 1]
                       && distances[m][0] == path[i])
                {
                    cout << distances[m][2] << "\n";
                    capacity += distances[m][2];
                }
            }
        }
    }
//    cout << "Cap: " << capacity << "\n";
    answer = capacity;
    return capacity;
}

int main()
{
    int n, g;
    cin >> n >> g;
//    int n = 4;
    vector<vector<int>> distances;
    int a;
    int b;
    int c;
    vector<int> adj[n];
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        vector<int> vec(3);
        vec[0] = a;
        vec[1] = b;
        vec[2] = c;
//        vector<int> vec1(3);
//        vec1[0] = b;
//        vec1[1] = a;
//        vec1[2] = c;
        distances.push_back(vec);
//        distances.push_back(vec1);
        add_edge(adj, a, b);
    }

    int answer = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
//            cout << "I J: " << i << " " << j << '\n';
            printShortestDistance(adj, i, j, n, answer, distances);
        }
    }
    cout << answer << endl;

    return 0;
}
