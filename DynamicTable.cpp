
#include "DynamicTable.h"

void DynamicTable::insert(int value, bool dummy_version) {

    //add a new element in the table
    //use `` to decide which version of resize you want to call
    if (last == size) { //array is full
        if (dummy_version) {
            resize_dummy();
        }
        else {
            resize();
        }
    }
    *(table + last) = value;
    last++;
}

void DynamicTable::resize_dummy() {

    //resize the table when necessary adding one empty spot
    int newSize = size + 1;
    int* newTable = (int*)malloc(newSize * sizeof(int));
    for (size_t i = 0; i < size; i++)
    {
        *(newTable + i) = *(table + i);
    }
    table = newTable;
    size = newSize;
}

void DynamicTable::resize() {

    //resize the table when necessary doubling its size
    int newSize = size * 2;
    int* newTable = (int*)malloc(newSize * sizeof(int));
    for (size_t i = 0; i < size; i++)
    {
        *(newTable + i) = *(table + i);
    }
    table = newTable;
    size = newSize;
}
