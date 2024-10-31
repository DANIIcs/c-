#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

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
