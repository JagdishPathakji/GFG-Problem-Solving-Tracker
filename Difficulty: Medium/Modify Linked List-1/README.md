<h2><a href="https://www.geeksforgeeks.org/problems/modify-linked-list-1-0546/0">Modify Linked List-1</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 12pt;">Given a singly linked list. Modify the Linked list as follows:</span></p>
<ol>
<li><span style="font-size: 12pt;">Modify the value of the first half nodes such that 1st node's new value is equal to the value of the last node minus the first node's current value, 2nd node's new value is equal to the second last nodes value minus 2nd nodes current value, likewise for first half nodes.</span></li>
<li><span style="font-size: 12pt;">Replace the second half of nodes with the initial values of the first half of nodes (values before modifying the nodes).</span></li>
<li><span style="font-size: 12pt;">If size of it is odd then the value of the middle node remains unchanged.<br></span></li>
</ol>
<p><strong><span style="font-size: 12pt;">Examples:</span></strong></p>
<pre><span style="font-size: 12pt;"><strong>Input: </strong>Linked list: 10 -&gt; 4 -&gt; 5 -&gt; 3 -&gt; 6
<strong>Output: </strong>-4 -&gt; -1 -&gt; 5 -&gt; 4 -&gt; 10<br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/715242/Web/Other/blobid0_1723399856.png" width="400" height="130"><br><strong>Explanation: </strong>For first half nodes modified list will be: -4 -&gt; -1 -&gt; 5 -&gt; 3 -&gt; 6
For second half nodes modified list will be: -4 -&gt; -1 -&gt; 5 -&gt; 4 -&gt; 10
</span></pre>
<pre><span style="font-size: 12pt;"><strong>Input: </strong>Linked list: 2 -&gt; 9 -&gt; 8 -&gt; 12 -&gt; 7 -&gt; 10
<strong>Output: </strong>8 -&gt; -2 -&gt; 4 -&gt; 8 -&gt; 9 -&gt; 2<br><strong>Explanation: </strong>After modifying the linked list as required, we have a new linked list containing the elements as 8 -&gt; -2 -&gt; 4 -&gt; 8 -&gt; 9 -&gt; 2.</span></pre>
<p><span style="font-size: 12pt;"><strong>Constraints:</strong><br>1 &lt;= size of linked list &lt;= 10<sup>6</sup></span><br><span style="font-size: 12pt;">-10<sup>5 </sup>&lt;= data of nodes &lt;= 10<sup>6</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Linked List</code>&nbsp;<code>Data Structures</code>&nbsp;