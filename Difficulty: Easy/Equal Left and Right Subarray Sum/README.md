<h2><a href="https://www.geeksforgeeks.org/problems/equal-left-and-right-subarray-sum--170647/1?page=1&category=prefix-sum,Kadane&sortBy=difficulty">Equal Left and Right Subarray Sum</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array <strong>arr</strong>. The task is to find the <strong>first index</strong> in the array such that the sum of elements before it is equal to the sum of elements after it.&nbsp;</span><span style="font-size: 18px;">Return -1 if no such point exists.</span></p>
<p><span style="font-size: 18px;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [1,3,5,2,2] 
<strong>Output: </strong>2<strong> 
Explanation: </strong>For second test case at position 2 elements before it (1+3) = elements after it (2+2).<strong> </strong></span>
</pre>
<pre><strong>Input: </strong><span style="font-size: 18px;">arr[] = [1]
<strong>Output: </strong>0<strong>
Explanation: </strong>Since its the only element hence it is the only point.<br></span></pre>
<pre><strong>Input: </strong>arr[] = [5, 4, 3, 2, 1]
<strong>Output: -</strong>1</pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ arr.size() ≤ 10<sup>6<br></sup>0 ≤ arr[i] ≤ 10<sup>6</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Adobe</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>prefix-sum</code>&nbsp;<code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;