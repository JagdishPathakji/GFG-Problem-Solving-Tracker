<h2><a href="https://www.geeksforgeeks.org/problems/mean-of-range-in-array2123/1?page=1&category=prefix-sum,Kadane&sortBy=difficulty">Mean of range in array</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array <strong>arr</strong>&nbsp;and <strong>q</strong> queries. Write a program to find the floor value of the mean in the range <strong>l</strong> to <strong>r </strong>for each query in a new line.<br>Queries are given by an array of queries[] of size 2*q. Here queries[2*i] denote l and queries[2*i+1] denote r for i-th query.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input :</strong> arr[] = [1, 2, 3, 4, 5] and q[] = [0, 2, 1, 3, 0, 4]
<strong>Output :</strong> [2, 3, 3]
<strong>Explanation: </strong>Here we can see that the array of integers is [1, 2, 3, 4, 5]. <strong>Query 1:</strong> L = 0 and R = 2 Sum = 6 Integer Count = 3 So, Mean is 2
</span></pre>
<pre><span style="font-size: 18px;"><strong>Input :</strong> arr[] = [6, 7, 8, 10] and q[] = [0, 3, 1, 2]
<strong>Output :</strong> [7, 7]
<strong>Explanation: </strong>Element count is 3 and sum of element from 0 to 3 are 21. So mean is 7.</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(q + n).<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(n).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong>&nbsp;<br>1 ≤ arr.size() ≤ 10<sup>6</sup><br>1 ≤ arr[i] ≤ 10<sup>3</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>prefix-sum</code>&nbsp;<code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;