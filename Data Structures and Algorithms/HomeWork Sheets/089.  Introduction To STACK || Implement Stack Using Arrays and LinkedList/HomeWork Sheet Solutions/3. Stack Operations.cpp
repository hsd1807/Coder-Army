class Geeks {
  public:
    // Function to insert element to stack
    void insert(stack<int>& st, int x) {
        st.push(x);
    }

    // Function to pop element from stack
    void remove(stack<int>& st) {
        st.pop();
    }

    void headOf_Stack(stack<int>& st) {
        cout << st.top() << '\n';
    }

    // Function to find the element in stack, print Yes,if found, else print No.
    void find(stack<int> st, int val) {
        while (st.size()) {
            if (st.top() == val) {
                cout << "Yes" << '\n';
                return;
            }
            st.pop();
        }
        cout << "No" << '\n';
    }
};
