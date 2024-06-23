<h2><a href="https://leetcode.com/problems/minimum-average-of-smallest-and-largest-elements/">3194. Minimum Average of Smallest and Largest Elements</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You have an array of floating point numbers <code style="user-select: auto;">averages</code> which is initially empty. You are given an array <code style="user-select: auto;">nums</code> of <code style="user-select: auto;">n</code> integers where <code style="user-select: auto;">n</code> is even.</p>

<p style="user-select: auto;">You repeat the following procedure <code style="user-select: auto;">n / 2</code> times:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Remove the <strong style="user-select: auto;">smallest</strong> element, <code style="user-select: auto;">minElement</code>, and the <strong style="user-select: auto;">largest</strong> element <code style="user-select: auto;">maxElement</code>,&nbsp;from <code style="user-select: auto;">nums</code>.</li>
	<li style="user-select: auto;">Add <code style="user-select: auto;">(minElement + maxElement) / 2</code> to <code style="user-select: auto;">averages</code>.</li>
</ul>

<p style="user-select: auto;">Return the <strong style="user-select: auto;">minimum</strong> element in <code style="user-select: auto;">averages</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">nums = [7,8,3,4,15,13,4,1]</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">5.5</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></p>

<table style="user-select: auto;">
	<tbody style="user-select: auto;">
		<tr style="user-select: auto;">
			<th style="user-select: auto;">step</th>
			<th style="user-select: auto;">nums</th>
			<th style="user-select: auto;">averages</th>
		</tr>
		<tr style="user-select: auto;">
			<td style="user-select: auto;">0</td>
			<td style="user-select: auto;">[7,8,3,4,15,13,4,1]</td>
			<td style="user-select: auto;">[]</td>
		</tr>
		<tr style="user-select: auto;">
			<td style="user-select: auto;">1</td>
			<td style="user-select: auto;">[7,8,3,4,13,4]</td>
			<td style="user-select: auto;">[8]</td>
		</tr>
		<tr style="user-select: auto;">
			<td style="user-select: auto;">2</td>
			<td style="user-select: auto;">[7,8,4,4]</td>
			<td style="user-select: auto;">[8,8]</td>
		</tr>
		<tr style="user-select: auto;">
			<td style="user-select: auto;">3</td>
			<td style="user-select: auto;">[7,4]</td>
			<td style="user-select: auto;">[8,8,6]</td>
		</tr>
		<tr style="user-select: auto;">
			<td style="user-select: auto;">4</td>
			<td style="user-select: auto;">[]</td>
			<td style="user-select: auto;">[8,8,6,5.5]</td>
		</tr>
	</tbody>
</table>
The smallest element of averages, 5.5, is returned.</div>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">nums = [1,9,8,3,10,5]</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">5.5</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></p>

<table style="user-select: auto;">
	<tbody style="user-select: auto;">
		<tr style="user-select: auto;">
			<th style="user-select: auto;">step</th>
			<th style="user-select: auto;">nums</th>
			<th style="user-select: auto;">averages</th>
		</tr>
		<tr style="user-select: auto;">
			<td style="user-select: auto;">0</td>
			<td style="user-select: auto;"><span class="example-io" style="user-select: auto;">[1,9,8,3,10,5]</span></td>
			<td style="user-select: auto;">[]</td>
		</tr>
		<tr style="user-select: auto;">
			<td style="user-select: auto;">1</td>
			<td style="user-select: auto;"><span class="example-io" style="user-select: auto;">[9,8,3,5]</span></td>
			<td style="user-select: auto;">[5.5]</td>
		</tr>
		<tr style="user-select: auto;">
			<td style="user-select: auto;">2</td>
			<td style="user-select: auto;"><span class="example-io" style="user-select: auto;">[8,5]</span></td>
			<td style="user-select: auto;">[5.5,6]</td>
		</tr>
		<tr style="user-select: auto;">
			<td style="user-select: auto;">3</td>
			<td style="user-select: auto;">[]</td>
			<td style="user-select: auto;">[5.5,6,6.5]</td>
		</tr>
	</tbody>
</table>
</div>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">nums = [1,2,3,7,8,9]</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">5.0</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></p>

<table style="user-select: auto;">
	<tbody style="user-select: auto;">
		<tr style="user-select: auto;">
			<th style="user-select: auto;">step</th>
			<th style="user-select: auto;">nums</th>
			<th style="user-select: auto;">averages</th>
		</tr>
		<tr style="user-select: auto;">
			<td style="user-select: auto;">0</td>
			<td style="user-select: auto;"><span class="example-io" style="user-select: auto;">[1,2,3,7,8,9]</span></td>
			<td style="user-select: auto;">[]</td>
		</tr>
		<tr style="user-select: auto;">
			<td style="user-select: auto;">1</td>
			<td style="user-select: auto;"><span class="example-io" style="user-select: auto;">[2,3,7,8]</span></td>
			<td style="user-select: auto;">[5]</td>
		</tr>
		<tr style="user-select: auto;">
			<td style="user-select: auto;">2</td>
			<td style="user-select: auto;"><span class="example-io" style="user-select: auto;">[3,7]</span></td>
			<td style="user-select: auto;">[5,5]</td>
		</tr>
		<tr style="user-select: auto;">
			<td style="user-select: auto;">3</td>
			<td style="user-select: auto;"><span class="example-io" style="user-select: auto;">[]</span></td>
			<td style="user-select: auto;">[5,5,5]</td>
		</tr>
	</tbody>
</table>
</div>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n == nums.length &lt;= 50</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n</code> is even.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 50</code></li>
</ul>
</div>