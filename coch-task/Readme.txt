--------------------------------------------------------------------------------------------------------------------------------------------------
#task001:

given an array of integer, find two numbers such that they addup to a specific target number. 
the function two_sum should return indices of the two numbers such that they add up to the target ,
where index1 must ne less tha index2 .
Please note that your reutrned answers(both index1 and index2 ) are not zero-based.
you may assume that each input would have exactly one solution.

input: numbers = {2,7,11,15},target =9;
output: index1=1,index2=2;

---------------------------------------------------------------------------------------------------------------------------------------------------
#task002:

given an array S of n integers, find three integers in S such that the sum is closest to a given number ,
target. Return the sum of the three integers . you may assume that each input would have exactly one solution.

for example:
	S = {-1,2,1,-4} and target =1;	
	the sum hat is closest to the target is 2.
	(-1+2+1 =2).

--------------------------------------------------------------------------------------------------------------------------------------------------
#task003x1:

giveing two binary strings. return their sum(also a binary string).

for example;
	a="11"
	b="1"
	answer ="100"

--------------------------------------------------------------------------------------------------------------------------------------------------
#task003x2:

your are given two linked lists representing to non-negative numbres.The digits are stored in reverse order and each of their nodes
contain a single digit. Add the two numbers and return it as a linked list.

for example:
	Input:(2 -> 4 -> 3 ) + (5 -> 6 -> 4)
	output: 7 -> 0 -> 8

--------------------------------------------------------------------------------------------------------------------------------------------------
#task004x1:

say you have an array for which the i-th element is the price of a given stock on day.
if you were only permitted to complete at most one transaction (i.e, buy one and sell one share of the stock ),design 
an algorithm to find the maximum profit.
{throughs}:
	scan the  array from left to right and keep tracking the minimal price in sacnned elements. In the meantime, track the max profit
	by calculating the difference between current price and minimal price and updating the max profit if the difference is larger than
	existing max profit.

-------------------------------------------------------------------------------------------------------------------------------------------------
#task004x2:

say you have an array for which the i-th element is the price of a given stock on day i.
Design an algorithm to find the maximium profit . you may complete as many transaction as you like (i.e buy one and sell one share of the
stock multiple times). However , you may not engage in multiple transactions at the same time(i.e,you must sell stock before you buy again).

{thoughts}:
	A little different with previous one. Since we can make unlimited transactions, this questionturn to sum all the positive price
	difference.
	so, scan the array from left to right, and sum all positive diff value.

------------------------------------------------------------------------------------------------------------------------------------------------
#task009x1:

given an array of string,return all groups of strings that are anagrams.
Note: all inputs will be in lower-case

{throughts}:
	generate footprint for each string,if they has the same footprint.they are anagrams. But hoe to generate footprints os tricky.
	At beginning ,I try to generate footprint as a full description of string content(as high code),but this costs too much time when 
	the stirng is huge. Instead ,I choose to generate hash number for each string .A potential risk is hash collosion , So choose a 
	prime number as the factor to avoide this.

------------------------------------------------------------------------------------------------------------------------------------------------ 

#task009x2:

say you hace an array for which the i-th element is the price of a given stock on day i.
design an algorithm to find the maximum profit. you may complete at most two transactions.
Note: you may not engage in multiple transactions at the same time (i.e, you must sell the stock before you buy again).

{thoughts}:
	one-dimension dynamic planning . Given an i,split the whole array into two parts:
	[0,i] and [i=1,n], it generates two max value based on i, MaxProfit(0,i) and Maxprofit(i=1,n).so, we can define the 
	transformation function as:

-----------------------------------------------------------------------------------------------------------------------------------------------
#task010x1:

the count-and-say sequence is the sequence of integers beginning as follows:
1,11,21,1211,11121,..
1 is read off as "one 1" or 11.
11 is read off as "two 1" or 21.
21 is read off as "one 2, then one 1" or 1211.
Given an integer n, genereate the  n-th sequence.
Note: the sequence of integers will be represented as a string.

-----------------------------------------------------------------------------------------------------------------------------------------------

#task010x2:

A message containing letters from A-Z is being encoded to numbers using the following mapping :
'A' -> 1
'B' -> 2
...
'Z' -> 26

Given an encoded message containing digits, determine the total number of ways to decode it.
For example,
Given encoded message "12", it could be decoded as "AB" (12) or "L" (12).
the number of ways decoding "12" is 2.

-----------------------------------------------------------------------------------------------------------------------------------------------

#task011x1:

given a string S and a string T, count the number of distinct subsequences of T in S.
A subsequence of a string is a new string which is formed from the original string by deletinf some (an be none) of the 
characters without disturbing the relative position of the remaining characters.(ie,"ACE" is a subsequence of "ABCDE"
while "AEC" is not).

Here is an example:
S = "rabbbit", T = "rabbit"
Return 3.

----------------------------------------------------------------------------------------------------------------------------------------------

#task011x2:

Divide two integers without using  these "*", "/", "%" operators.

---------------------------------------------------------------------------------------------------------------------------------------------
#task012x1:

Evaluate the value of an arithmetic expression in Reverse polish notation.
Valid operator are +,-,*,/. Each operand may be an interger or another expression.
Some examples:
["2","1","+","3","*"] -> ((2+1)*3) -> 9
["4","13","5","/","+"] -> (4+(13/5)) -> 6

{Thoughts}

	usually , stack is the best match got solving reverse polish notation.
	for this question, we need to introduce a sack here and process the expression one character by one.

	if current char is a number ,push it into stack
	if current char is an operator, pop two elements out. calculate the result and push back to stack.

	and in thr end, the left number in the stack is the result.

