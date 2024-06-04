<h2><a href="https://leetcode.com/problems/faulty-keyboard/">2810. Faulty Keyboard</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Your laptop keyboard is faulty, and whenever you type a character <code style="user-select: auto;">'i'</code> on it, it reverses the string that you have written. Typing other characters works as expected.</p>

<p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> string <code style="user-select: auto;">s</code>, and you type each character of <code style="user-select: auto;">s</code> using your faulty keyboard.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the final string that will be present on your laptop screen.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "string"
<strong style="user-select: auto;">Output:</strong> "rtsng"
<strong style="user-select: auto;">Explanation:</strong> 
After typing first character, the text on the screen is "s".
After the second character, the text is "st". 
After the third character, the text is "str".
Since the fourth character is an 'i', the text gets reversed and becomes "rts".
After the fifth character, the text is "rtsn". 
After the sixth character, the text is "rtsng". 
Therefore, we return "rtsng".
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "poiinter"
<strong style="user-select: auto;">Output:</strong> "ponter"
<strong style="user-select: auto;">Explanation:</strong> 
After the first character, the text on the screen is "p".
After the second character, the text is "po". 
Since the third character you type is an 'i', the text gets reversed and becomes "op". 
Since the fourth character you type is an 'i', the text gets reversed and becomes "po".
After the fifth character, the text is "pon".
After the sixth character, the text is "pont". 
After the seventh character, the text is "ponte". 
After the eighth character, the text is "ponter". 
Therefore, we return "ponter".</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of lowercase English letters.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">s[0] != 'i'</code></li>
</ul>
</div>