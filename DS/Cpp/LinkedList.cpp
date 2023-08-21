#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
    Node(int value) {
        this->data = value;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int value) {
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &head, int value) {
    Node *newNode = new Node(value);

    if(head == NULL) {
        head = newNode;
        return;
    }

    Node *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void display(Node* head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);
    insertAtHead(head, 4);
    display(head);
    return 0;
}
