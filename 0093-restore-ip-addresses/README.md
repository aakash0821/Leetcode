<h2><a href="https://leetcode.com/problems/restore-ip-addresses/">93. Restore IP Addresses</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A <strong style="user-select: auto;">valid IP address</strong> consists of exactly four integers separated by single dots. Each integer is between <code style="user-select: auto;">0</code> and <code style="user-select: auto;">255</code> (<strong style="user-select: auto;">inclusive</strong>) and cannot have leading zeros.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, <code style="user-select: auto;">"0.1.2.201"</code> and <code style="user-select: auto;">"192.168.1.1"</code> are <strong style="user-select: auto;">valid</strong> IP addresses, but <code style="user-select: auto;">"0.011.255.245"</code>, <code style="user-select: auto;">"192.168.1.312"</code> and <code style="user-select: auto;">"192.168@1.1"</code> are <strong style="user-select: auto;">invalid</strong> IP addresses.</li>
</ul>

<p style="user-select: auto;">Given a string <code style="user-select: auto;">s</code> containing only digits, return <em style="user-select: auto;">all possible valid IP addresses that can be formed by inserting dots into </em><code style="user-select: auto;">s</code>. You are <strong style="user-select: auto;">not</strong> allowed to reorder or remove any digits in <code style="user-select: auto;">s</code>. You may return the valid IP addresses in <strong style="user-select: auto;">any</strong> order.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "25525511135"
<strong style="user-select: auto;">Output:</strong> ["255.255.11.135","255.255.111.35"]
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "0000"
<strong style="user-select: auto;">Output:</strong> ["0.0.0.0"]
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "101023"
<strong style="user-select: auto;">Output:</strong> ["1.0.10.23","1.0.102.3","10.1.0.23","10.10.2.3","101.0.2.3"]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 20</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of digits only.</li>
</ul>
</div>