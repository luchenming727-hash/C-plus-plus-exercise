//测试链接: https://leetcode.cn/problems/find-the-index-of-the-first-occurrence-in-a-string/
public class Solution {
    public int StrStr(string haystack, string needle) {
        if(judge(needle))return 0;
        if(judge(haystack))return -1;
        return Kmp(haystack.ToCharArray(), needle.ToCharArray());
        
    }
    public static int Kmp(char[] s1, char[] s2) 
    {
        // s1中当前比对的位置是x
        // s2中当前比对的位置是y
        int n=s1.Length,m=s2.Length,x=0,y=0;
        int[] next=NextArray(s2,m);
        while(x<n&&y<m)
        {
            if(s1[x]==s2[y])
            {
                x++;
                y++;
            }
            else if(y==0)
            {
                x++;
            }
            else
            {
                y=next[y];
            }
        }
        return y==m?x-y:-1;
        
    }
    public static int[] NextArray(char[] s, int m) 
    {
        if(m==1)
        {
            return new int[] { -1 };
        }
        int[] next = new int[m];
        next[0]=-1;
        next[1]=0;
        // i表示当前要求next值的位置
        // cn表示当前要和前一个字符比对的下标
        int i=2,cn=0;
        while(i<m)
        {
            if(s[i-1]==s[cn])
            {
                next[i++]=++cn;
            }
            else if(cn>0)
            {
                cn=next[cn];
            }
            else
            {
                next[i++]=0;
            }
        }
        return next;
    }
     public static bool judge(string str)
     {
       
        return (str==null||str.Length==0);
     }
}

