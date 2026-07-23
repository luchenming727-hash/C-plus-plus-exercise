
//https://leetcode.cn/problems/design-circular-deque/description/
public class MyCircularDeque {
    private int[] a;
    private int l;     // 头指针 (Front)
    private int r;     // 尾指针 (Rear)
    private int size;  // 当前元素个数
    private int limit; // 队列最大容量

    public MyCircularDeque(int k) {
        a = new int[k];
        l = 0;
        r = 0;
        size = 0;
        limit = k;
    }
    
    public bool InsertFront(int value) {
        if (IsFull()) return false;

        a[l] = value;
        size++;

        if (l == 0) {
            l = limit - 1;
        } else {
            l--;
        }
        return true;
    }

    public bool InsertLast(int value) {
        if (IsFull()) return false;
        else if(r==limit-1)
        {
            r=0;
            a[r]=value;
            size++;
            return true;
        }
        else
        {
            r++;
            a[r]=value;
            size++;
            return true;
        }
    }
    
    public bool DeleteFront() {
        if (IsEmpty()) return false;

        if (l == limit - 1) {
            l = 0;
        } else {
            l++;
        }
        size--;
        return true;
    }
    
    public bool DeleteLast() {
        if (IsEmpty()) return false;

        if (r == 0) {
            r = limit - 1;
        } else {
            r--;
        }
        size--;
        return true;
    }
    
    public int GetFront() {
        if (IsEmpty()) return -1;

        if (l == limit - 1) {
            return a[0]; 
        } else {
            return a[l + 1];
        }
    }
    
    public int GetRear() {
        if (IsEmpty()) return -1;

        // 修正：r 为 0 时尾巴在 limit - 1
        return a[r];
    }
    
    public bool IsEmpty() {
        return size == 0;
    }
    
    public bool IsFull() {
        return size == limit;
    }
}
