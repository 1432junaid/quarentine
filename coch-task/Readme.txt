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

given a string S and a string T, count the number of distinct sybsequrnce of T in S.
A subsequence of a strinf is a new string which is formed from the original string by deletinf some (an be none) of the 
characters without disturbing the relative position of the remaining characters.(ie,"ACE" is a subsequence of "ABCDE"
while "AEC" is not).

Here is an example:
S = "rabbit", T = "rabbit"
Return 3.

----------------------------------------------------------------------------------------------------------------------------------------------

#task011x2:

Divide two integers without using  these "*", "/", "%" operators.

---------------------------------------------------------------------------------------------------------------------------------------------
