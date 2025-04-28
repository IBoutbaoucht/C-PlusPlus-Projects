#include <iostream>
#include <stdexcept>

class NegativeQuantityException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Erreur: Tentative d'ajouter une quantité négative.";
    }
};

class InsufficientStockException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Erreur: Stock insuffisant pour le retrait.";
    }
};

class Inventory {
private:
    int stock;

public:
    Inventory(int initial_stock) : stock(initial_stock) {}

    int get_stock() const {
        return stock;
    }

    void add_items(int quantity) {
        if (quantity < 0) {
            throw NegativeQuantityException();
        }
        stock += quantity;
    }

    void remove_items(int quantity) {
        if (quantity > stock) {
            throw InsufficientStockException();
        }
        stock -= quantity;
    }
};

int main() {
    // Test 1: Initialisation et ajout d'articles
    Inventory inv(100);
    std::cout << "Initial stock: " << inv.get_stock() << std::endl;

    try {
        inv.add_items(50);
        std::cout << "After adding 50 items: " << inv.get_stock() << std::endl;
    } catch (const NegativeQuantityException& ex) {
        std::cerr << ex.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown error occurred" << std::endl;
    }

    // Test 2: Tentative de retrait excessif
    try {
        inv.remove_items(160);
        std::cout << "After removing 160 items: " << inv.get_stock() << std::endl;
    } catch (const InsufficientStockException& ex) {
        std::cerr << ex.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown error occurred" << std::endl;
    }

    // Test 3: Tentative d'ajout d'une quantité négative
    try {
        inv.add_items(-10);
        std::cout << "After adding -10 items: " << inv.get_stock() << std::endl;
    } catch (const NegativeQuantityException& ex) {
        std::cerr << ex.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown error occurred" << std::endl;
    }

    std::cout << "Program completed" << std::endl;
    return 0;
}
