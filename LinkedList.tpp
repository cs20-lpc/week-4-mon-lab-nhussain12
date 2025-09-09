template <typename T>
LinkedList<T>::LinkedList()
: head(nullptr) { }

template <typename T>
LinkedList<T>::~LinkedList() {
    clear();
}

template <typename T>
void LinkedList<T>::append(const T& elem) {
    // TODO
    Node* new_node = new Node(elem);
    
    if(head == nullptr) {
        head = new_node;
    }
    else {
    Node* curr = head;
    while (curr->next != nullptr) {
        curr = curr->next;
    }
    curr->next = new_node;
    }
    this->length++;
}

template <typename T>
void LinkedList<T>::clear() {
    // TODO
    Node* curr = head;

    while(curr != nullptr) {
        Node* temp = curr;
        curr = curr->next;
        delete temp;
    }

    head = nullptr;
    this->length = 0;
}

template <typename T>
T LinkedList<T>::getElement(int position) const {
    // TODO
    // Exception Handling
    if(position < 0 || position >= this->length) {
        throw string("getElement: error, position out of bounds");
    }
    
    // Function Implementation
    Node* curr = head;
    int index = 0;

    while(index != position) {
        curr = curr->next;
        index++;
    }
    return curr->value;
}

template <typename T>
int LinkedList<T>::getLength() const {
    return this->length;
}

template <typename T>
bool LinkedList<T>::isEmpty() const {
    return this->length == 0;
}

template <typename T>
void LinkedList<T>::replace(int position, const T& elem) {
    // TODO
    // Exception Handling
    if(position < 0 || position >= this->length) {
        throw string("replace: error, position out of bounds");
    }
    
    // Function Implementation
    Node * curr = head;
    int index = 0;

    while(index != position) {
        curr = curr->next;
        index++;
    }
    curr->value = elem;

}

template <typename T>
ostream& operator<<(ostream& outStream, const LinkedList<T>& myObj) {
    if (myObj.isEmpty()) {
        outStream << "List is empty, no elements to display.\n";
    }
    else {
        typename LinkedList<T>::Node* curr = myObj.head;
        while (curr != nullptr) {
            outStream << curr->value;
            if (curr->next != nullptr) {
                outStream << " --> ";
            }
            curr = curr->next;
        }
        outStream << endl;
    }

    return outStream;
}
