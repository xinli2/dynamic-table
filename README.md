# Dynamic Tables


In this assignment we try to verify if the idea of doubling a dynamic array every time it needs to be resized is a winning strategy in terms of performance.

NOTE - you are not allowed to use C++ libraries or data structures such as `vector`. In this assignment we will use only basic C arrays.


### Step 1 - Setup

The `main.cpp` file provides the code needed to test your implementation of the Dynamic Table. Nothing to be changed here so far.

`Time.*` are two external libraries that will help you estimating the time required for performing certain operations. Nothing to be changed here.

`DynamicTable.*` contains the DynamicTable class that you have to implement. Before starting with that, let's try to compile the project to check that everything is ready.

If you are familiar with `cmake`, I am already providing a cmake file for compiling the project. In this case just run the following commands:

```bash
mkdir build
cd build
cmake ..
make
```

you should obtain the executable named `dynamicTable` in the `build` directory.
If you do not want to use cmake you can compile the program from the main folder with the following command.

```bash
g++ main.cpp DynamicTable.cpp Timer.cpp -o dynamicTable
```

### Step 2 - Implementing the Dynamic Table

As we have seen in class, a dynamic table is an array that automatically resize itself when it gets full. This can be implemented by combining two simple functions, `insert` and `resize`.

* Header file - Start from `DynamicTable.h`, and implement the constructor and destructor of the table. This are the functions called when you create a new Dynamic Table or when you don't need it anymore.

* Implementation - Now implement the two functions insert and resize in `DynamicTable.cpp`. You have two methods for resizing the array. The objective of this assignment is to compare these two methods:

    * `resize_dummy` is supposed to resize the array by adding only one cell every time the array is full
    * `resize` is supposed to double the size of the array.
    * `insert` has a boolean value in input used to decide whether you will call `resize` or `resize_dummy` upon insertion.

### Step 3 - Testing and Evaluation

According to `main.cpp` we are inserting an integer (the value `i`) into our array `op` times. Run the program with increasing values of `op` to check that everything is correct and no segmentation faults are happening. 

Once you are confident your implementation is working, uncomment the remaining lines.

`Timer` will start tracking the time needed to perform the insertions into a table. You can add the line

```c++
cout << time.getElapsedTime() << endl;
```

We want to test if it is true that by using the `dummy_resize` the complexity is close to be quadratical (`O(n^2)`) while when using the `resize` the complexity should be close to linear (`O(n)`). 

What are the results you have obtained? What can we say about the two implementations?

[ MODIFY THIS README FILE AND ADD HERE YOUR COMMENTS.]

The running speed of dummy_resize and resize are similar, but when the data size is larger, the resize runs quicky.


Once the program has been executed you should get two files in output called `results.txt` and `results_dummy.txt`. If you are familiar with python you can run the following commands to get a graphical representation of the timings (be sure that `plot_time.py` and `results.txt` are in the same folder when you run it)

```bash
python plot_time.py
python plot_time_dummy.py
```

[ ADD THE FIGURES YOU HAVE OBTAINED TO THIS README FILE. NOTICE THAT GITHUB HAS PROBLEMS HANDLING PNG FILES. USE JPG EXTENSION INSTEAD FOR YOUR FIGURES ]
