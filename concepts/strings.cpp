#include <iostream>
#include <string>
#include <algorithm>  // For STL algorithms like reverse, transform, remove, sort, etc.
#include <cctype>     // For std::toupper and std::tolower

using namespace std;

int main() {
    string str = "Hello, World!";
    string str2 = "C++ Programming";

    // 1. find   
    if (str.find("World"); != string::npos) {
        cout << "Found 'World' at index: " ;
    }

    // 2. replace
    // Replaces 5 char from 3rd index with "Universe".
    str.replace(3, 5, "Universe");


    // 3. append
    // Appends the string " Welcome!" to the end of str.
    str.append(" Welcome!");


    // 4. erase
    // Erases 8 characters starting from index 13 ("Universe").
    str.erase(13, 8);


    // 5. reverse
    // Reverses the string using the STL algorithm reverse.
    reverse(str.begin(), str.end());


    // 6. swap
    // Swaps the contents of str and str2.
    swap(str, str2);
  

    // 7. substring
    // Extracts a substring starting at index 4 with length 10.
    string sub = str.substr(4, 10);
  

    // 8. insert
    // Inserts the string "!!!" at index 4.
    str.insert(4, "!!!");
  

    // 9. clear
    // Clears the contents of str.
    str.clear();

  
    // 13. find_first_of
    // Finds the first occurrence of any character from "aeiou" in str2.
    size_t pos = str2.find_first_of("aeiou");

    // 14. find_last_of
    // Finds the last occurrence of any character from "aeiou" in str2.
    pos = str2.find_last_of("aeiou");


    // 15. transform (to uppercase)    
    transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
  

    // 16. transform (to lowercase)
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
  
    // 17. count
    // Counts the occurrences of the character 'o' in str2 using the STL algorithm count.
    int count = std::count(str2.begin(), str2.end(), 'o');


    // 18. remove
    // Removes spaces from str2 
    auto it = remove(str2.begin(), str2.end(), ' ');
    str2.erase(it , str2.end());

    // 19. unique
    // Removes consecutive duplicate characters 

    auto it = unique(str3.begin(), str3.end());
    str3.erase(it, str3.end());


   
    sort(str4.begin(), str4.end());
   

    // 21. to_string
   
    int number = 123;
    string numberStr = to_string(number);
  
    // 22. stoi
   
    string strNumber = "456";
    int num = stoi(strNumber);
   
    return 0;
}
