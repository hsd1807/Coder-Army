/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/
class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
        while (head) {
            swap(head->prev, head->next);
            if (head->prev == NULL) return head;
            head = head->prev;
        }
    }
};