----------------------------------------------------------------------------------------------------------------------------------------------

#task012x2:

Given an unsorted integer array, find the first missing positive integer.
for example:
Given [1,2,0] return 3,
and  [3,4,-1,1] return 2.

your algorithm should run O(n) times and uses constant space.

--------------------------------------------------------------------------------------------------------------------------------------------
#task013x1:

There are N gas stations along a circular rout, where the amount of gas at station i is gas[i].
you have a car with an unlimited gas tank and it cost cost[i] of gas to travel from station i to its next station (i+1).
you begin athe journey with an empty tank at one of he gas stations.
Return the starting gas station's index if you can travel around the circuit once, otherwise return -1.

Note:
	the solution is guaranteed to be unique.

--------------------------------------------------------------------------------------------------------------------------------------------
#task013x2:

The gray code is a binary numeral system where two successive values differ in only one bit.
Given a non-negative integer n representing the total number of bits in the code, print the sequence of gray code.
A gray code sequence must begin with 0.

For example:
	given n =2 ,return [0,1,3,2] . its gray code sequence is :
	00 -0 
	01 -1
	11 -3
	10 -2

Note:

	for a given n, a gray code sequence is not unique defined. 
	for example:
		[0,2,3,1] is also a valid gray code sequence according to the above definition.

------------------------------------------------------------------------------------------------------------------------------------------------
#task014x1:

Given two words word1 and word2, find the minimum number of steps required to convert word1 to word2.
(each operation is counted as 1 step).
You have the following 3 operations permited on a word:
a) Insert a character
b) Delete a character
c) Replace a character

-----------------------------------------------------------------------------------------------------------------------------------------------
#task014x2:

Given  n pair of parentheses, write a function to generate all combination of well formed parentheses.
for example: 
	given n =3,a solution set is;
	"((()))","(()())","()(())","()()()"

----------------------------------------------------------------------------------------------------------------------------------------------
#task015x1:

Given an integer, convert it to a toman numeral. Input is guaranteed to be within the range from 1  to 3999.

---------------------------------------------------------------------------------------------------------------------------------------------
#task015x2:

Given s1,s2,s3, find whether s3 is formed by the interleaving of s1 and s2.

for example:
	given:
	s1 = "aabcc";
	s2 = "dbbca";
	 when s3 = "aadbbcbcac"; return TRUE.
	 when s3 = "aadbbbaccc"; return FALSE.

-----------------------------------------------------------------------------------------------------------------------------------------------
#task016x1:

Given an array of non-negative integers,you are initially positioned at the first index of the array.
Each element in the array represents your maximum jump length at that position.
Determine if you are able to reach the last index.

for example:
	A = [2,3,1,1,4], return true.
	A = [3,2,1,0,4], return false.

------------------------------------------------------------------------------------------------------------------------------------------------
#task016x2:

Given an array of non-negative integers, you are initially positioned at the first index of the array.
Each element in the array represents your maximum jump lenght at that position. your goal is to reach the last index in the 
minimum number of jumps. 

for example:
	A = [2,3,1,1,4]
	the minimum number of jumps to reach the last index is 2.
	(Jump 1 step from index 0 to 1, then 3 steps to the last index.)
------------------------------------------------------------------------------------------------------------------------------------------------
#task017x1:

find whether a linked list have cycle or not.

------------------------------------------------------------------------------------------------------------------------------------------------
#task017x2:

fine at which node of linked list have cycle.

------------------------------------------------------------------------------------------------------------------------------------------------
#task018x1:

Given two sorted interger arrays A and B, merge B into A as one sorted array.

Note:
You may assume that A has enough space to hold additional elements from B. The number of elements iinitialized 
in A and B are m and n respectively.

------------------------------------------------------------------------------------------------------------------------------------------------
#task018x2:

Merge two sorted linked list and return it as a new list . The new list should be made by splicing together the nodes
of the first two lists.

-----------------------------------------------------------------------------------------------------------------------------------------------
#task019x1:

Implement next permutation, which rearranges into the lexicographically next greater permutation of numbers.
if such arrangement is not possible, it must rearrange it as the lowest possible order(ie, sorted in ascending order).
The replacement must be in-place, do not allocate extra memory.
Here are some examples. inputs are the left-hand column and its corresponding outputs are in the right-hand column.
1,2,3 -> 1,3,2
3,2,1 -> 1,2,3
1,1,5 -> 1,5,1

-----------------------------------------------------------------------------------------------------------------------------------------------
#task019x2:

Given a collection of numbers, return all possible permutations.

for example:

[1,2,3] have the following permutations:
[1,2,3]
[1,3,2]
[2,1,3]
[2,3,1]
[3,1,2]
[3,2,1]

----------------------------------------------------------------------------------------------------------------------------------------------
#task020x1:

Given a string s consists of upper/lower-case alphabets and empty space characters ' ',return the lenght of last 
word in the string.
if the last word does not exist, return 0;

Note: A word is defined as a character sequence consists of non-space characters only.
for example,

Given s = "Hello World",
return five.

-----------------------------------------------------------------------------------------------------------------------------------------------
#task020x2:

Given a digit string, return all possible letter combinations that the number could represent.
A mapping of digit to letters (just like on the telephone buttons) ,

Input : Digit string "23"
Output :["ad","ae","af","bd","be","bf","cd","ce","cf"]

Note :

Although the above answer is in lexicographical order, you answer could be in any order you want.

-------------------------------------------------------------------------------------------------------------------------------------------













