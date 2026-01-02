<h2><a href="https://www.geeksforgeeks.org/problems/implement-k-stacks-in-an-array/1">Implement k stacks in an array</a></h2><h3>Difficulty Level : Difficulty: Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18.6667px;"><span style="font-size: 18.6667px;">You are given two integers <strong>n</strong> and<strong> k.&nbsp;</strong></span></span><span style="font-size: 18.6667px;">Your task is to implement a class </span><strong style="font-size: 18.6667px;">kStacks</strong><span style="font-size: 18.6667px;"> that uses a single array of size n to simulate</span><strong style="font-size: 18.6667px;"> </strong><span style="font-size: 18.6667px;">k independent stacks.</span><br><span style="font-size: 18.6667px;">The class should support the following operations:</span></p>
<ul>
<li style="text-align: left;"><span style="font-size: 18.6667px;"><strong>push(x, i) – </strong>Push element x into the i-th stack.</span></li>
<li style="text-align: left;"><span style="font-size: 18.6667px;"><strong>pop(i) – </strong>Pop the top element from the i-th stack and return it. Return -1 if it is empty.</span></li>
</ul>
<p><span style="font-size: 14pt;"><span style="font-size: 14pt;">There will be a sequence of <strong>q</strong> queries </span><strong>queries</strong><strong style="font-size: 14pt;">[][]</strong><span style="font-size: 14pt;">. The queries are represented in numeric form:</span></span></p>
<ul>
<li><span style="font-size: 14pt;"><strong>1 x i</strong><strong>:</strong> Call push(x, i)</span></li>
<li><span style="font-size: 14pt;"><strong>2 i</strong><strong style="font-size: 14pt;">:</strong><span style="font-size: 14pt;">&nbsp;&nbsp;</span><span style="font-size: 14pt;"><span style="font-family: monospace;">Call</span> pop(i)</span></span></li>
</ul>
<p><span style="font-family: monospace;"><span style="font-size: 18.6667px;">The driver code will process the queries, call the corresponding functions, and print the outputs of pop(i) operations.</span><br></span><span style="font-family: monospace;"><span style="font-size: 18.6667px;">You only need to implement the above two functions.</span></span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> n = 4, k = 2, q = 5,<br></span><span style="font-size: 14pt;"><span style="font-size: 14pt;">queries[][] = [[1, 5, 0], [1, 3, 0], [2, 0], [1, 1, 1], [2, 1]]</span><strong style="font-size: 14pt;">
Output: </strong><span style="font-size: 14pt;">[3, 1]</span><strong style="font-size: 14pt;">
Explanation: </strong><span style="font-size: 18.6667px;">Queries on stack are as follows:</span><span style="font-size: 14pt;">
push(5, 0): push 5 to 0-th stack
push(3, 0): </span><span style="font-size: 18.6667px;">push 3 to 0-th stack</span><span style="font-size: 14pt;">
pop(0): pop the top element 3 from the 0-th stack
</span><span style="font-size: 18.6667px;">push(1, 1): push 1 to 1-th stack</span>
<span style="font-size: 18.6667px;">pop(1): pop the top element 1 from the 1-th stack</span></span></pre>
<pre><span style="font-size: 14pt;"><strong style="font-size: 14pt;">Input:</strong><span style="font-size: 14pt;"> n = 9, k = 3, q = 7,
queries[][] = [[1, 2, 0], [1, 5, 0], [1, 4, 1], [2, 1], [1, 3, 2], [2, 0], [2, 0]]</span><strong style="font-size: 14pt;">
Output: </strong><span style="font-size: 14pt;">[4, 5, 2]</span><strong style="font-size: 14pt;">
Explanation: </strong><span style="font-size: 14pt;">Queries on stack are as follows:</span><strong style="font-size: 14pt;"><br></strong><span style="font-size: 18.6667px;">push(2, 0): push 2 to 0-th stack
push(5, 0): push 5 to 0-th stack<br>push(4, 1): push 4 to 1-th stack
pop(1): pop the top element 4 from the 1-th stack
push(3, 2): push 3 to 2-th stack
pop(0): pop the top element 5 from the 0-th stack<br>pop(0): pop the top element 2 from the 0-th stack</span></span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ q ≤ 10<sup>5<br></sup>1 ≤ k ≤ n ≤ 10<sup>5</sup><br>0 ≤ values on the stacks ≤ 10<sup>9</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Stack</code>&nbsp;<code>Data Structures</code>&nbsp;