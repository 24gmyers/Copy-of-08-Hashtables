#include "ChainedHashtable.h"
#include <iostream>

using namespace std;

int main() {
    // ChainedHashtable<int> ht(21);

    ChainedHashtable<int> ht(127);
    for (int i = 0; i < 100; i++) {
        ht.insert(rand() % 10);
    }
    cout << ht << endl;

    // ht.insert(5);
    // ht.insert(12);
    // ht.insert(19);
    // ht.remove(12);

    // cout << ht << endl;
}
