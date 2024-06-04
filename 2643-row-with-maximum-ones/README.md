<h2><a href="https://leetcode.com/problems/row-with-maximum-ones/">2643. Row With Maximum Ones</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a <code style="user-select: auto;">m x n</code> binary matrix <code style="user-select: auto;">mat</code>, find the <strong style="user-select: auto;">0-indexed</strong> position of the row that contains the <strong style="user-select: auto;">maximum</strong> count of <strong style="user-select: auto;">ones,</strong> and the number of ones in that row.</p>

<p style="user-select: auto;">In case there are multiple rows that have the maximum count of ones, the row with the <strong style="user-select: auto;">smallest row number</strong> should be selected.</p>

<p style="user-select: auto;">Return<em style="user-select: auto;"> an array containing the index of the row, and the number of ones in it.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> mat = [[0,1],[1,0]]
<strong style="user-select: auto;">Output:</strong> [0,1]
<strong style="user-select: auto;">Explanation:</strong> Both rows have the same number of 1's. So we return the index of the smaller row, 0, and the maximum count of ones (1<code style="user-select: auto;">)</code>. So, the answer is [0,1]. 
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> mat = [[0,0,0],[0,1,1]]
<strong style="user-select: auto;">Output:</strong> [1,2]
<strong style="user-select: auto;">Explanation:</strong> The row indexed 1 has the maximum count of ones <code style="user-select: auto;">(2)</code>. So we return its index, <code style="user-select: auto;">1</code>, and the count. So, the answer is [1,2].
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> mat = [[0,0],[1,1],[0,0]]
<strong style="user-select: auto;">Output:</strong> [1,2]
<strong style="user-select: auto;">Explanation:</strong> The row indexed 1 has the maximum count of ones (2). So the answer is [1,2].
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == mat.length</code>&nbsp;</li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == mat[i].length</code>&nbsp;</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 100</code>&nbsp;</li>
	<li style="user-select: auto;"><code style="user-select: auto;">mat[i][j]</code> is either <code style="user-select: auto;">0</code> or <code style="user-select: auto;">1</code>.</li>
</ul>
</div>