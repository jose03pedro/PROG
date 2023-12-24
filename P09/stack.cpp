#include <cstddef>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

template <typename T>
struct node { 
  T value;
  node<T>* next; 
};

template <typename T>
class Stack { 
public:
  Stack(); 
  ~Stack();
  size_t size() const;
  bool peek(T& elem) const;
  bool pop(T& elem);
  void push(const T& elem);
private:
  int size_;
  node<T>* top_;
};

template <typename T>
Stack<T>::Stack() : size_(0), top_(nullptr) {}

template <typename T>
Stack<T>::~Stack() {
  node<T>* current = top_;
  while (current != nullptr) {
    node<T>* next = current->next;
    delete current;
    current = next;
  }
}

template <typename T>
size_t Stack<T>::size() const {
  return size_;
}

template <typename T>
bool Stack<T>::peek(T& elem) const {
  if (top_ == nullptr) {
    return false;
  }
  elem = top_->value;
  return true;
}

template <typename T>
bool Stack<T>::pop(T& elem) {
  if (top_ == nullptr) {
    return false;
  }
  node<T>* temp = top_;
  top_ = top_->next;
  elem = temp->value;
  delete temp;
  size_--;
  return true;
}

template <typename T>
void Stack<T>::push(const T& elem) {
  node<T>* new_node = new node<T>{elem, top_};
  top_ = new_node;
  size_++;
}

int main() {
    return 0;
}