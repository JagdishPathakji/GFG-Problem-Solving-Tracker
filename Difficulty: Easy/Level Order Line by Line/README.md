<h2><a href="https://www.geeksforgeeks.org/problems/level-order-traversal-line-by-line/1?page=3&category=Tree&sortBy=submissions">Level Order Line by Line</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a <strong>Binary Tree</strong>, your task is to find its level order traversal.<br><strong>Note:&nbsp;</strong>The driver code prints the levels '$' separated.<br></span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> root = [1, 4, N, 4, 2]
&nbsp; &nbsp; &nbsp; &nbsp;   </span><span style="font-size: 20px;">1
 &nbsp; &nbsp; &nbsp; &nbsp;/
 &nbsp; &nbsp;&nbsp; &nbsp;4
 &nbsp; &nbsp; /&nbsp; &nbsp;\
 &nbsp; &nbsp;4&nbsp; &nbsp;  2</span><span style="font-size: 18px;">
<strong>Output:</strong>1 $ 4 $ 4 2 $</span>
<span style="font-size: 14pt;"><strong>Explanation:  </strong>At first level 1 present then at second level 4 present then at third level 4 2 present.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong> root = [10, 20, 30, 40, 60]
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 10
 &nbsp;&nbsp;&nbsp;&nbsp;     /&nbsp;&nbsp;&nbsp; \
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;20&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;30
 &nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\
 &nbsp;&nbsp; 40&nbsp;&nbsp;&nbsp;&nbsp; 60
<strong>Output: </strong>10 $ 20 30 $ 40 60 $<br></span><strong style="font-size: 14pt; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">Explanation: </strong><span style="font-size: 14pt; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">At first level 10 present then at second level 20 30 present then at third level 40 60 present.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong> root = [10. 20, 30, 40, 70]
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 10
 &nbsp;&nbsp;&nbsp;&nbsp;     /&nbsp;&nbsp;&nbsp; \
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;20&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;30
 &nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\
 &nbsp;&nbsp; 40&nbsp;&nbsp;&nbsp;&nbsp; 70
<strong>Output: </strong>10 $ 20 30 $ 40 70 $<br></span><strong style="font-size: 14pt; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">Explanation: </strong><span style="font-size: 14pt; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">At first level 10 present then at second level 20 30 present then at third level 40 70 present.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= number of nodes &lt;= 1000<br>0 &lt;= node-&gt;data &lt;= 100</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Morgan Stanley</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Snapdeal</code>&nbsp;<code>Hike</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;