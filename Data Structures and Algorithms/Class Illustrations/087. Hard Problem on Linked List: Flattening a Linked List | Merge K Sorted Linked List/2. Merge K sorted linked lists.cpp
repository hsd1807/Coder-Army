/*Linked list Node structure

struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/ 

class Solution{
  public:
    Node* merge(Node* head1, Node* head2) {
        Node* head = new Node(0);
        Node* tail = head;
        while (head1 && head2) {
            if (head1->data <= head2->data) {
                tail->next = head1;
                head1 = head1->next;
                tail = tail->next;
                tail->next = NULL;
            }
            else {
                tail->next = head2;
                head2 = head2->next;
                tail = tail->next;
                tail->next = NULL;
            }
        }
        if (head1) {
            tail->next = head1;
        }
        else {
            tail->next = head2;
        }
        return head->next;
    }
    void mergeSort(Node *arr[], int start, int end) {
        if (start >= end) {
            return;
        }
        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);
        arr[start] = merge(arr[start], arr[mid+1]);
    }
    Node * mergeKLists(Node *arr[], int K)
    {
        mergeSort(arr, 0, K-1);
        return arr[0];
    }
};
