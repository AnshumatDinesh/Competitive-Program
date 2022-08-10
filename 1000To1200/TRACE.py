t=int(input())
while(t>0):
    n=int(input())
    mat=[]
    for i in range(0,n):
        a=input()
        row=a.split(" ")
        mat.append(row)
    
    large_sum=0
    for j in range(0,n):
        i=0
        sum=0
        y=j
        while(i<n and y<n):
            sum+=int(mat[i][y])
            y+=1
            i+=1
        
        if(sum>large_sum):
            large_sum=sum
    
    for i in range(0,n):
        j=0
        sum=0
        x=i
        while(j<n and x<n):
            sum+=int(mat[x][j])
            x+=1
            j+=1
        if(sum>large_sum):
            large_sum=sum
    print(large_sum)
    t-=1