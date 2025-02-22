<h2><a href="https://www.geeksforgeeks.org/problems/extreme-nodes-in-alternate-order/1?page=8&category=Tree&sortBy=submissions">Extreme nodes in alternate order</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">You are given a binary tree. You have to return alternating extremes of each level starting from the right extreme. It means you have to return the rightmost node of 1st level then the leftmost of the second level then the rightmost and so on.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:
&nbsp;      </strong>1
&nbsp;    /  \
&nbsp;  2    3<strong>
Output: </strong>1 2
<strong>Explanation: </strong>In level one [1] rightmost is 1 and in level 2 [2, 3] lefmost is 2. <br></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input:</strong><br>      2<br>     /  \<br>   1    3<br>       /<br>     4<br><strong>Output:</strong> [2, 1, 4]<br><strong>Explanation: </strong>In level one [2] rightmost is 2, In level 2 [1, 3] lefmost is 1 and in level 3 [4] rightmost is 4. </span></pre>
<p><span style="font-size: 14pt;"><strong>Expected Time Complexity: </strong>O(n).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(n).<br><br><strong>Constraints:</strong><br>1 ≤ number of nodes ≤ 10<sup>5</sup><br>1 ≤ node-&gt;data ≤ 5*10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;