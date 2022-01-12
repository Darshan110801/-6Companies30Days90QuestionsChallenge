def rotate(matrix): 
    l = len(matrix)
    for i in range(l):
        matrix[i] = matrix[i][::-1]
    for i in range(l):
        for j in range(i+1,l):
            temp = matrix[i][j]
            matrix[i][j]=matrix[j][i]
            matrix[j][i] = temp
            
