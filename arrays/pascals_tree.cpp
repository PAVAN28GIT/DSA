class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows);
        int n = numRows;
        for(int i=0 ; i<n ; i++){
                result[i].resize(i+1);
            for(int j = 0 ; j<i+1 ; j++){
                if (j==0 || j == i){
                    result[i][j] = 1;
                }
                else{
                    result[i][j] = result[i-1][j-1] + result[i-1][j];
                }
            }
        }
        return result;
    }
};

// info :

//vector<vector<int>> result(5); ----> you're creating a vector with 5 empty vectors inside.
// when ever u are trying to access arr[0] or arr[n]....before doing this u have to initilize size of vector also ...like vector<int> arr(4);

//mistake
 //here u create empty vectors within result..but then u try to do result[i][j] = 0...
 //before this u shld initialise size for inside empty vecotr,,,so using result.resize()
