# spoj_123 : https://www.spoj.com/problems/MST1/
# fibbonaci using memoized
# https://www.codechef.com/problems/JAIN
# stair case problems  - staircase ,staircase2 
### in how many ways can we go to nth stair from 0 given we only can move {1,2,3} stairs at a time ;
### approach same as fibbonaci 
### 1 1                                                         1
### 2 11,2                                                      2
### 3 111,12,21,3                                               4
### 4 1111,1122,22,2211,1212,13,31                              7
### 5 11111,1112,122,221,212,1211,1121,2111,113,131,311,23,32   13
# nX2 tiling problem 
### problem
### find number of ways to fill dominos of 2XN domino  with 2X1 or 1X2 domino 
### given dominos 
### 0 ; 00
### 0 ;
### N=1    
### 0
### 0
### N=2
### 0 0 ; 00 
### 0 0	  00
### N=3
### 0 0 0 ; 0 00 ; 00 0
### 0 0 0   0 00   00 0
### N=4 
### 0 0 0 0 ; 00 00 ; 00 0 0 ; 0 0 00 ;0 00 0 
### 0 0 0 0   00 00   00 0 0   0 0 00  0 00 0
### N = 5; 
### 0 0 0 0 0 ; 0 0 0 00 ; 0  00 00 ; 00 0 00 ; 00 00 0 ; 0 00 0 0 ; 0 0 00 0 ; 00 0 0 0  
### 0 0 0 0 0   0 0 0 00   0  00 00   00 0 00   00 00 0   0 00 0 0   0 0 00 0   00 0 0 0
# subset sum problem : https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1
