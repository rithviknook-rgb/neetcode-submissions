class Solution:
    def calPoints(self, ops: List[str]) -> int:
        stack,res = [],0

        for op in ops:
            if op == "+":
                stack.append(stack[-1]+stack[-2])
                res += stack[-1]
            elif op == 'D':
                stack.append(stack[-1]*2)
                res += stack[-1]
            elif op == "C":
                res -= stack.pop()
            else:
                stack.append(int(op))
                res += stack[-1]
        
        return res