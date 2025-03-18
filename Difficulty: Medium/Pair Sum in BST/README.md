<h2><a href="https://www.geeksforgeeks.org/problems/pair-sum-in-bst/1?page=3&category=Tree&sortBy=difficulty">Pair Sum in BST</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a&nbsp;BST and a number<strong> X</strong>. The task is to check if any pair exists in BST or not&nbsp;whose sum is equal to X.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>      8
&nbsp;   /   \
&nbsp;  3     9
&nbsp; / \
&nbsp;1   5
X = 4
<strong>Output: </strong>1<strong>
Explanation: </strong>For the given input, there
exist a pair whose sum is, i.e, (3,1).</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>      0
&nbsp;      \
&nbsp;       1
&nbsp;        \ 
&nbsp;         3
&nbsp;       /  \
&nbsp;      2    7
&nbsp;            \
&nbsp;             8
X = 6
<strong>Output: </strong>0<strong>
Explanation: </strong>For the given input , there
exists no such pair whose sum is 6.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
&nbsp;Just write your code for the boolean function <strong>findPair</strong>() to check if a pair with given sum X exists in BST or not. The function returns <strong>true </strong>or <strong>false</strong>.&nbsp;The printing is done by the driver's code.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(Number of Nodes in the BST)<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(Number of Nodes in the BST).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= Number of nodes &lt;= 10<sup>5</sup><br>
1 &lt;= Value of the nodes&nbsp;&lt;= 10<sup>5</sup></span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>VMWare</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search Tree</code>&nbsp;<code>Data Structures</code>&nbsp;