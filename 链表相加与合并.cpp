
//合并两个有序链表，https://leetcode.cn/problems/merge-two-sorted-lists/ 
public class Solution {
    public ListNode MergeTwoLists(ListNode list1, ListNode list2) {
         if (list1 == null || list2 == null) {
    return list1 == null ? list2 : list1;
         }
        ListNode head=list1.val <= list2.val ? list1 : list2;
        ListNode cur1=head.next;
        ListNode cur2=head==list1?list2:list1;
        ListNode pre=head;
       

        while(cur1!=null&&cur2!=null)
        {
            if(cur1.val<=cur2.val)
            {
               pre.next=cur1;
               cur1=cur1.next;
            }
            else
            {
                pre.next=cur2;
                cur2=cur2.next;
            }
            pre=pre.next;
        }
        pre.next=cur1!=null?cur1:cur2;
        return head;
    }
}

//两数之和，https://leetcode.cn/problems/add-two-numbers/ 
public class Solution {
    public ListNode AddTwoNumbers(ListNode l1, ListNode l2) {
    ListNode ans=null;
    ListNode cur=null;
    int carry=0;
    for(int sum,val;l1!=null||l2!=null;l1=l1!=null?l1.next:null,l2=l2!=null?l2.next:null)
    {
       sum=(l1==null?0:l1.val)+(l2==null?0:l2.val)+carry;
       val=sum%10;
       carry=sum/10;
       if(ans==null)
       {
        ans=new ListNode(val);
        cur=ans;
       }
       else
       {
        cur.next=new ListNode(val);
        cur=cur.next;
       }
    }
    if(carry==1)
    {
        cur.next=new ListNode(1);
    }
    return ans;
    }
}
