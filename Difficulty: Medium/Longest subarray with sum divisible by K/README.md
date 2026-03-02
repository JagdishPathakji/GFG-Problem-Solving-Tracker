<h2><a href="https://www.geeksforgeeks.org/problems/longest-subarray-with-sum-divisible-by-k1259/1?page=1&category=prefix-sum,Kadane&sortBy=difficulty">Longest subarray with sum divisible by K</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given an array <strong>arr[]</strong> and a positive integer <strong>k</strong>, find the length of the <strong>longest </strong>subarray with the sum of the elements <strong>divisible </strong>by <strong>k</strong>.<br><strong>Note:&nbsp;</strong>If there is no subarray with sum divisible by k, then return 0.<br></span></p>
<p><span style="font-size: 14pt;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [2, 7, 6, 1, 4, 5], k = 3
<strong>Output:</strong> 4
<strong>Explanation: </strong>The subarray [7, 6, 1, 4] has sum = 18, which is divisible by 3.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [-2, 2, -5, 12, -11, -1, 7], k = 3
<strong>Output:</strong> 5
<strong>Explanation: </strong>The subarray [2, -5, 12, -11, -1] has sum = -3, which is divisible by 3.<br></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [1, 2, -2], k = 2
<strong>Output:</strong> 2
<strong>Explanation: </strong>The subarray is [2, -2] has sum = 0, which is divisible by 2.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 &lt;= arr.size() &lt;= 10<sup>6</sup><br>1 &lt;= k &lt;= 10<sup>6</sup><br>-10<sup>6</sup> &lt;= arr[i] &lt;= 10<sup>6</sup>&nbsp;</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<code>Snapdeal</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>prefix-sum</code>&nbsp;<code>Arrays</code>&nbsp;<code>Hash</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;