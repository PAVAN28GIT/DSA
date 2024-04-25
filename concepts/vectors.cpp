#include <vectors>
using namespace std;

vector<int> vec = {1, 2, 3, 4, 5};

vec.push_back();     // append to end
vec.pop_back();      // Removes the last element from the vector.
vec.insert(vec.begin() + 1, 15);        // insert 15 at position 1
vec.erase(vec.begin() + 1);      // erase element at position 1
vec.empty(); // true or false

// ACESS

int x = vec[0];          // operator[]
int y = vec.at(1);       // at
int front = vec.front(); // front
int back = vec.back();   // back

// MODIFIERS

vec.clear();             // clear
vec.resize(5);           // resize
vector<int> anotherVec = {1, 2, 3};
vec.swap(anotherVec);   // swap
vec.assign(3, 100);      // replace 3rd index with 100 or assign 3rd index with 100


//algorithms

sort(vec.begin(), vec.end());             // sort
auto it = find(vec.begin(), vec.end(), 20); // find
int count = count(vec.begin(), vec.end(), 10); // count occurance of  10
auto minIt = min_element(vec.begin(), vec.end()); // min_element
auto maxIt = max_element(vec.begin(), vec.end()); // max_element

// Search for the value in the vector
auto it = std::find(vec.begin(), vec.end(), valueToFind);

// Check if any element in the vector is equal to valueToFind
bool found = std::any_of(vec.begin(), vec.end(), [valueToFind](int x) {
    return x == valueToFind;
});

//remove element by value
int valueToRemove = 3;
vec.erase(std::remove(vec.begin(), vec.end(), valueToRemove), vec.end());
remove(vec.begin(), vec.end(), valueToRemove)  // will nmove valueToRemove to the end and return its iterator

