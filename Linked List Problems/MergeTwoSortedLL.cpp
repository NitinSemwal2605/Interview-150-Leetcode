#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* mergeTwoSortedLL(Node* head1, Node* head2) {
    if(head1 == NULL) {
        return head2;
    }
    if(head2 == NULL) {
        return head1;
    }

    if(head1->data < head2->data) {
        head1->next = mergeTwoSortedLL(head1->next, head2);
        return head1;
    } else {
        head2->next = mergeTwoSortedLL(head1, head2->next);
        return head2;
    }
}

int main() {
    Node* head1 = new Node();
    Node* second1 = new Node();
    Node* third1 = new Node();
    Node* fourth1 = new Node();
    Node* fifth1 = new Node();

    head1->data = 1;
    head1->next = second1;

    second1->data = 3;
    second1->next = third1;

    third1->data = 5;
    third1->next = fourth1;

    fourth1->data = 7;
    fourth1->next = fifth1;

    fifth1->data = 9;
    fifth1->next = NULL;

    Node* head2 = new Node();
    Node* second2 = new Node();
    Node* third2 = new Node();
    Node* fourth2 = new Node();
    Node* fifth2 = new Node();

    head2->data = 2;
    head2->next = second2;

    second2->data = 4;
    second2->next = third2;

    third2->data = 6;
    third2->next = fourth2;

    fourth2->data = 8;
    fourth2->next = fifth2;

    fifth2->data = 10;
    fifth2->next = NULL;

    Node* head = mergeTwoSortedLL(head1, head2);
    printList(head);

    return 0;
}