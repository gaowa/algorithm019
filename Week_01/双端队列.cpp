class MyCircularDeque {

    /** Initialize your data structure here. Set the size of the deque to be k. */
    
private:
    int front;
    int rear;
    int *arr;
    int capacity;

public:
     MyCircularDeque(int k) {
        capacity = k + 1;
        arr = new int[capacity];
        front = 0;// ָ���ͷԪ��
        rear = 0;// ָ���βԪ�ص���һ����ַ
    }
    
    /** Adds an item at the front of Deque. Return true if the operation is successful. */
    bool insertFront(int value) {
        if(isFull()) return false;
        // ���ƶ�λ�ã���ֵ
        front = (front - 1 + capacity) %capacity;
        arr[front] = value;
        return true;
    }
    
    /** Adds an item at the rear of Deque. Return true if the operation is successful. */
    bool insertLast(int value) {
        if(isFull()) return false;
        // �ȸ�ֵ���ƶ�λ��
        arr[rear] = value;
        rear = (rear + 1) % capacity;
        return true;
    }
    
    /** Deletes an item from the front of Deque. Return true if the operation is successful. */
    bool deleteFront() {
        if(isEmpty()) return false;
        front = (front + 1) % capacity;
        return true;
    }
    
    /** Deletes an item from the rear of Deque. Return true if the operation is successful. */
    bool deleteLast() {
        if(isEmpty()) return false;
        rear = (rear - 1 + capacity) % capacity;
        return true;
    }
    
    /** Get the front item from the deque. */
    int getFront() {
        if(isEmpty()) return -1;
        return arr[front];
    }
    
    /** Get the last item from the deque. */
    int getRear() {
        if(isEmpty()) return -1;
        return arr[(rear - 1 + capacity) % capacity ];
    }
    
    /** Checks whether the circular deque is empty or not. */
    bool isEmpty() {
        return rear == front;
    }
    
    /** Checks whether the circular deque is full or not. */
    bool isFull() {
        return (rear + 1) % capacity == front;
    }
};
