
//https://leetcode.cn/problems/implement-queue-using-stacks/
public class MyQueue {
    private Stack<int> inStack;
    private Stack<int> outStack;

    public MyQueue() {
        inStack = new Stack<int>();
        outStack = new Stack<int>();
    }
    
    // 辅助函数：当 outStack 为空时，把 inStack 的元素倒入 outStack
    private void InToOut() {
        if (outStack.Count == 0) {
            while (inStack.Count > 0) {
                outStack.Push(inStack.Pop());
            }
        }
    }
    
    public void Push(int x) {
        inStack.Push(x); 
        InToOut();      
    }
    
    public int Pop() {
        InToOut();
        return outStack.Pop();
    }
    
    public int Peek() {
        InToOut();
        return outStack.Peek();
    }
    
    public bool Empty() {
        // 当两个栈都为空时，队列才为空
        return inStack.Count == 0 && outStack.Count == 0;
    }
}
