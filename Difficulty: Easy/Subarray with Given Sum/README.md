<h2><a href="https://www.geeksforgeeks.org/problems/subarray-with-given-sum--145933/1?page=1&category=sliding-window&sortBy=difficulty">Subarray with Given Sum</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">You are given an array&nbsp;<strong>arr[]&nbsp;</strong>and an integer&nbsp;<strong>sum</strong>. You need to return the start and end (<strong>1-Based</strong>) indexes of a subarray whose sum is equal to the given&nbsp;<strong>sum</strong>.<br>If many such sub-array are present, return the indexes which comes first moving from left to right. If no such sub-array is present return empty array</span></p>
<p><strong><span style="font-size: 14pt;">Examples:</span></strong></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [15, 2, 4, 8, 9, 5, 10, 23], sum = 23
<strong>Output: </strong>2 5 
<strong>Explanation : </strong>Sum of elements between indices 2 and 5 is 2+4+8+9 = 23</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [1, 4, 0, 0, 3, 10, 5], sum = 7
<strong>Output: </strong>2 5
<strong>Explanation: </strong>Sum of elements between indices 2 and 5 is 4+0+0+3 = 7</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [1, 4], sum = 0
<strong>Output: </strong>[]
<strong>Explanation: </strong>There is no subarray with 0 sum</span></pre>
<p><strong style="font-size: 18.6667px;">Constraints:</strong><br style="font-size: 18.6667px;"><span style="font-size: 18.6667px;">1 ≤ arr.size ≤ 10</span><sup>6</sup><br style="font-size: 18.6667px;"><span style="font-size: 18.6667px;">0 ≤ arr[i] ≤ 10<sup>5</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>sliding-window</code>&nbsp;<code>Arrays</code>&nbsp;