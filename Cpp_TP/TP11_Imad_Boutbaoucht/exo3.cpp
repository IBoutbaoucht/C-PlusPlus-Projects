#include <iostream>
#include <vector>
#include <stdexcept>

class StackFullException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Erreur: Pile pleine.";
    }
};

class StackEmptyException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Erreur: Pile vide.";
    }
};

class Stack {
private:
    std::vector<int> stack;
    size_t capacity;

public:
    Stack(size_t cap) : capacity(cap) {}

    void push(int value) {
        if (stack.size() >= capacity) {
            throw StackFullException();
        }
        stack.push_back(value);
    }

    void pop() {
        if (stack.empty()) {
            throw StackEmptyException();
        }
        stack.pop_back();
    }

    size_t size() const {
        return stack.size();
    }
};

void func_c(Stack& stack) {
    stack.pop(); // Will throw StackEmptyException if the stack is empty
}

void func_b(Stack& stack) {
    func_c(stack); // Will propagate the exception from func_c
}

void func_a(Stack& stack) {
    stack.push(1); // Push an element
    stack.push(2); // Push another element
    func_b(stack); // Will throw StackEmptyException from func_c
}

int main() {
    // Test 1: StackFullException via func_a
    try {
        Stack stack(2); // Pile avec une capacité de 2
        stack.push(1);
        stack.push(2);
        std::cout << "Stack size: " << stack.size() << std::endl;
        func_a(stack); // Will throw StackFullException
    } catch (const StackFullException& ex) {
        std::cerr << "Caught in main: " << ex.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown error occurred" << std::endl;
    }

    // Test 2: StackEmptyException avec pop
    try {
        Stack stack(2); // Nouvelle pile vide
        std::cout << "Stack size: " << stack.size() << std::endl;
        stack.pop(); // Will throw StackEmptyException
    } catch (const StackEmptyException& ex) {
        std::cerr << "Caught in main: " << ex.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown error occurred" << std::endl;
    }

    std::cout << "Program completed" << std::endl;
    return 0;
}
