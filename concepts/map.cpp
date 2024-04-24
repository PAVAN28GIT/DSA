#include<map>

// initialize
map<int,string> my_map;

//initialize multiple values 
map<int, vector<int>>

int n = my_map.size();

// Insert elements
myMap[1] = "One";
myMap[2] = "Two";
myMap[3] = "Three";

bool key_Exist = my_map.count(2) ;

// Iterate over map
for (auto pair : myMap) {
    cout << pair.first << ": " << pair.second << endl;
}

cout<< my_map[1] <<endl ; // access value using key


// sorting

//copy to vector
vector<pair<int,int>> vec(my_map.begin(),my_map.end();

//sort base on value
sort(result.begin(), result.end(), [](const auto &a, const auto &b) {
    return a.second > b.second;
});


// sort based on key
sort(vec.begin(),vec.end());
  

int findkey(map<int,int> &map,int key){
    for(auto pair: map){
        if (pair.second == key){
            return pair.first;
        }
    }
    return -1;
}

