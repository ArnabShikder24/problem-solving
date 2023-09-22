#not working properly
class Graph:
    def __init__(self):
        self.graph = {}

    def add_edge(self, user1, user2):
        if user1 not in self.graph:
            self.graph[user1] = []
        if user2 not in self.graph:
            self.graph[user2] = []
        self.graph[user1].append(user2)
        self.graph[user2].append(user1)

    def dfs(self, user, visited, count):
        visited[user] = True
        count[0] += 1  # Increment the count of connected users

        for neighbor in self.graph[user]:
            if not visited[neighbor]:
                self.dfs(neighbor, visited, count)

    def find_influential_users(self):
        visited = {}
        for user in self.graph:
            visited[user] = False

        influential_users = []
        for user in self.graph:
            if not visited[user]:
                count = [0]
                self.dfs(user, visited, count)
                influential_users.append((user, count[0]))

        influential_users.sort(key=lambda x: x[1], reverse=True)
        return influential_users

    def count_connected_users(self, user):
        visited = {}
        for u in self.graph:
            visited[u] = False

        count = [0]
        self.dfs(user, visited, count)
        return count[0]


# Example usage:
if __name__ == "__main__":
    social_network = Graph()

    # Adding edges (friendship connections)
    social_network.add_edge("User1", "User2")
    social_network.add_edge("User1", "User3")
    social_network.add_edge("User2", "User4")
    social_network.add_edge("User5", "User6")

    # Finding influential users
    influential_users = social_network.find_influential_users()
    print("Influential Users:")
    for user, count in influential_users:
        print(f"{user}: {count} connections")

    # Counting users connected to a specific user
    user_to_check = "User1"
    connected_count = social_network.count_connected_users(user_to_check)
    print(f"Number of users connected to {user_to_check}: {connected_count}")
