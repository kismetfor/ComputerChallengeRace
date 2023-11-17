#include <stdio.h>
#include <malloc.h>

// 哈希表的大小
const int TABLE_SIZE = 10;

// 哈希节点
struct HashNode {
    int key;
    int value;

    HashNode(int key, int value) : key(key), value(value) {}
};

// 哈希表
struct HashTable {
    HashNode** table = (HashNode**)malloc(sizeof(HashNode*) * TABLE_SIZE);

    HashTable() {
        for (int i = 0; i < TABLE_SIZE; i++)
            table[i] = NULL;
    }

    // 哈希函数
    int hashFunction(int key) {
        return key % TABLE_SIZE;
    }

    // 二次探测法查找下一个可用位置
    int quadraticProbing(int index, int i) {
    //***** Begin *****


    //***** End *****
    }

    // 插入键值对到哈希表
    void insert(int key, int value) {
        int index = hashFunction(key);

        // 发生冲突时，使用二次探测法查找可用的位置
        int i = 0;
        while (table[index] != nullptr && table[index]->key != key) {
            i++;
            index = quadraticProbing(index, i);
        }

        if (table[index] != nullptr) {
            // 键已存在，更新值
            table[index]->value = value;
        }
        else {
            // 键不存在，创建新节点
            table[index] = new HashNode(key, value);
        }
    }

    // 根据键查找值
    int search(int key) {
        int index = hashFunction(key);

        // 发生冲突时，使用二次探测法查找键的位置
        int i = 0;
        while (table[index] != nullptr && table[index]->key != key) {
            i++;
            index = quadraticProbing(index, i);
        }

        if (table[index] != nullptr) {
            // 键存在，返回对应的值
            return table[index]->value;
        }
        else {
            // 键不存在
            return -1;
        }
    }

    // 删除键值对
    void remove(int key) {
        int index = hashFunction(key);

        // 发生冲突时，使用二次探测法查找键的位置
        int i = 0;
        while (table[index] != nullptr && table[index]->key != key) {
            i++;
            index = quadraticProbing(index, i);
        }

        if (table[index] != nullptr) {
            // 键存在，删除节点
            delete table[index];
            table[index] = nullptr;
        }
    }
};
