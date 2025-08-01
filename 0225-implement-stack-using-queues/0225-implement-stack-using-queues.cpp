#include <queue>

class MyStack {
public:
    std::queue<int> a;
    std::queue<int> b;

    MyStack() {}

    void push(int x) {
        a.push(x);
        while (!b.empty()) {
            a.push(b.front());
            b.pop();
        }
        std::swap(a, b); 
    }

    int pop() {
        int top = b.front();
        b.pop();
        return top;
    }

    int top() {
        return b.front();
    }

    bool empty() {
        return b.empty();
    }
};
