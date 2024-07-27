<h2><a href="https://leetcode.com/problems/maximum-bags-with-full-capacity-of-rocks/">2279. Maximum Bags With Full Capacity of Rocks</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You have <code style="user-select: auto;">n</code> bags numbered from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n - 1</code>. You are given two <strong style="user-select: auto;">0-indexed</strong> integer arrays <code style="user-select: auto;">capacity</code> and <code style="user-select: auto;">rocks</code>. The <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> bag can hold a maximum of <code style="user-select: auto;">capacity[i]</code> rocks and currently contains <code style="user-select: auto;">rocks[i]</code> rocks. You are also given an integer <code style="user-select: auto;">additionalRocks</code>, the number of additional rocks you can place in <strong style="user-select: auto;">any</strong> of the bags.</p>

<p style="user-select: auto;">Return<em style="user-select: auto;"> the <strong style="user-select: auto;">maximum</strong> number of bags that could have full capacity after placing the additional rocks in some bags.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> capacity = [2,3,4,5], rocks = [1,2,4,4], additionalRocks = 2
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong>
Place 1 rock in bag 0 and 1 rock in bag 1.
The number of rocks in each bag are now [2,3,4,4].
Bags 0, 1, and 2 have full capacity.
There are 3 bags at full capacity, so we return 3.
It can be shown that it is not possible to have more than 3 bags at full capacity.
Note that there may be other ways of placing the rocks that result in an answer of 3.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> capacity = [10,2,2], rocks = [2,2,0], additionalRocks = 100
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong>
Place 8 rocks in bag 0 and 2 rocks in bag 2.
The number of rocks in each bag are now [10,2,2].
Bags 0, 1, and 2 have full capacity.
There are 3 bags at full capacity, so we return 3.
It can be shown that it is not possible to have more than 3 bags at full capacity.
Note that we did not use all of the additional rocks.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == capacity.length == rocks.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 5 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= capacity[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= rocks[i] &lt;= capacity[i]</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= additionalRocks &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>