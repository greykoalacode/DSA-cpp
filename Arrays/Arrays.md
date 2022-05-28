# Section 3: Arrays

 - Input, Output & Update
	 - Input
		 - Defining Array
			 `int arr[100];`
		 - Setting all elements as zero
			 `int  marks[100] = {0};`
		 - Rest are defined as zero by default
			 `int arr[100] = {1,2,3};`
	- Output
		- for printing one element
			`cout<<arr[0]<<endl;`
		- printing entire array
			`for(i -> n) cout<< arr[i]<<" ,";`
- Using Arrays in Functions
	- To know Size of an array, we can do
		`int arr[] = {1,2,3,4,5};`
		`int n = sizeof(arr)/sizeof(int);`
		i.e. to know the size we can use `sizeof()` function for the array with its particular 			datatype.
	- When printing arrays in the main function, we can use above snippet to get the length and loop and print the same. 
	- But when we pass the array onto a function,
	   `printArray(int arr[]){`
    	`n = sizeof(arr)/sizeof(int);`
    	`cout<<"Inside function , size of arr: "<<(sizeof(arr)/sizeof(int))<<endl;`
    	`for(i -> n)
    		print(arr[i]);`
    	`}`
    The parameter passed here basically is a **pointer variable (pointing to address of 	array)**, the size of pointer variable is *8 Bytes*. So we get first two elements printed, i.e.. `n = (8/4) = 2 (i.e. pointer size/ size of int) `
	- So we have **passed by reference (only address is passed)** than pass by value, so we need to make sure we pass a pointer. i.e. `printArray(int* arr)`
	- You need to pass `n` the length from the main function, so that the printing takes place correctly. i.e. `printArray(int* arr, int n)`
- Searching in Arrays
	- Linear Search (Brute Force Technique)
		Searching Algorithm to find index of elements in given array. Basically loop for the size of array, if the element is found return the index , else return -1. 
		Time Complexity: O(N)
	- Binary Search
		Only performed on Sorted Elements. Summary:
		```
		s=0, e= n-1
		while(s<=e){
			find the mid (generally (s+e)/2 )
			do comparison at mid
				-> if mid element == key , return mid
				-> if mid element > key , move left, set e = mid - 1
				-> if mid element < key , move right, set s = mid + 1
		```
		Time Complexity: O(logN)
- Reverse Array
	Loop till mid, and swap the elements. 
- Find Largest Subarray Sum
	- Brute Force
		We would loop across the array thrice (i -> n, j -> n and i -> j ) and calculate sum of each SubArray and compare with each other to get the maximum one.  O(N^3) approach.
	- Prefix Sum
		Here, we keep an array PrefixSum[] which would store sum of values till that index. 
		i.e. `Arr  = {1,2,3}, PrefixSum[] = {1,3,6}`
		Now, we would loop `for (int i = 0 -> n)` then `for (int j = i+1 -> n)`
		and get the `sum [i -> j]`  by `PrefixSum[j] - PrefixSum[i-1]` if i > 0 else `PrefixSum[j]`
	- Kadane's Algorithm
		Let `Arr = {-2,3,4,-1,5,-12,6,1,3}`
		`cs = 0, ms = 0` (current sum, max sum)
		`for each elem:`
		`cs = cs + elem`
		`if cs < 0 (i.e. negative sum) set cs = 0`
		`ms = max(ms, cs)`
		
|values |  -2|  3|4 |-1| 5| -12| 6| 1| 3|
|--|--|--|-- |--|--|--|--|--|--|
cs| 0 | 3| 7| 6|11| 0 |6|7|10|
ms| 0| 3 |7|7|11|11|11|11|11