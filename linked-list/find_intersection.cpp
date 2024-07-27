// problem : https://leetcode.com/problems/intersection-of-two-linked-lists/description/


brute force : for each node from 1 list ..see if there is same node in other list.....its like 2 for loop ..

using hash map :  store all nodes of first list in hash map... next go 1 by 1 in 2nd list and see if that nod is in hash map

optimal method : 

find no of nodes in each list
find difference in their no of nodes
..move head of longer list to make nodes equal lenthg

then move both list 1 at a time and when both are equal .. u get the intersection node 
