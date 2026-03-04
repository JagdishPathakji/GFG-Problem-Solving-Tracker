<h2><a href="https://www.geeksforgeeks.org/problems/maximize-the-array3340/1?page=1&category=Heap&sortBy=difficulty">Maximize The Array</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given two integer arrays arr1 and arr2 of size n. Use the greatest elements from the given arrays to create a new array of size n such that it consists of only unique elements and the sum of all its elements is maximum.<br>The created elements should contain the elements of arr2 followed by elements of arr1 in order of their appearance.</span></p>
<p><span style="font-size: 18px;"><strong>Note:</strong> The input array will be given in such way, that every time it is possible to make a new arr by maintaing the following conditions.</span></p>
<p><br><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n = 5
arr1 = {7, 4, 8, 0, 1}
arr2 = {9, 7, 2, 3, 6}
<strong>Output: </strong>9 7 6 4 8
<strong>Explanation:</strong> 9, 7, 6 are from 2nd array
and 4, 8 from 1st array.</span></pre>
<p><br><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: n</strong> = 4
arr1 = {6, 7, 5, 3}
arr2 = {5, 6, 2, 9} 
<strong>Output:</strong> 5 6 9 7 
<strong>Explanation:</strong> 5, 6, 9 are from 2nd array
and 7 from 1st array.</span></pre>
<p><br><span style="font-size: 18px;"><strong>Your Task: </strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>maximizeArray()</strong> which takes the array arr1[], arr2[] and n as input parameters and returns the desired array of integers.</span></p>
<p><br><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(nlog(n))<br><strong>Expected Auxiliary Space:</strong> O(n)</span></p>
<p><br><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n &lt;= 10<sup>5</sup><br>0 &lt;=arr1[i]&lt;= 10<sup>9</sup><br>0 &lt;= arr2[i] &lt;= 10<sup>9</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Heap</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;