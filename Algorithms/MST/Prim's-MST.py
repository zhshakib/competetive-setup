import heapq

def make_graph():
    return {
        'A': [(3, 'D', 'A'), (3, 'C', 'A'), (2, 'B', 'A')],
        'B': [(2, 'A', 'B'), (4, 'C', 'B'), (3, 'E', 'B')],
        'C': [(3, 'A', 'C'), (5, 'D', 'C'), (6, 'F', 'C'), (1, 'E', 'C'), (4, 'B', 'C')],
        'D': [(3, 'A', 'D'), (5, 'C', 'D'), (7, 'F', 'D')],
        'E': [(8, 'F', 'E'), (1, 'C', 'E'), (3, 'B', 'E')],
        'F': [(9, 'G', 'F'), (8, 'E', 'F'), (6, 'C', 'F'), (7, 'D', 'F')],
        'G': [(9, 'F', 'G')],
    }

def prims_MST(Graph, start= 'A'):
    unvisited = list(Graph.keys())
    visited = []
    total_cost = 0
    MST = []

    # Start with the Starting point = 'A'
    unvisited.remove(start)
    visited.append(start)

    # Make a heap for storing with low cost first! 
    item = Graph[start]
    heapq.heapify(item)

    while unvisited:
        new_node = None
        
        (cost, node1, node2) = heapq.heappop(item)

        if node1 in unvisited and node2 in visited: 
            new_node = node1
            MST.append((node2, node1, cost))

        elif node1 in visited and node2 in unvisited:
            new_node = node2
            MST.append((node1, node2, cost))

        if new_node != None:
            unvisited.remove(new_node) # remove from unvisited!
            visited.append(new_node) # make the node visited!
            total_cost += cost


            for node in Graph[new_node]:
                heapq.heappush(item, node)


    return MST, total_cost


graph = make_graph()

(mst, cost) = prims_MST(graph, 'A')

print(f'MST \t: {mst}')
print(f'Cost \t: {cost}')
