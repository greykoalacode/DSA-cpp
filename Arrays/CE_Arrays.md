1. Largest Element
	 Return the Maximum element of an Array.
	 ```cpp
	 int ms = arr[0]
	 for(i -> n)
		 ms = max(ms, arr[i])
	return ms
	```
 2. Maximum Subarray Sum
	 we have to find the maximum sum of subarray from given array.
	 ```cpp
	 cs = 0
	 largest = 0
	 for(i=0 -> n)
		 cs = cs + arr[i]
		 if(cs > largest)
			 largest =cs
		 if(cs < 0)
			 cs = 0
	 return largest
	 ```
 3. Lower Bound
	*Apply binary search, return val if found else  return lower bound at the end,  else -1*
 4. Sorted Pair Sum
	 Given a Sorted Array and number x, find pair in array whose sum is closest to x
	 ```cpp
	 start = 0, end = arr.size()-1
	 closest_sum = arr[start]+arr[end]
	 cp = {0,0}
	 while(start < end)
		 current_sum = arr[start] + arr[end]
		 if(current_sum == x)
			 cp = {start, end}
			 return cp
		 else
			 compare the differences:
			 x = abs(current_sum - x) & y = abs(closest_sum - x)
			 if (y >= x)
				 cp = {start, end}
				 closest_sum = current_sum
			 if (current_sum > x)
				 end--
			 else 
				 start++
	 return cp
	 ```
 5. K-Rotate
	 Given an integer vector and value k, rotate the array k times clockwise.
	 ```cpp
	 kRotate(vector<int> a, int k){
	 times = k % arr.size()
	 for(i=0 -> times)
		 temp = last_element_of_arr
		 arr.pop()
		 arr.insert(arr.begin(), temp)
		 // insert the popped element at the beginning
	 }
	 ```
