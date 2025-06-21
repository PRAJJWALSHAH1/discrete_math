//14.	Programs to represent graphs, finding shortest path, and generating minimum spanning trees
#include <stdio.h>
#define INF 999

void dijkstra(int graph[3][3], int start) {
    int dist[3], visited[3] = {0};
    for (int i = 0; i < 3; i++) dist[i] = INF;
    dist[start] = 0;

    for (int i = 0; i < 3; i++) {
        int u = -1;
        for (int j = 0; j < 3; j++)
            if (!visited[j] && (u == -1 || dist[j] < dist[u]))
                u = j;

        visited[u] = 1;
        for (int v = 0; v < 3; v++)
            if (graph[u][v] && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }

    for (int i = 0; i < 3; i++)
        printf("Distance to %d: %d\n", i, dist[i]);
}

int main() {
    int graph[3][3] = {{0, 1, 4}, {1, 0, 2}, {4, 2, 0}};
    dijkstra(graph, 0);
    return 0;
}
