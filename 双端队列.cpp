
//https://leetcode.cn/problems/design-circular-deque/description/
public class MyCircularDeque {
    LinkedList<int> list = new LinkedList<int>();
    int size;
    int limit;



    public MyCircularDeque(int k) {
        limit=k;
        size=0;
        
    }
    
    public bool InsertFront(int value) {
        if(IsFull())
        {
            return false;
        }
        else
        {
            list.AddFirst(value);
            size++;
            return true;
        }
        
    }
    
    public bool InsertLast(int value) {
          if(IsFull())
        {
            return false;
        }
        else
        {
            list.AddLast(value);
            size++;
            return true;
        }
        
    }
    
    public bool DeleteFront() {
        if(IsEmpty())
        {
            return false;
        }
        else
        {
            list.RemoveFirst();
            size--;
            return true;
        }
        
    }
    
    public bool DeleteLast() {
         if(IsEmpty())
        {
            return false;
        }
        else
        {
            list.RemoveLast();
            size--;
            return true;
        }
        
    }
    
    public int GetFront() {
        if(IsEmpty())
        {
            return -1;
        }
        else
        {
            int x=list.First.Value;
            return x;
        }

        
    }
    
    public int GetRear() {
        if(IsEmpty())
        {
            return -1;
        }
        else
        {
            int x=list.Last.Value;
            return x;
        }

        
    }
    
    public bool IsEmpty() {
        if(size==0)
        return true;
        else
        return false;
        
    }
    
    public bool IsFull() {
        if(size==limit)
        {
            return true;
        }
        else
        return false;
        
    }
}
