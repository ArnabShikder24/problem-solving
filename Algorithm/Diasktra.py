from collections import defaultdict

# Define the graph as an adjacency list
graph = defaultdict(dict)

# Function to add edge to the graph
def add_edge(u, v, weight):
    graph[u][v] = weight
    graph[v][u] = weight

# Add edges to the graph
add_edge('A', 'B', 5)
add_edge('B', 'C', 7)
add_edge('C', 'D', 3)
add_edge('A', 'C', 6)
add_edge('A', 'F', 9)
add_edge('B', 'F', 8)
add_edge('B', 'D', 11)
add_edge('E', 'D', 9)
add_edge('B', 'E', 7)
add_edge('B', 'G', 7)
add_edge('G', 'E', 8)
add_edge('H', 'E', 12)
add_edge('A', 'H', 23)
add_edge('E', 'C', 19)
add_edge('G', 'H', 7)
add_edge('F', 'G', 5)
add_edge('F', 'H', 11)

# Initialize distances and visited nodes
distances = {node: float('inf') for node in graph}
distances['A'] = 0  # Starting node has distance 0 to itself
visited = set()

# Initialize distances for all nodes
for node in graph:
    if node not in distances:
        distances[node] = float('inf')

# Print table header
print("Current Vertex: A")
print("Vertex\tDistance from Source")
for node, distance in sorted(distances.items()):
    print(f"{node}\t{distance}")

# Main loop
iteration = 1
while visited != set(distances):
    # Find the unvisited node with the smallest distance
    min_node = min(set(distances) - visited, key=distances.get)

    # Iterate through neighbors of the current node
    for neighbor, weight in graph[min_node].items():
        # Update distance if shorter path found
        if neighbor in distances:  # Check if neighbor exists in the graph
            new_distance = distances[min_node] + weight
            if new_distance < distances[neighbor]:
                distances[neighbor] = new_distance

    # Mark the current node as visited
    visited.add(min_node)

    # Print table
    print("\nCurrent Vertex:", min_node)
    print("Vertex\tDistance from Source")
    for node, distance in sorted(distances.items()):
        print(f"{node}\t{distance}")

    iteration += 1

# Print final distances
print("\nFinal distances:")
for node, distance in sorted(distances.items()):
    print(f"Node {node}: {distance}")