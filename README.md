# DSA basics

# conversion
     int to other data types (float, double , long , ll ) --> static_cast<float>(num);
     
     int to string --> to_string(num)
     to convert single char digit  to int ->  char-'0'

     string to other types (int , float , double ) -- > stoi(num) , stof(num)


     int :    32 bits (4 bytes) : max 10 digits
     short :  16 bits (2 bytes) : max 5 digits
     long  :  32 bits (4 bytes) : 
     long long :  64 bits (8 bytes) : upto 19 digits
     float :  32 bits (4 bytes) : ~7 decimal digits of precision
     double : 64 bits (8 bytes) : ~15 decimal digits of precision

    
     
# #include <bits/stdc++.h>
 - header file that includes most of the standard C++ library headers. 
 - it is not part of the C++ standard and should be avoided in production code for the following reasons:
 - It makes the compilation slower because it includes unnecessary headers.
 - It is non-portable as it is specific to GCC.

 # what is namespace ?  
  - similar to package in java .. they provide scope to variables , and fucntions 
  - when we import multiple libraries (packages) if there are varibale with same name we dont want them to collide so we use namespace
  - they organise code into groups and avoid collision
 
# using namespace std; 
    
  - tells the compiler to use the standard namespace. its part of the C++ Standard Library and includes many functions and objects like cout, cin, vector, and string.
   - ex : std::cout and std::endl refer to the cout and endl identifiers in the std namespace.

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

  - refers to an uninitialized variable's value.   
  - When a variable is declared but not explicitly initialized, it can hold any arbitrary data that happens to be present at its memory location.   
  - This value is unpredictable   
  - can lead to undefined behavior and difficult to debug.  



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


# properties of BST
  - left subtree are all smaller , right subtree are all bigger
  - all elements are unique
  - inorder traversal of bst will always be sorted


# correct data structure to store numbers 

Choosing the Right Data Structure:

- For fast access by index: Use arrays or vectors.
- For frequent insertions and deletions: Use linked lists or balanced trees.
- For maintaining a sorted order: Use balanced trees (e.g., AVL Trees, Red-Black Trees).
- For quick lookup and unique elements: Use hash tables or sets.
- For priority queue operations: Use heaps.

In many cases, **vectors (dynamic arrays) are a good general-purpose** choice due to their simplicity, fast access time, and decent performance for most operations, especially when the overhead of maintaining pointers or balancing trees is not justified.


