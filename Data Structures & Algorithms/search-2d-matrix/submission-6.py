class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        m,n=len(matrix),len(matrix[0])
        r,c=m-1,0
        while r>=0 and c<n:
            if target>matrix[r][c]:
                c+=1
            elif target<matrix[r][c]:
                r-=1
            else:
                return True
        return False