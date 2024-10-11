#include <iostream>

class Node{
public:
    int Value;
    Node* Next;
};

void displayList(Node* n) {
    while (n != nullptr)
    {
        std::cout << n->Value << "->";
        n = n->Next;
    }

    std::cout << "nullptr" << std::endl;
}

void insertAtFront(Node**head, int newValue) {
    // Prepare a newNode.
    Node* newNode = new Node();
    newNode->Value = newValue;

    // Put it in front of the current head.
    newNode->Next = *head;

    // Move head of the list to point to the newNode.
    *head = newNode;
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

    insertAtFront(&head, -1);
    displayList(head);
}