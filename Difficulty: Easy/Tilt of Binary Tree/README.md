<h2><a href="https://www.geeksforgeeks.org/problems/tilt-of-binary-tree/1?page=1&category=Tree&status=unsolved&sortBy=difficulty">Tilt of Binary Tree</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given a binary tree, your task is to complete the function <strong>tiltTree()</strong>, that returns the tilt of the whole tree. The tilt of a tree node is defined as the absolute difference between the sum of all left subtree node values and the sum of all right subtree node values. Null nodes are assigned tilt to be zero. Therefore, tilt of the whole tree is defined as the sum of all nodes’ tilt.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> root = [1, 2, 3]
       1
      / \
     2   3
<strong>Output:</strong> 1
<strong>Explanation: </strong>Tilt of node 2 : 0, Tilt of node 3 : 0, Tilt of node 1 : |2-3| = 1, Tilt of tree : 0 + 0 + 1 = 1
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>root = [4, 2, 9, 3, 5, N, 7]
        4 
       / \
      2   9 
     / \   \
    3   5   7 
<strong>Output:</strong> 15 
<strong>Explanation: </strong>Tilt of node 3 : 0 , Tilt of node 5 : 0, Tilt of node 7 : 0, Tilt of node 2 : |3-5| = 2, Tilt of node 9 : |0-7| = 7, Tilt of node 4 : |(3+5+2)-(9+7)| = 6, Tilt of binary tree : 0 + 0 + 0 + 2 + 7 + 6 = 15
</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1&lt;= number of nodes &lt;=10<sup>5</sup><br>0&lt;= node -&gt; data &lt;=10</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;