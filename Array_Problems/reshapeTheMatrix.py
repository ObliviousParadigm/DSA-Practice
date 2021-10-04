class Solution:
    def matrixReshape(self, mat: List[List[int]], r: int, c: int) -> List[List[int]]:
        l = list()
        
        for i in mat:
            l.extend(i)
        
        if(r*c == len(l)):
            return [l[i*c : (i+1)*c] for i in range(r)]
        else:
            return mat