/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int minEle;
    stack<int> st;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           if (st.empty()) {
               return -1;
           }
           else {
               return st.top() % 101;
           }
       }
       
       /*returns poped element from stack*/
       int pop(){
           if (st.empty()) {
               return -1;
           }
           else {
               int element = st.top() / 101;
               st.pop();
               return element;
           }
       }
       
       /*push element x into the stack*/
       void push(int x){
           if (st.empty()) {
               st.push(x * 101 + x);
           }
           else {
               st.push(x * 101 + min(st.top() % 101, x));
           }
       }
};
