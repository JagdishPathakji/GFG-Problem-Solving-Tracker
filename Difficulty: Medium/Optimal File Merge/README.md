<h2><a href="https://www.geeksforgeeks.org/problems/optimal-file-merge/1?page=2&category=Heap&sortBy=difficulty">Optimal File Merge</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given n number of sorted files, the task is to find the minimum computations done to reach Optimal Merge Pattern.</span></p>
<p><span style="font-size: 18px;">When two or more sorted files are to be merged all together to form a single file, the minimum computations done to reach this file are known as&nbsp;<strong>Optimal Merge Pattern</strong>.</span></p>
<p><span style="font-size: 18px;">If we have two files of sizes m and n, the total computation time will be m+n.&nbsp;</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> 2 3 4</span>
<span style="font-size: 18px;"><strong>Output:</strong> 14</span>
<span style="font-size: 18px;"><strong>Explanation:</strong> 
There are different ways to combine
these files.</span><span style="font-size: 18px;">Optimal methode is given below:</span>
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20190314125251/Optimal-File-Merge-Patterns-method-1-215x300.jpg" alt="Lightbox"></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> 2 3 4 5 6 7</span>
<span style="font-size: 18px;"><strong>Output:</strong> 68</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>minComputation()&nbsp;</strong>which takes the files array as parameter and return minimum computation to merge all the files.</span></p>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(NlogN)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>
<p><br><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= N &lt;= 10<sup>5</sup><br>1 &lt;= files<sub>i</sub>&nbsp;&lt;= 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Heap</code>&nbsp;<code>Data Structures</code>&nbsp;