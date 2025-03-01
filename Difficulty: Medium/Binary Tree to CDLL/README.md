<h2><a href="https://www.geeksforgeeks.org/problems/binary-tree-to-cdll/1">Binary Tree to CDLL</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 12pt;">Given a binary tree (BT), the task is to convert this to a Circular Doubly Linked List (CDLL) in-place. The<strong> </strong>left and right pointers<strong> </strong>in nodes will be used as previous and next pointers<strong> </strong>respectively in CDLL. The order of nodes in CDLL<strong> </strong>must be the same as <strong>Inorder </strong>of the given <strong>Binary Tree</strong>. The first node of <strong>Inorder traversal </strong>(leftmost node in<strong> </strong>BT) must be the<strong> </strong>head node of the CDLL.</span></p>
<p><span style="font-size: 12pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 12pt;"><strong>Input:
</strong>&nbsp; &nbsp; &nbsp; 1
 &nbsp; &nbsp;/&nbsp; &nbsp;\
 &nbsp; 3&nbsp; &nbsp; &nbsp;2
<strong>Output:
</strong>3 1 2&nbsp;
2 1 3<br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700548/Web/Other/blobid0_1723058025.png" width="360" height="81"><strong>
Explanation: </strong>After converting tree to CDLL when CDLL is is traversed from head to tail and then tail to head, elements are displayed as in the output.
</span></pre>
<pre><span style="font-size: 12pt;"><strong>Input:
</strong>&nbsp; &nbsp;&nbsp; 10
 &nbsp; /&nbsp; &nbsp; \
 &nbsp;20&nbsp; &nbsp; 30
 /&nbsp; \
40 &nbsp;60
<strong>Output:
</strong>40 20 60 10 30&nbsp;
30 10 60 20 40<br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700548/Web/Other/blobid1_1723058039.png" width="364" height="82"><strong>
Explanation: </strong>After converting tree to CDLL, when CDLL is is traversed from head totail and then tail to head, elements are displayed as in the output.</span></pre>
<p><span style="font-size: 12pt;"><strong style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">Constraints:<br></strong><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">1 &lt;= number of nodes &lt;= 10</span><sup style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">3<br></sup><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">0 &lt;= data of a node &lt;= 10</span><sup style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">4</sup></span></p>
<p><span style="font-size: 12pt;"><strong>Expected Time Complexity: </strong>O(n)<br><strong style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">Expected Space C</strong></span><strong style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif; font-size: 16px;">omplexity</strong><strong style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">: </strong><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">O(h) , where h = height of tree</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>SAP Labs</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Linked List</code>&nbsp;<code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;