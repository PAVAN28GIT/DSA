#include<unordered_map>
#include <iostream>
#include <map>

int main() {
    // Constructor: Creates a map.
    map<int, string> myMap;

    //initialize multiple values 
    map<int, vector<int>>

    //UNORDERED MAP
    unordered_map<int,int> unmap;
    

    // insert(): Inserts a key-value pair into the map.
    myMap.insert({1, "apple"});

    // erase(): Removes an element from the map based on the key.
    myMap.erase(1);

    // begin(): Returns an iterator to the beginning of the map.
    auto it = myMap.begin();

    // end(): Returns an iterator to the end of the map.
    auto end = myMap.end();

    // find(): Finds an element in the map based on the key.
    auto findIt = myMap.find(1);

    // at(): Accesses the element with the specified key, throwing an exception if the key does not exist.
    std::string value = myMap.at(1);

    // operator[]: Accesses or inserts an element with the specified key.
    myMap[1] = "apple";

    // size(): Returns the number of elements in the map.
    int size = myMap.size();

    // empty(): Checks if the map is empty.
    bool isEmpty = myMap.empty();

    // clear(): Removes all elements from the map.
    myMap.clear();

    // count(): Counts the occurrences of a specific key in the map.
    int count = myMap.count(1);

    // If the key is present in the map, count() will return 1.
    // If the key is not present in the map, count() will return 0.


    // lower_bound(): Returns an iterator to the first element not less than the given key.
    auto lower = myMap.lower_bound(1);

    // upper_bound(): Returns an iterator to the first element greater than the given key.
    auto upper = myMap.upper_bound(1);

    // swap(): Exchanges the contents of two maps.
    std::map<int, std::string> otherMap;
    myMap.swap(otherMap);

    // emplace(): Constructs an element in-place in the map.
    myMap.emplace(1, "apple");

    // emplace_hint(): Constructs an element in-place in the map with a hint.
    auto hintIt = myMap.emplace_hint(myMap.begin(), 1, "apple");

    // equal_range(): Returns a range of elements matching a specific key.
    auto range = myMap.equal_range(1);

        // Iterate over map
    for (auto pair : myMap) {
        cout << pair.first << ": " << pair.second << endl;
    }





    // ---------------------- SORTING BASED ON VALUE -----------------



vector<pair<int,int>> vec(my_map.begin(),my_map.end();                             //copy to vector
sort(result.begin(), result.end(), [](const auto &a, const auto &b) {              //sort base on value 
    return a.second > b.second;
});
for(auto pair:vec){
    new_map.emplace(pair);                                                         // put sorted pairs in new map
}
    

   // -------------------- FIND KEY USING VALUE ---------------------
    for(auto pair: map){
        if (pair.second == key){
            return pair.first;
        }
    }

    return 0;
}
