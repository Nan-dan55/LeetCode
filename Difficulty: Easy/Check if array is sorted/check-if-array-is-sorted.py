class Solution:
    def isSorted(self, arr) -> bool:
        # code here
        i=1
        while i<len(arr):
            if arr[i-1]>arr[i]:
                return False
            i+=1
                
        
        return True