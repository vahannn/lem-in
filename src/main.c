#include <stdio.h>
#include "lem-in.h"
#include "libft.h"
#include <string.h>
#include "queue.h"
// typedef struct {
//     unsigned int first;
//     unsigned int second;
// } edge;


const int N = 10; 

// typedef struct {
//     unsigned int hashed;
//      char **map;
// } hash;


// int insertInMap(hash *map, char *entry)
// {
//   int i =0;
//   for (i=0;i<map->hashed;i++)
//   {
//     if (strcmp(map->map[i],entry) == 0)
//     return i;
//   }
//   /* Warning no boundary check is added */
//   map->map[map->hashed++] = strdup(entry);   
//   return map->hashed-1;
// }

int bfs(int **graph, int start, int end, int *parent) {
    Queue q;

    int visited[N];

    initializeQueue(&q);

    enqueue(&q, start);
    visited[start] = 1;
    parent[start] = -1;

    while (isEmpty(&q) == 0) {
        int cur_vertex = dequeue(&q);

        for (int i = 0; graph[cur_vertex][i] != -1; i++) {
            int adjacent_vertex = graph[cur_vertex][i];

            if (visited[adjacent_vertex] == 0) {
                parent[adjacent_vertex] = cur_vertex;
                if (adjacent_vertex == end) {
                    return 1;
                }
                visited[adjacent_vertex] = 1;
                enqueue(&q, adjacent_vertex);
            }
        }
    }
    return (0);
}

void fill_array_with_bal(int arr[], int val, size_t size) {
    for (size_t i = 0; i < size; i++) {
        arr[i] = val;
    }
}

int main() {
    // unsigned int order;                   // no.of Vertices
    // unsigned int n;                       // no.of Edges

    int **graph = malloc(sizeof(int *) * N);
    int *parent = malloc(sizeof(int) * N);

    fill_array_with_bal(parent, -2, N);

    for (int i = 0; i < N; i++) {
        graph[i] =  malloc(sizeof(int) * N);
        fill_array_with_bal(graph[i], -1, N);
    }

    int graphPre[][10] = {
      {1, 2, -1},
      {0, 4, -1},
      {0, 3, -1},
      {2, 4, -1},
      {1, 3, -1}
    };

    for (int i = 0; i < 5; i++) {
        for (int j = 0; graphPre[i][j] != -1; j++) {
            graph[i][j] = graphPre[i][j];
        }
    }


   

    int result = bfs(graph, 0, 4, parent);

    printf("result = %d\n", result);
    for (int i = 0; i < N; i++) {
        printf("%d, ", parent[i]);
    }

    printf("\n");

    //  L1-1
    //  L1-4 L2-1
    //  L2-4

    // printf("%d\n", graphPre[0][2]);
    printf("%d\n", graph[0][1]);
    
    // int **dist;
    // // t_vertex obj;
    // printf("len = %zu\n", ft_strlen("barev"));
    
    // printf("barev\n");
}