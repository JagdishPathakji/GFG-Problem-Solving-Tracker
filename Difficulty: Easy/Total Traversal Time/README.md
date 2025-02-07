<h2><a href="https://www.geeksforgeeks.org/problems/total-traversal-time/0">Total Traversal Time</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given two arrays arr[ ] and penalty[ ], each of size n.<br>All elements in arr[ ] are in the range of 1 to n. You have to traverse arr[ ] from start to end while following the given conditions.</span></p>
<ol>
<li><span style="font-size: 18px;">If element has never occured before,&nbsp;it takes 1 second to move a step ahead.</span></li>
<li><span style="font-size: 18px;">If element has occured before, it will take penalty[arr[i]] seconds to move a step. Here i is the index of current element with 1-based indexing.</span></li>
</ol>
<p><span style="font-size: 18px;">Find the total time taken to traverse through the array.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
n = 4
arr[ ] = {1, 2, 3, 3}
penalty[ ] = {1, 2, 3, 4}
<strong>Output: </strong>5
<strong>Explanation:
</strong></span><img style="height: 181px; width: 400px;" src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/714335/Web/Other/61efa792-2350-42a3-bedb-a0afd2e8399d_1685088030.jpg">

<span style="font-size: 18px;">For i = 1, traversal time = 0 second since this is the start point.  
For i = 2, traversal time = 1 second 
For i = 3, traversal time = 1 second 
For i = 4, traversal time = penalty[arr[4]]  = penalty[3] = 3
Total = 0+1+1+3 = 5 </span></pre>
<p><span style="font-size: 18px;"><span style="font-family: Arial;"><strong>Example 2:</strong></span></span></p>
<pre><span style="font-size: 18px;"><span style="font-family: Arial;"><strong>Input:</strong>
n = 8
arr = {6, 6, 1, 8, 1, 1, 3, 1}
time ={8, 4, 1, 5, 2, 8, 9, 3}<strong>
Output:</strong>
35<strong>
Explanation:
</strong></span></span><img style="height: 159px; width: 450px;" src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/714335/Web/Other/0b7f2587-3fca-4819-b729-acf6c361e4c2_1685088031.jpg">
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function totalTime() which takes three input parameters n, arr[ ], penalty[ ] and returns the total time taken to traverse through the array.&nbsp;<br><br><strong>Expected Time Complexity:</strong> O(n)<br><strong>Expected Auxiliary Space:</strong> O(n)<br><br><strong>Constraints:</strong><br>1 &lt;= n &lt;= 10^5<br>1 &lt;= arr[i] &lt;= n<br>1 &lt;= time[i] &lt;= 10^5</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Hash</code>&nbsp;<code>Data Structures</code>&nbsp;