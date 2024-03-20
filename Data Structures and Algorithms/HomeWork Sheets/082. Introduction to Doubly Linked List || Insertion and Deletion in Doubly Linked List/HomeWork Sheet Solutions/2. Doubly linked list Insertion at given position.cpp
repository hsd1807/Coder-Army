/* a Node of the doubly linked list 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

//Function to insert a new node at given position in doubly linked list.
void addNode(Node *head, int pos, int data)
{
    Node *curr = head;
    while(pos--) {
        curr = curr->next;
    }
    Node *temp = new Node(data);
    temp->next = curr->next;
    temp->prev = curr;
    curr->next = temp;
    if (temp->next) temp->next->prev = temp;
}
