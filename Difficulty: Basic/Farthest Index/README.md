<h2><a href="https://www.geeksforgeeks.org/problems/longest-equal-prefix3139/1?page=1&category=prefix-sum,Kadane&sortBy=difficulty">Farthest Index</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a positive integer <strong>x</strong> and an array <strong>arr</strong> of positive integers. We need to find the farthest index at which <strong>x</strong> is present. If&nbsp;<span style="box-sizing: border-box; margin: 0px; padding: 0px;">any occurrence of&nbsp;<strong>x&nbsp;</strong>doesn't exist, </span>then return -1.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [7, 42, 5, 6, 42, 8, 7, 5, 3, 6, 7] and x = 7
<strong>Output:</strong> 11
<strong>Explanation</strong>: The last index contains value 7.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [1, 2, 2]
<strong>Output:</strong> 1<br><strong>Expplanation: </strong>The farthest index which contains value x is 1.</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n)<br><strong>Expected Auxiliary Space:</strong> O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ arr.size() ≤ 10<sup>6</sup><br>1 ≤ arr[i], x ≤ 10<sup>5</sup><br></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>prefix-sum</code>&nbsp;<code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;