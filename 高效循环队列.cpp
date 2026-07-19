
//https://leetcode.cn/problems/design-circular-queue/
public class MyCircularQueue {
    int l,r,size,limit;
    private int[] arr;

    public MyCircularQueue(int k) {
        arr = new int[k];
        limit=k;
        
    }
    
    public bool EnQueue(int value) {
        if(IsFull())
        {
            return false;
        }
        else
        {
            arr[r]=value;
            r=r!=limit-1?r+1:0;
            size++;
            return true;
        }
        
    }
    
    public bool DeQueue() {
        if(IsEmpty())
        {
            return false;
        }
        else
        {
            l=l!=limit-1?l+1:0;
            size--;
            return true;
        }
        
    }
    
    public int Front() {
        if(IsEmpty())
        {
            return -1;
        }
        int x;
        x=arr[l];
       
        return x;
        
    }
    
    public int Rear() {
         if(IsEmpty())
        {
            return -1;
        }
        int x;
        int last;
        last=r!=0?r-1:limit-1;
        x=arr[last];
        return x;
    }
    
    public bool IsEmpty() {
        if(size==0)
        {
            return true;
        }
        return false;
    }
    
    public bool IsFull() {
        if(size==limit)
        {
            return true;
        }
        return false;
    }
}
