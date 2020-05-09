#include <iostream>
template<typename T>

struct Node {
    T data;
    Node *next;
};

template<class T> class LinkList {
private:
    Node<T> *head, *tail;

public:
    LinkList() { head = NULL; tail = NULL; }
    
void addNode(T obj) {
    Node<T> *newNode = new Node<T>;
    newNode->data = obj;
    newNode->next = NULL;
    
    if(head == NULL) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = tail->next;
    }
    
}

void order() {
    T obj;
    std::cout << "What would you like to eat?" << std::endl;
    std::cout << "Type in \"Stop\" to stop ordering" << std::endl;
    
    while(true) {
    std::cin >> obj;
        if((obj == "stop") || (obj == "Stop")) {
            break;
        }
    addNode(obj);
    }
}
    
void display() {
    Node<T> *obj;
    obj = head;
    std::cout << std::endl;
    std::cout << "Your orders are: " << std::endl;
    while(obj != NULL) {
        std::cout << obj->data << std::endl;
        obj = obj->next;
    }
}
    
};

int main() {
    LinkList<std::string> obj;
    obj.order();
    obj.display();
    
    return 0;
}
