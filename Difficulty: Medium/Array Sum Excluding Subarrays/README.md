<h2><a href="https://www.geeksforgeeks.org/problems/nitika-and-her-queries4804/1?page=1&category=prefix-sum,Kadane&sortBy=difficulty">Array Sum Excluding Subarrays</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Geek has an array <strong>arr[]</strong> of integers and a list of <strong>q</strong> queries <strong>queries[][]</strong>, where each query is in the form <strong>[L, R]</strong> (0</span><span style="font-size: 18.6667px;">-based indexing)</span><span style="font-size: 14pt;">. For each query, determine the </span><strong style="font-size: 14pt;">sum</strong><span style="font-size: 14pt;"> of all elements in the array </span><strong style="font-size: 14pt;">excluding</strong><span style="font-size: 14pt;"> the subarray from index </span><strong style="font-size: 14pt;">L to R </strong><span style="font-size: 14pt;">(inclusive).</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> arr[] = [4, 7, 8, 5, 1, 0], queries[][] = [[1, 3], [2, 5], [3, 4]]
<strong>Output:</strong> [5, 11, 19]
<strong>Explaination:</strong> <br>For the first query: The resulting array is: [4, 1, 0].
Their Sum will be: 5
For the Second query: The resulting array is: [4, 7]. <br>Their Sum will be: 11
For the Third query: The resulting array is: [4, 7, 8, 0]. 
Their Sum will be: 19<br></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> arr[] = [2, 1, 5, 4, 3], queries[][] = [[0, 2], [1, 3]]
<strong>Output:</strong> [7, 5]
<strong>Explaination:</strong> </span><br><span style="font-size: 14pt;">For the first query: The resulting array is: [4, 3].
Their Sum will be: 7
For the Second query: The resulting array is: [2, 3].</span><br><span style="font-size: 14pt;">Their Sum will be: 5</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ arr.size(), q ≤ 10<sup>5</sup><br>-10<sup>4</sup> ≤ arr[i] ≤ 10<sup>4</sup><br>0 ≤ L, R &lt; arr.size()</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>prefix-sum</code>&nbsp;<code>Arrays</code>&nbsp;