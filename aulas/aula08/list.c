#include <stdlib.h>

struct Node
{
    int val;
    struct Node *next;
};

typedef struct Node Node;

Node *create_list()
{
    Node *head = malloc(sizeof(Node));
    (*head).val = -1;
    (*head).next = NULL;

    return head;
}

void append(Node *head, int val)
{
    Node *cur = head;
    while (cur->next != NULL)
    {
        cur = cur->next;
    }

    Node *tail = malloc(sizeof(Node));
    tail->val = val;
    tail->next = NULL;
    cur->next = tail;

}

void main()
{
    Node *head = create_list();
    append(head,2);
}