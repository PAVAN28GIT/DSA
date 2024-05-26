// ---------------- TO FIND INDEX OF ALL DUPLICATES IN ARRAY --------USING MAPS----------------

unordered_map<int, vector<int>> indexMap; // Map to store indices of elements

    // Iterate through the array and store the indices of each element
    for (int i = 0; i < nums.size(); ++i) {
        indexMap[nums[i]].push_back(i);
    }



// ----------------  convert a string to an integer using the std::stoi function. --------------

string str ='123'
int num = stoi(str);

// ----------------  MONOTONIC STACK ------------------------


monotonic stack :  here u will maintain the order for elements, either ascending or descending..
        in increasing monotonic stack .... 
        u keep pushing numbers if its greater than top element... 
        when u encounter element thats smaller than top element..
        u pop untill the top element is smaller than new element that u want to push, and perform operations on all those poped elements...depending on question...



