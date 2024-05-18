#include <algorithm>
#include <cctype>

std::transform(str.begin(), str.end(), str.begin(), ::toupper); // to upper case
std::transform(str.begin(), str.end(), str.begin(), ::tolower); // to lower case

char upper = 'A';
char lower = std::tolower(upper);

std::string str = "Hello, !";
str.insert(7, "world"); // "Hello, world!"
str.replace(7, 5, "everyone");
