<h2><a href="https://leetcode.com/problems/take-gifts-from-the-richest-pile/">2558. Take Gifts From the Richest Pile</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">gifts</code> denoting the number of gifts in various piles. Every second, you do the following:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Choose the pile with the maximum number of gifts.</li>
	<li style="user-select: auto;">If there is more than one pile with the maximum number of gifts, choose any.</li>
	<li style="user-select: auto;">Leave behind the floor of the square root of the number of gifts in the pile. Take the rest of the gifts.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the number of gifts remaining after </em><code style="user-select: auto;">k</code><em style="user-select: auto;"> seconds.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> gifts = [25,64,9,4,100], k = 4
<strong style="user-select: auto;">Output:</strong> 29
<strong style="user-select: auto;">Explanation:</strong> 
The gifts are taken in the following way:
- In the first second, the last pile is chosen and 10 gifts are left behind.
- Then the second pile is chosen and 8 gifts are left behind.
- After that the first pile is chosen and 5 gifts are left behind.
- Finally, the last pile is chosen again and 3 gifts are left behind.
The final remaining gifts are [5,8,9,4,3], so the total number of gifts remaining is 29.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> gifts = [1,1,1,1], k = 4
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> 
In this case, regardless which pile you choose, you have to leave behind 1 gift in each pile. 
That is, you can't take any pile with you. 
So, the total gifts remaining are 4.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= gifts.length &lt;= 10<sup style="user-select: auto;">3</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= gifts[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= 10<sup style="user-select: auto;">3</sup></code></li>
</ul>
</div>