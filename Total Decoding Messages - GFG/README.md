# Total Decoding Messages
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">A top secret message containing letters from<code style="user-select: auto;"> A-Z </code>is being encoded to numbers using the following mapping:</span></p>

<div class="highlighter-rouge" style="user-select: auto;">
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><code style="user-select: auto;">'A' -&gt; 1
'B' -&gt; 2
...
'Z' -&gt; 26
</code></span></pre>
</div>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are an FBI agent. You have to determine the total number of ways that message can be decoded, as the answer can be large return the answer modulo 10<sup style="user-select: auto;">9</sup>&nbsp;+ 7.<br style="user-select: auto;">
<strong style="user-select: auto;">Note:</strong> An empty digit sequence is considered to have one decoding. It may be assumed that the input contains valid digits from 0 to 9 and If there are leading 0s, extra trailing 0s and two or more consecutive 0s then it is an invalid string.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>str = "123"
<strong style="user-select: auto;">Output: </strong>3
<strong style="user-select: auto;">Explanation: </strong>"123" can be decoded as "ABC"(123),
"LC"(12 3) and "AW"(1 23).</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>str = "90"
<strong style="user-select: auto;">Output: 0</strong>
<strong style="user-select: auto;">Explanation: </strong>"90" cannot be decoded as it's an invalid string and we cannot decode '0'.</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">CountWays()&nbsp;</strong>which takes the string as str as input parameter and returns the total number of ways the string can be decoded modulo 10<sup style="user-select: auto;">9</sup>&nbsp;+ 7.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(n)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Space Complexity:&nbsp;</strong>O(n) where n&nbsp; = |str|<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= |str| &lt;= 10<sup style="user-select: auto;">4</sup></span></p>
</div>