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

void insterAtAnyPos(Node* &head, int pos, int value) {
    Node *newNode = new Node(value);
    if(head == NULL) {
        head = newNode;
        return;
    }
    if(pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node *temp = head;
    for(int i = 1; temp != NULL && i < pos - 1; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        delete newNode;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteFromHead(Node* &head) {
    head = head->next;
}

void deleteFromTail(Node* &head) {
    Node *temp1;
    Node *temp = head;
    while(temp->next != NULL) {
        temp1 = temp;
        temp = temp->next;
    }
    temp1->next = NULL;
}

void deleteFromAnyPos(Node* &head, int pos) {
    Node *temp = head;
    for (int i = 1; i < pos - 1; i++) {
        temp = temp->next;
    }
    if(pos == 1) {
        head = head->next;
        return;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

bool search(Node* head, int key) {
    Node *temp = head;
    while(temp != NULL) {
        if(temp->data == key) {
            return true;
        }
        temp = temp->next;
    }
    return false;
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
    cout << search(head, 3) << endl;
    insterAtAnyPos(head, 2, 5);
    insterAtAnyPos(head, 3, 6);
    insterAtAnyPos(head, 7, 10);
    display(head);
    deleteFromHead(head);
    display(head);
    deleteFromTail(head);
    display(head);
    deleteFromAnyPos(head, 1);
    display(head);
    return 0;
}
