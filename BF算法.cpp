//测试链接: https://leetcode.cn/problems/find-the-index-of-the-first-occurrence-in-a-string/
public class Solution {
    public int StrStr(string haystack, string needle) {
        // 边界条件处理
        if (string.IsNullOrEmpty(needle)) return 0;
        if (string.IsNullOrEmpty(haystack) || haystack.Length < needle.Length) return -1;

    	int n=haystack.Length;
		int m=needle.Length; 

        // i 是大文本 haystack 的指针
        // j 是目标词 needle 的指针
        int i=0,j=0;
        while(i<n&&j<m)
        {
        	if(haystack[i]==needle[j])
        	{
        		i++;
        		j++;
			}
			else
			{
				i=i-j+1;
				j=0;
			}
		}
		return j==m?i-j:-1
    }
}
