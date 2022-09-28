
#ifndef UNTITLED_DYNAMICTABLE_H
#define UNTITLED_DYNAMICTABLE_H

#include <stdlib.h>
#include<iostream>
using namespace std;
class DynamicTable {


public:
    DynamicTable(){
        //TODO: implement the constructor
        //when created the table should have space for one element
        //variable `size` and `last` should be set accordingly
        size = 1;
        last = 0;
        table = (int*)malloc(sizeof(int));
    }

    ~DynamicTable(){
        //TODO: implement the destructor
        //when destroyed you should call explicitly the destructor for the array
        free(table);
    }

    void insert(int value, bool dummy_version); //TODO: implement the insert function

    void print() {
        for (size_t i = 0; i < size; i++)
        {
            cout << *(table + i) << " ";
        }
    }

private:

    void resize_dummy(); //TODO: implement an inefficient resize function that will expand the array adding only 1 empty spot every time the array is full.
    void resize(); //TODO: implement a resize function that doubles the size of the array every time it is full.

    int* table; //array containing the "list" of elements
    int size; //the size of the array
    int last; //the position of the last element

};


#endif //UNTITLED_DYNAMICTABLE_H
