<h2><a href="https://www.geeksforgeeks.org/problems/ancestor-nodes-in-dag/1">Ancestor Nodes in DAG</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p class="MsoNormal"><span style="font-size: 14pt;">You are given a Directed Acyclic Graph (DAG) with <strong>V</strong> vertices numbered from <strong>0</strong> to <strong>V - 1</strong> and <strong>E</strong> directed edges, represented as a 2D array <strong>edges[][]</strong>, where each element <strong>edges[i] = [u, v]</strong> denotes a directed edge from vertex <strong>u</strong> to vertex <strong>v</strong>.</span></p>
<p class="MsoNormal"><span style="font-size: 14pt;"> </span></p>
<p class="MsoNormal"><span style="font-size: 14pt;">Your task is to return an array<strong> </strong>answer, where <strong>answer[i]</strong> contains all <strong>ancestors</strong> of vertex <strong>i</strong>, sorted in ascending order.</span></p>
<p class="MsoNormal"><span style="font-size: 14pt;"> </span></p>
<p class="MsoNormal"><span style="font-size: 14pt;">A vertex <strong>u</strong> is considered an ancestor of vertex <strong>v</strong> if there exists a directed path from <strong>u</strong> to <strong>v</strong> in the graph.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>V = 5, E = 4, edges[][] = [[0, 4], [1, 2], [4, 1], [4, 3]] </span><br><span style="font-size: 14pt;"><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/913724/Web/Other/blobid0_1761798400.jpg" width="283" height="202"></span><br><span style="font-size: 14pt;"><strong>Output: </strong>[[], [0, 4], [0, 1, 4], [0, 4], [0]]
<strong>Explanation: <br></strong>There is no ancestor of 0.
Ancestors of 1 are 0, 4.
Ancestors of 2 are 0, 1, 4.
Ancestors of 3 are 0, 4.
Ancestors of 4 is 0.
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> V = 4, E = 4, edges[][] = [[0, 1], [0, 2], [1, 2], [2, 3]]</span><br><span style="font-size: 14pt;"><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/913724/Web/Other/blobid0_1761801721.jpg" width="263" height="232"></span><br><span style="font-size: 14pt;"><strong>Output:</strong> [[], [0], [0, 1], [0, 1, 2]]
<strong>Explanation:</strong>
There is no ancestor of 0.
Ancestors of 1 is 0.
Ancestors of 2 are 0, 1.
Ancestors of 3 are 0, 1, 2.</span></pre>
<p class="MsoNormal"><span style="font-size: 14pt;"><strong>Constraints:<br></strong>1&nbsp;<span style="color: #1e2229; font-family: Nunito; background-color: #ffffff;">≤</span> V <span style="color: #1e2229; font-family: Nunito; background-color: #ffffff;">≤ </span>10<sup>3<br></sup>0 <span style="color: #1e2229; font-family: Nunito; background-color: #ffffff;">≤</span> E&nbsp;<span style="color: #1e2229; font-family: Nunito; background-color: #ffffff;">≤ </span>min(V*(V-1)/2, 10<sup>4</sup>)<br>0&nbsp;<span style="background-color: #ffffff; color: #1e2229; font-family: Nunito;">≤</span>&nbsp;edges[i][0], edges[i][1] &lt; V</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Graph</code>&nbsp;<code>DFS</code>&nbsp;<code>topological-sort</code>&nbsp;<code>BFS</code>&nbsp;