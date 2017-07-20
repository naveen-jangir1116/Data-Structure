#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node() {
        next = NULL;
    }
};


void push_back(Node **head_ref, int key) {
    Node *temp = new Node();
    temp->data = key;

    if (*head_ref == NULL) {
        *head_ref = temp;
    }
    else {
        Node *curr = *head_ref;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = temp;
    }
}

void print_list(Node *head) {
    while (head != NULL) {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main(int argc, char const *argv[]) {
    Node *head = NULL;
    push_back(&head, 10);
    push_back(&head, 5);
    push_back(&head, 7);
    push_back(&head, 2);
    push_back(&head, 11);
    push_back(&head, 3);

    print_list(head);
    return 0;
}
