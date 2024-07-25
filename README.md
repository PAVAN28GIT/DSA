# DSA basics

# #include <bits/stdc++.h>
    header file that includes most of the standard C++ library headers.
    it is not part of the C++ standard and should be avoided in production code for the following reasons:
    It makes the compilation slower because it includes unnecessary headers.
    It is non-portable as it is specific to GCC.

 # what is namespace ? 
     is a declarative region that provides a scope to the identifiers ( name of data type, functions, variables, etc.)
     Namespaces are used to organize code into logical groups and to prevent name collisions when multiple libraries are used.
     
# using namespace std; 
    tells the compiler to use the standard namespace. its part of the C++ Standard Library and includes many functions and objects like cout, cin, vector, and string.
    ex : std::cout and std::endl refer to the cout and endl identifiers in the std namespace.

 -> cout (console output) and cin (console input) are objects in the iostream library used for input and output operations

-> A pointer is a variable that stores the memory address of another variable. Pointers are used for dynamic memory allocation, arrays, and to implement data structures like linked        lists and trees.

# diff between struct and classes
  In C++, both struct and class are used to define user-defined types. The main difference is the default access level:
  
  In a **struct** : members are public by default.
  In a **class** : members are private by default.

# diff btwn stack memory and heap memory ?
  **Stack memory** is used for static memory allocation, where variables are allocated and deallocated automatically. It has a limited size.
  **Heap memory** is used for dynamic memory allocation, where variables are allocated and deallocated manually using new and delete. It has a larger size compared to the stack.
                  int stackVar = 10;        // Allocated on the stack
                  int* heapVar = new int;   // Allocated on the heap
                  *heapVar = 20;
                  delete heapVar;           // Deallocated manually

                  
# garbage value 
  refers to an uninitialized variable's value. 
  When a variable is declared but not explicitly initialized, it can hold any arbitrary data that happens to be present at its memory location. 
  This value is unpredictable 
  can lead to undefined behavior and difficult to debug.



int a;      // 'a' contains garbage value
float b;    // 'b' contains garbage value
int* ptr;   // 'ptr' contains garbage value (an unknown address)
string str; // 'str' is automatically initialized to an empty string ""
int arr[10]; // Elements contain garbage values
vector<int> vec; // 'vec' is automatically initialized to be an empty vector

struct MyStruct {
    int x;
    float y;
};
MyStruct s; // 's.x' and 's.y' contain garbage values
