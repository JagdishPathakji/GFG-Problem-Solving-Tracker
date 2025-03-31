<h2><a href="https://www.geeksforgeeks.org/problems/levelorder-traversal-of-a-bst/1?page=1&category=Binary%20Search%20Tree&sortBy=difficulty">Levelorder traversal of a BST</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><em><span style="font-size:18px">Levelorder traversal means traversing through the tree level by level, from left to right.</span></em><br>
<span style="font-size:18px">Given a BST, find its level-order traversal.&nbsp;</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>      5
&nbsp;   /   \
&nbsp;  2     7
&nbsp;  \      \
&nbsp;   3      8
<strong>Output: </strong>5 2 7 3 8</span>
<strong><span style="font-size:18px">Explanation: </span></strong><span style="font-size:18px">Move top to down and then left to right and keep printing elements.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>&nbsp;  &nbsp;30
 &nbsp; /
&nbsp;10
 &nbsp; \ 
&nbsp;  20
<strong>Output: </strong>30 10 20
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong></span><br>
<span style="font-size:18px">You don't need to read input or print anything. Complete the function&nbsp;</span><span style="font-size:18px"><strong>levelOrder()</strong></span><span style="font-size:18px">&nbsp;that takes the root of the BST as input parameter and returns a list of integers containing the level-order traversal of the BST.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N), where N = number of nodes in BST.<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= Number of nodes &lt;= 10<sup>5</sup><br>
1 &lt;= Value of a node<sub>&nbsp;</sub>&lt;= 10<sup>5</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search Tree</code>&nbsp;<code>Data Structures</code>&nbsp;