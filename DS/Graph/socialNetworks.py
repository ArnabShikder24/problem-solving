from collections import defaultdict, deque

class SocialNetworkGraph:
    def __init__(self):
        self.graph = defaultdict(list)

    def add_edge(self, user1, user2):
        self.graph[user1].append(user2)
        self.graph[user2].append(user1)

    def calculate_degree_centrality(self):
        degree_centrality = {}
        for user in self.graph:
            degree_centrality[user] = len(self.graph[user])
        return degree_centrality

    def find_influential_users(self):
        degree_centrality = self.calculate_degree_centrality()
        influential_users = sorted(degree_centrality.items(), key=lambda x: x[1], reverse=True)
        return influential_users

    def count_connected_users(self, start_user):
        visited = set()
        queue = deque([start_user])
        count = 0

        while queue:
            user = queue.popleft()
            if user not in visited:
                visited.add(user)
                count += 1
                for friend in self.graph[user]:
                    if friend not in visited:
                        queue.append(friend)

        return count

if __name__ == "__main__":
    social_network = SocialNetworkGraph()
    social_network.add_edge("Lionel Messi", "Cristiano Ronaldo")
    social_network.add_edge("Lionel Messi", "Neymar")
    social_network.add_edge("Lionel Messi", "Zinedine Zidane")
    social_network.add_edge("Cristiano Ronaldo", "Kylian Mbappé")
    social_network.add_edge("Neymar", "Zinedine Zidane")

    influential_users = social_network.find_influential_users()
    print("Most Influential Users:", influential_users)

    specific_user = "Neymar"
    connected_users_count = social_network.count_connected_users(specific_user)
    print(f"Number of Users Connected to {specific_user}: {connected_users_count}")