// exo2.cpp : Gestion d’un graphe orienté avec pointeurs
#include <iostream>
#include <vector>
using namespace std;

struct Graph {
    int V;
    vector<int>* adj;

    Graph(int V) {
        this->V = V;
        adj = new vector<int>[V];
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
    }

    void DFSUtil(int v, bool visited[]) {
        visited[v] = true;
        cout << v << " ";
        for (int u : adj[v]) {
            if (!visited[u]) {
                DFSUtil(u, visited);
            }
        }
    }

    void DFS(int start) {
        bool* visited = new bool[V]{};
        cout << "Parcours en profondeur à partir du sommet " << start << ":\n";
        DFSUtil(start, visited);
        cout << endl;
        delete[] visited;
    }

    ~Graph() {
        delete[] adj;
    }
};

int main() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);

    g.DFS(0);
    return 0;
}
