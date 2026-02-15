#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int adj[MAX][MAX];   // Adjacency Matrix
int visited[MAX];
int n;               // Number of vertices

// DFS using recursion
void DFS(int v) {
    printf("%d ", v);
    visited[v] = 1;

    for (int i = 0; i < n; i++) {
        if (adj[v][i] == 1 && !visited[i]) {
            DFS(i);
        }
    }
}

// BFS using queue
void BFS(int start) {
    int queue[MAX], front = 0, rear = 0;

    for (int i = 0; i < n; i++)
        visited[i] = 0;

    queue[rear++] = start;
    visited[start] = 1;

    while (front < rear) {
        int v = queue[front++];
        printf("%d ", v);

        for (int i = 0; i < n; i++) {
            if (adj[v][i] == 1 && !visited[i]) {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
}

int main() {
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &adj[i][j]);

    int start;
    printf("Enter starting vertex: ");
    scanf("%d", &start);

    // DFS
    for (int i = 0; i < n; i++) visited[i] = 0;
    printf("DFS Traversal: ");
    DFS(start);

    // BFS
    printf("\nBFS Traversal: ");
    BFS(start);

    return 0;
}