// WAP in C/C++ to implement the algorithms 
// (a) Insertion at beginning 
// (b) Insertion at end
// in a singly linked list.

#include <iostream>

class Node{
public:
    int Value;
    Node* Next;
};

void displayList(Node* n) {
    while (n != nullptr)
    {
        std::cout << n->Value << " -> ";
        n = n->Next;
    }

    std::cout << "nullptr" << std::endl;
}

void insertionAtBeginning(Node**head, int newValue) {
    // Prepare a newNode.
    Node* newNode = new Node();
    newNode->Value = newValue;

    // Put it in front of the current head.
    newNode->Next = *head;

    // Move head of the list to point to the newNode.
    *head = newNode;
}

void insertionAtEnd(Node**head, int newValue) {
    // Prepare a new node
    Node* newNode = new Node();
    newNode->Value = newValue;
    newNode->Next = nullptr;

    // If list is empty, newNode will be the head node 
    if (*head == nullptr) {
        *head = newNode;
        return;
    }

    // Else find the last node 
    Node* last = *head;
    while (last->Next != nullptr) {
        last = last->Next;
    }

    // Insert newNode after Last node (at the end)
    last->Next = newNode;
}

int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->Value = 1;
    head->Next = second;

    second->Value = 2;
    second->Next = third;

    third->Value = 3;
    third->Next = nullptr;

    insertionAtBeginning(&head, 0);
    insertionAtEnd(&head, 4);

    displayList(head);
}