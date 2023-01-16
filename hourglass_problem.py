
def hourglassSum(arr):
    # Write your code here
    max_sum = -5000
    res=0
    
    for i in range(0,4):
        for j in range(0,4):
            #calculating sum
            res = (arr[i][j]+arr[i][j+1]+arr[i][j+2])+(arr[i+1][j+1])+(arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2])
            #to find max hour glass sum
            if max_sum<=res:
                max_sum=res
      
    return max_sum
   
