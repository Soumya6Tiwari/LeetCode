<h2><a href="https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/">3190. Find Minimum Operations to Make All Elements Divisible by Three</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">nums</code>. In one operation, you can add or subtract 1 from <strong style="user-select: auto;">any</strong> element of <code style="user-select: auto;">nums</code>.</p>

<p style="user-select: auto;">Return the <strong style="user-select: auto;">minimum</strong> number of operations to make all elements of <code style="user-select: auto;">nums</code> divisible by 3.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">nums = [1,2,3,4]</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">3</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></p>

<p style="user-select: auto;">All array elements can be made divisible by 3 using 3 operations:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Subtract 1 from 1.</li>
	<li style="user-select: auto;">Add 1 to 2.</li>
	<li style="user-select: auto;">Subtract 1 from 4.</li>
</ul>
</div>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">nums = [3,6,9]</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">0</span></p>
</div>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 50</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 50</code></li>
</ul>
</div>