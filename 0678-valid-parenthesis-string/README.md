<h2><a href="https://leetcode.com/problems/valid-parenthesis-string/">678. Valid Parenthesis String</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a string <code style="user-select: auto;">s</code> containing only three types of characters: <code style="user-select: auto;">'('</code>, <code style="user-select: auto;">')'</code> and <code style="user-select: auto;">'*'</code>, return <code style="user-select: auto;">true</code> <em style="user-select: auto;">if</em> <code style="user-select: auto;">s</code> <em style="user-select: auto;">is <strong style="user-select: auto;">valid</strong></em>.</p>

<p style="user-select: auto;">The following rules define a <strong style="user-select: auto;">valid</strong> string:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Any left parenthesis <code style="user-select: auto;">'('</code> must have a corresponding right parenthesis <code style="user-select: auto;">')'</code>.</li>
	<li style="user-select: auto;">Any right parenthesis <code style="user-select: auto;">')'</code> must have a corresponding left parenthesis <code style="user-select: auto;">'('</code>.</li>
	<li style="user-select: auto;">Left parenthesis <code style="user-select: auto;">'('</code> must go before the corresponding right parenthesis <code style="user-select: auto;">')'</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">'*'</code> could be treated as a single right parenthesis <code style="user-select: auto;">')'</code> or a single left parenthesis <code style="user-select: auto;">'('</code> or an empty string <code style="user-select: auto;">""</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "()"
<strong style="user-select: auto;">Output:</strong> true
</pre><p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "(*)"
<strong style="user-select: auto;">Output:</strong> true
</pre><p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "(*))"
<strong style="user-select: auto;">Output:</strong> true
</pre>
<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s[i]</code> is <code style="user-select: auto;">'('</code>, <code style="user-select: auto;">')'</code> or <code style="user-select: auto;">'*'</code>.</li>
</ul>
</div>