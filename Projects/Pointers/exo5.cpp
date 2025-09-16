#include <iostream>
#include <list>
#include <unordered_map>
#include <memory>
using namespace std;

struct LRUCache {
    size_t capacity;
    list<int> keys;
    unordered_map<int, shared_ptr<int>> cache;

    LRUCache(int cap) : capacity(cap) {}

    void access(int key) {
        if (cache.find(key) != cache.end()) {
            keys.remove(key);
        } else {
            if (keys.size() >= capacity) {
                int oldKey = keys.back();
                keys.pop_back();
                cache.erase(oldKey);
                cout << "Eviction de la clé " << oldKey << "\n";
            }
            cache[key] = make_shared<int>(key);
        }
        keys.push_front(key);
    }

    void printCache() {
        cout << "Cache actuel : ";
        for (int key : keys) {
            cout << *cache[key] << " ";
        }
        cout << "\n";
    }
};

int main() {
    LRUCache cache(4);
    int accesses[] = {1, 2, 3, 1, 4, 5};

    for (int key : accesses) {
        cache.access(key);
        cache.printCache();
    }

    return 0;
}
