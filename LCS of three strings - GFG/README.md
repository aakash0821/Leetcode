# LCS of three strings
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given 3 strings A, B&nbsp;and C, the task is to find the longest common sub-sequence in all three given sequences.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
A = "geeks", B = "geeksfor", 
C = "geeksforgeeks"
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation</strong>: "geeks"is the longest common
subsequence with length 5.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">â€‹<strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: 
A = "abcd", B = "efgh", C = "ijkl"
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation</strong>: There's no common subsequence
in all the strings.</span>
</pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">LCSof3()&nbsp;</strong>which takes the strings A, B, C and their lengths n1, n2, n3&nbsp;as input and returns the length of the longest common subsequence in all the 3 strings.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(n1*n2*n3).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(n1*n2*n3).</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&lt;=n1, n2, n3&lt;=20</span></p>
</div>