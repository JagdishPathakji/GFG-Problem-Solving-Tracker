<h2><a href="https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1">Undirected Graph Cycle</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;"><span style="font-size: 18.6667px;">Given an&nbsp;</span><strong style="font-size: 18.6667px;">undirected graph</strong><span style="font-size: 18.6667px;">&nbsp;</span><span style="font-size: 14pt;">represented by a 2-d&nbsp;</span><span style="font-size: 18.6667px;">adjacency list&nbsp;</span><strong style="font-size: 18.6667px;"><code>adj[][]</code></strong><span style="font-size: 18.6667px;">, where each&nbsp;</span><strong><code style="font-size: 18.6667px;">adj[i]</code></strong><span style="font-size: 18.6667px;">&nbsp;represents the list of vertices connected to vertex&nbsp;</span><strong><code style="font-size: 18.6667px;">i</code></strong>, check whether the graph contains any <strong>cycle or not</strong>.</span></p>
<p><strong><span style="font-size: 18px;">NOTE: </span></strong><span style="font-size: 18px;"><span style="font-size: 18px;">Since the graph is undirected, an edge between vertices i and j is present in both adj[i] and adj[j].</span><img style="font-size: 18px; font-weight: bold;" src="C:\Users\Mukul kumar\Desktop\GFG_PIC.JPG" alt=""></span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>adj[][] = [[1], [0,2,4], [1,3], [2,4], [1,3]]
<strong>Output: </strong>true
<strong>Explanation:</strong> 
</span><img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/700219/Web/Other/891791f9-1abb-45b1-80f2-7af46d73dcd2_1685086491.png" alt="">
<span style="font-size: 18px;">1-&gt;2-&gt;3-&gt;4-&gt;1 is a cycle.</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>adj[][] = [[], [2], [1,3], [2]]</span>
<strong><span style="font-size: 18px;">Output: </span></strong><span style="font-size: 18px;">false</span><span style="font-size: 18px;">
<strong>Explanation: 
</strong></span><img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/700219/Web/Other/d8cbd97e-406e-4f50-a38c-6a58747df876_1685086491.png" alt="">
<span style="font-size: 18px;">No cycle in the graph.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ adj.size() ≤ 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Samsung</code>&nbsp;<code>MakeMyTrip</code>&nbsp;<code>Oracle</code>&nbsp;<code>Adobe</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>DFS</code>&nbsp;<code>Graph</code>&nbsp;<code>union-find</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;