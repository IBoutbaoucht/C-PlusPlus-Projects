#include <iostream>
#include <memory>
using namespace std;

struct MemoryBlock {
    int size;
    MemoryBlock(int s) : size(s) {
        cout << "Bloc de mémoire alloué de " << size << " unités.\n";
    }
    ~MemoryBlock() {
        cout << "Libération de la mémoire de " << size << " unités.\n";
    }
};

void mergeBlocks(unique_ptr<MemoryBlock>& b1, unique_ptr<MemoryBlock>& b2) {
    if (b1 && b2) {
        int newSize = b1->size + b2->size;
        b1 = make_unique<MemoryBlock>(newSize);
        b2.reset();
        cout << "Fusion des deux blocs : " << newSize << " unités.\n";
    }
}

int main() {
    unique_ptr<MemoryBlock> block1 = make_unique<MemoryBlock>(100);
    unique_ptr<MemoryBlock> block2 = make_unique<MemoryBlock>(200);

    mergeBlocks(block1, block2);
    return 0;
}
