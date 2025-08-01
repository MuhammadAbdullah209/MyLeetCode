class MyCircularQueue {
public:
    vector<int> q;
    int size;
    
    MyCircularQueue(int k) {
        size = k;
    }
    
    bool enQueue(int value) {
        if (q.size() < size) {
           
            for (int i = 0; i < 1; i++) {
                q.push_back(value);
            }
            return true;
        }
        return false;
    }
    
    bool deQueue() {
        if (!q.empty()) {
            q.erase(q.begin());  
            return true;
        }
        return false;
    }
    
    int Front() {
        if (!q.empty()) {
            return q.front();  
        }
        return -1;
    }
    
    int Rear() {
        if (!q.empty()) {
            return q.back();  
        }
        return -1;
    }
    
    bool isEmpty() {
        return q.empty();
    }
    
    bool isFull() {
        return q.size() == size;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */