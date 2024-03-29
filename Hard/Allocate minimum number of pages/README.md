<h2><a href="https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article">Allocate minimum number of pages</a></h2><h3>Difficulty Level : Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given <strong>N </strong>number of books. Every <strong>ith</strong> book has<strong> Ai</strong> number of pages.&nbsp;</span><br>
<span style="font-size:18px">You have to allocate contiguous&nbsp;books to <strong>M </strong>number of students. There can be many ways or permutations to do so. In each permutation, one of the M students will be allocated the maximum number of pages. Out of all these permutations, the task is to find that particular permutation in which the <strong>maximum number of pages allocated to a student is the minimum</strong> of those in all the other permutations and <strong>print this minimum value</strong>.</span></p>

<p><span style="font-size:18px">Each book will be allocated to exactly one student. Each student has to be allocated at least one book.</span></p>

<p><span style="font-size:18px"><strong>Note</strong>: Return <strong>-1</strong> if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 4
A[] = {12,34,67,90}
M = 2
<strong>Output:</strong>113
<strong>Explanation:</strong>Allocation can be done in 
following ways:
{12} and {34, 67, 90} Maximum Pages = 191
{12, 34} and {67, 90} Maximum Pages = 157
{12, 34, 67} and {90} Maximum Pages =113.
Therefore, the minimum of these cases is 113,
which is selected as the output.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 3
A[] = {15,17,20}
M = 2
<strong>Output:</strong>32
<strong>Explanation: </strong>Allocation is done as
{15,17} and {20}</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function findPages() which takes 2 Integers <strong>N</strong>, and m and an array <strong>A[]</strong> of length <strong>N</strong> as input and returns the expected answer.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity</strong>: O(NlogN)<br>
<strong>Expected Auxilliary Space:</strong> O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>5</sup><br>
1 &lt;= A [ i ] &lt;= 10<sup>6</sup><br>
1 &lt;= M &lt;= 10<sup>5</sup></span></p>

<p>&nbsp;</p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Infosys</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Google</code>&nbsp;<code>Codenation</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Searching</code>&nbsp;<code>Divide and Conquer</code>&nbsp;<code>Algorithms</code>&nbsp;