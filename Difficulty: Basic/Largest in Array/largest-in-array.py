class Solution:
    def largest(self, arr):
        # code here
        largest=arr[0]
        for i in arr:
            if i>largest:
                largest=i
        
        return largest
    
            
