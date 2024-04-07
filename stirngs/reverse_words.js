/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    s = s.trim();  //removes whitespace characters from both ends of a string. Whitespace characters include spaces, tabs, and newline characters.
    s = s.replace(/\s+/g,' '); 
    var words = s.split(" ").reverse().join(" ");
    return words
};


// info :
// 1. / : is used at end and beggining of pattern
// 2. \s :  metacharacter representing any whitespace character, including spaces, tabs, and newline characters.
// 3. + :  matches one or more occurrences of the preceding element (\s in this case). It means "match one or more consecutive whitespace characters".
// 4. g :  indicates that the regular expression should be applied globally to the entire string, rather than stopping after the first match.
