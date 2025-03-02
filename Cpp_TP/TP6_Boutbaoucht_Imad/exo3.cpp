// exo3.cpp : Gestion d’un arbre binaire de recherche (BST)
#include <iostream>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;

    Node(int val) : key(val), left(nullptr), right(nullptr) {}
};

struct BST {
    Node* root;

    BST() : root(nullptr) {}

    void insert(int key) {
        root = insertRec(root, key);
    }

    bool search(int key) {
        return searchRec(root, key);
    }

    void remove(int key) {
        root = removeRec(root, key);
    }

    void inOrder() {
        inOrderRec(root);
        cout << endl;
    }

private:
    Node* insertRec(Node* node, int key) {
        if (!node) return new Node(key);
        if (key < node->key)
            node->left = insertRec(node->left, key);
        else
            node->right = insertRec(node->right, key);
        return node;
    }

    bool searchRec(Node* node, int key) {
        if (!node) return false;
        if (node->key == key) return true;
        return key < node->key ? searchRec(node->left, key) : searchRec(node->right, key);
    }

    Node* removeRec(Node* node, int key) {
        if (!node) return node;
        if (key < node->key)
            node->left = removeRec(node->left, key);
        else if (key > node->key)
            node->right = removeRec(node->right, key);
        else {
            if (!node->left) {
                Node* temp = node->right;
                delete node;
                return temp;
            } else if (!node->right) {
                Node* temp = node->left;
                delete node;
                return temp;
            }
        }
        return node;
    }

    void inOrderRec(Node* node) {
        if (!node) return;
        inOrderRec(node->left);
        cout << node->key << " ";
        inOrderRec(node->right);
    }
};

int main() {
    BST tree;
    int values[] = {5, 3, 7, 2, 4, 6, 8};
    for (int val : values) tree.insert(val);

    cout << "Parcours infixe : ";
    tree.inOrder();

    cout << "Recherche de 4 : " << (tree.search(4) ? "Trouvé" : "Non trouvé") << endl;

    tree.remove(4);
    cout << "Parcours infixe après suppression : ";
    tree.inOrder();

    return 0;
}
