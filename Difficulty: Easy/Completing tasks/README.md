<h2><a href="https://www.geeksforgeeks.org/problems/completing-tasks0454/1?page=2&category=Hash&sortBy=difficulty">Completing tasks</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are given <strong>k</strong> tasks numbered from<strong> 1 to k</strong>. Three students have already completed some tasks, provided in the array <strong>arr[]</strong>. Now, two students, Tanya and Manya, need to complete the remaining tasks. Tanya will take the first remaining task, the third, and so on, while Manya will take the second, fourth, and so on. </span><span style="font-size: 18px;">Given the array<strong> arr[]</strong> and the total number of tasks<strong> k</strong>, determine which tasks Tanya and Manya will complete.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [2, 5, 6, 7, 9, 4] , k = 15
<strong>Output:</strong> [[1, 8, 11, 13, 15],[3, 10, 12, 14]]&nbsp;
<strong>Explanation:</strong> The remaining tasks are :
{1, 3, 8, 10, 11, 12, 13, 14, 15}.
So Tanya should take these tasks :
{1, 8, 11, 13, 15}.
And Manya should take these tasks :
{3, 10, 12, 14}.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [2, 4, 3] , k = 4
<strong>Output:</strong> [[1],[]]
<strong>Explanation:</strong>&nbsp;There are no task for Manya.
</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(n)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(n)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ arr.size()≤ k ≤ 10<sup>6</sup><br>1 ≤ arr[i] ≤ k</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Hash</code>&nbsp;<code>Data Structures</code>&nbsp;