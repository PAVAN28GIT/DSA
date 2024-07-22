// binary tree : each node has max 2 children

// types :

// 1. full bt : each node has either 0 or 2
// 2. complete bt : all levels are completely filled except for the last level.. and in the last level all nodes shld be towards left only..
// 3. perfect bt : all leaf nodes are at same level
// 4. balanced bt : height of tree at max log2 (N) , n is no of nodes. ------> ( height(left) - height(right) <=1
// 5. degenerate bt : stright tree like linked list


//moris traversal remeber 2 cases

// if(curr_root->left == NULL) go to right
// else go to the rightmost node of left subtree 
    // if right of that node is null ..... create a thread to   current root
    // else (means already node has thread) so remove that thread and move current_root to right


// some approaches to remember :

// flatten .. using queue and changing tree
// finding LCE...... return root and NULL 
// mirror problem .... returns 
// subtree .. checing if trees are equal, return statements
// count good nodes...maintaing array .. and popping as needed



  
