#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

//1971

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        // Paso 1: Crear el grafo como una lista de adyacencia
        unordered_map<int, vector<int>> graph;
        for (const auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        // Paso 2: Verificar si el source es igual al destination (caso especial)
        if (source == destination) {
            return true;
        }

        // Paso 3: Usar un vector<bool> para almacenar los nodos visitados
        vector<bool> visited(n, false);
        queue<int> q;
        
        // Paso 4: Comenzamos con el nodo source
        q.push(source);
        visited[source] = true;

        // Paso 5: Implementar BFS
        while (!q.empty()) {
            int current = q.front();
            q.pop();

            // Revisar cada vecino del nodo actual
            for (int neighbor : graph[current]) {
                // Si llegamos al destino, retornamos true
                if (neighbor == destination) {
                    return true;
                }

                // Si el vecino no ha sido visitado, lo agregamos a la cola
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }

        // Si no encontramos un camino al destino, retornamos false
        return false;
    }
};

//684

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        // Inicializamos el array para el Union-Find con cada nodo como su propio padre
        parent.resize(n + 1);
        for (int i = 0; i <= n; ++i) {
            parent[i] = i;
        }

        // Recorremos cada arista
        for (const auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];

            // Si `u` y `v` ya están en el mismo conjunto, entonces esta arista es redundante
            if (find(u) == find(v)) {
                return edge;
            }

            // De lo contrario, unimos los conjuntos de `u` y `v`
            unite(u, v);
        }

        // Si no se encuentra ninguna arista redundante (aunque siempre debería encontrarse)
        return {};
    }

private:
    vector<int> parent;

    // Función para encontrar el "líder" o "raíz" de un conjunto con compresión de ruta
    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    // Función para unir dos conjuntos
    void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            parent[rootX] = rootY;
        }
    }
};

//547

#include <vector>
using namespace std;

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> visited(n, false);
        int provinces = 0;
        
        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                dfs(isConnected, visited, i);
                provinces++;
            }
        }
        
        return provinces;
    }

private:
    void dfs(const vector<vector<int>>& isConnected, vector<bool>& visited, int i) {
        visited[i] = true;
        for (int j = 0; j < isConnected.size(); ++j) {
            if (isConnected[i][j] == 1 && !visited[j]) {
                dfs(isConnected, visited, j);
            }
        }
    }
};
