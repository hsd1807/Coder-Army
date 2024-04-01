//User function Template for C++

/*Link list node 
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node* reverseBetween(Node* head, int m, int n)
    {
        Node* temp = new Node(0);
        temp->next = head;
        head = temp;
        Node *curr = head, *prev = NULL;
        n -= m;
        n++;
        while (m--) {
            prev = curr;
            curr = curr->next;
        }
        Node *first = prev;
        Node *second = curr;
        while (n--) {
            Node *front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        first->next = prev;
        second->next = curr;
        return head->next;
    }
};
