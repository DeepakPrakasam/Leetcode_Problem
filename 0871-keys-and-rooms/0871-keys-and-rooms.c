#include <stdbool.h>
#include <stdlib.h>

void dfs(int** rooms, bool* visited, int room, int roomsSize, int* roomsColSize) {
    visited[room] = true;  
    
    for (int i = 0; i < roomsColSize[room]; i++) {
        int key = rooms[room][i];
        
        if (key >= 0 && key < roomsSize && !visited[key]) {
            dfs(rooms, visited, key, roomsSize, roomsColSize);
        }
    }
}

bool canVisitAllRooms(int** rooms, int roomsSize, int* roomsColSize) {
    bool* visited = (bool*)calloc(roomsSize, sizeof(bool)); 
    if (!visited) return false;  
    
    dfs(rooms, visited, 0, roomsSize, roomsColSize);  
    
    for (int i = 0; i < roomsSize; i++) {
        if (!visited[i]) {
            free(visited);  
            return false;
        }
    }
    
    free(visited);  
    return true;
}
