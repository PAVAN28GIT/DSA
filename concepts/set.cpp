#include <iostream>
#include <set>

#include <unordered_set>

int main() {

  
    //  Creates a set.
    std::set<int> mySet;                                   // sorted 

    // Creating an unordered_set
    std::unordered_set<int> myUnorderedSet;               // not sorted ..elements are stored like stack

        myUnorderedSet.insert(2);          // first in will be at bottom 
        myUnorderedSet.insert(4);
        myUnorderedSet.insert(1);       // stored as {1,4,2}
     

  

    // insert(): Inserts an element into the set.
    mySet.insert(5);

    // erase(): Removes an element from the set.
    mySet.erase(5);

    // begin(): Returns an iterator to the beginning of the set.
    auto it = mySet.begin();

    // end(): Returns an iterator to the end of the set.
    auto end = mySet.end();

    // find(): Finds an element in the set.
    auto findIt = mySet.find(5);

    // size(): Returns the number of elements in the set.
    int size = mySet.size();

    // empty(): Checks if the set is empty.
    bool isEmpty = mySet.empty();

    // clear(): Removes all elements from the set.
    mySet.clear();

    // count(): Counts the occurrences of a specific element.
    int count = mySet.count(5);

    // lower_bound(): Returns an iterator to the first element not less (i.e., greater than or equal to)than the given value.
    auto lower = mySet.lower_bound(5);

    // upper_bound(): Returns an iterator to the first element greater than (not equal to )the given value.
    auto upper = mySet.upper_bound(5);

    // swap(): Exchanges the contents of two sets.
    std::set<int> otherSet;
    mySet.swap(otherSet);

    // emplace(): Constructs element in-place.
    mySet.emplace(5);

    // emplace_hint(): Constructs element in-place with a hint.
    auto hintIt = mySet.emplace_hint(mySet.begin(), 5);

    // equal_range(): Returns range of elements matching a specific key.
    auto range = mySet.equal_range(5);

   // Access elements using iterators
    for (auto it = mySet.begin(); it != mySet.end(); ++it) {
        std::cout << *it << " "; // Dereference the iterator to access the element
    }

    return 0;
}
