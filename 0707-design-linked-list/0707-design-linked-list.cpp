class Node {
public:
    int data;
    Node* next;
    Node(int num) : data(num), next(nullptr) {}
};


class MyLinkedList {
public:
    Node* head;
    int size;

    MyLinkedList() {
        head =nullptr;
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size) return -1;
        Node* temp = head;
        for (int i = 0; i< index; i++){
            temp= temp->next;
        }
        return temp->data;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        size++;
        return ;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr){
            head = newNode;
        }
        else {
            Node* temp = head;
            while(temp->next!=nullptr){
                temp = temp->next;
            }
            temp->next = newNode;
        }
        size++;
        return;
    }
    
    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) return;
        if (index == 0) {
            addAtHead(val);
            return;
        }
        Node* newNode = new Node(val);
        Node* temp = head;
        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;
        Node* temp = head;
        if (index == 0) {
            head = head->next;
            delete temp;
        } else {
            Node* prev = nullptr;
            for (int i = 0; i < index; i++) {
                prev = temp;
                temp = temp->next;
            }
            prev->next = temp->next;
            delete temp;
        }
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */