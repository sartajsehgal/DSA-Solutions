class MyStack {
private:
    queue<int> q1,q2;
public:
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        if(!q1.empty())
        {
            //cout<<"pushq1"<<endl;
            q1.push(x);
        }
        else
        {
            //cout<<"pushq2"<<endl;
            q2.push(x);
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int temp;
        int flag=0;
        while(!q1.empty() and (flag==0 or flag==1))
        {
            flag=1;
            //cout<<endl;
            //cout<<"popq1"<<endl;
            temp=q1.front();
            q1.pop();
            if(!q1.empty())
                q2.push(temp);
        }
        while(!q2.empty() and (flag==0 or flag==2))
        {
            flag=2;
            //cout<<"popq2"<<endl;
            temp=q2.front();
            q2.pop();
            if(!q2.empty())
                q1.push(temp);
        }
        return temp;
    }
    
    /** Get the top element. */
    int top() {
        if(!q1.empty())
            return q1.back();
        return q2.back();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        if(q1.empty() and q2.empty())
            return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */