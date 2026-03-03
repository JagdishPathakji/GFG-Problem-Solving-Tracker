<h2><a href="https://www.geeksforgeeks.org/problems/maximum-distinct-elements-after-removing-k-elements5906/1?page=1&category=Heap&sortBy=difficulty">Maximum distinct elements after removing K elements</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array containing integers. The task is to find the maximum number of distinct elements after removing K elements from the array. </span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input :</strong> arr[] = [5, 7, 5, 5, 1, 2, 2], k = 3
<strong>Output :</strong> 4
<strong>Explanation: </strong>Remove 2 occurrences of element <strong>5</strong> and 1 occurrence of element <strong>2</strong>.
</span></pre>
<pre><span style="font-size: 18px;"><strong>Input :</strong> arr[] = [1, 2, 3, 4, 5, 6, 7], k = 5
<strong>Output :</strong> 2
</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n + m*logm +&nbsp; k*logm)<br><strong>Expected Auxiliary Space:</strong> O(m).<br>(</span><strong style="font-size: 18px;">m</strong><span style="font-size: 18px;"> is the number of distinct elements in the given array.</span><span style="font-size: 18px;">)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ k ≤ arr.size() ≤ 10<sup>4</sup><br></span><span style="font-size: 18px;">1 ≤ arr[i] ≤ 10</span><sup>6</sup></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Hash</code>&nbsp;<code>Heap</code>&nbsp;<code>Data Structures</code>&nbsp;