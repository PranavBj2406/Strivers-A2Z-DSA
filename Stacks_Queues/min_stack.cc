// brute method use hashing 

class MinStack {
public:
        stack<pair<int,int>> pr;
    MinStack() {
    }
    
    void push(int val) {
            if(pr.empty())
            {
                pr.push({val,val});
            }
            else
            {
                pr.push({val,min(val,pr.top().second)});
            }
    }
    
    void pop() {
        pr.pop();
    }
    
    int top() {
        return pr.top().first;
    }
    
    int getMin() {
        return pr.top().second;
    }
};

// optimal solution use two stack one for val and another for min val
class MinStack {
public:
    stack<int> value;
    stack<int> minvalue;
    MinStack() {
    }
    
    void push(int val) {
        if(value.empty() && minvalue.empty())
        {
            value.push(val);
            minvalue.push(val);
        }
        else
        {
        value.push(val);
        minvalue.push(min(val,minvalue.top()));
        }
    }
    
    void pop() {
        value.pop();
        minvalue.pop();
    }
    
    int top() {
        return value.top();
    }
    
    int getMin() {
        return minvalue.top();
    }
};
