
//https://leetcode.cn/problems/implement-stack-using-queues/
public class MyStack {
    private Queue<int> queue;

    public MyStack() {
        queue = new Queue<int>();
    }
    
    public void Push(int x) {
        int t = queue.Count; // 1. 获取当前大小 (Count)
        queue.Enqueue(x);    // 2. 入队 (Enqueue)
        for (int i = 0; i < t; i++) {
            // 3. 把前面的元素依次出队 (Dequeue) 并重新入队 (Enqueue)
            queue.Enqueue(queue.Dequeue());
        }
    }
    
    public int Pop() {
        return queue.Dequeue(); // 出队并返回
    }
    
    public int Top() {
        return queue.Peek();    // 查看队头
    }
    
    public bool Empty() {
        return queue.Count == 0; // 判空
    }
}
