/*
 * @Author: EKKO 189890049@qq.com
 * @Date: 2024-03-08 16:10:59
 * @LastEditors: EKKO 189890049@qq.com
 * @LastEditTime: 2024-03-08 16:45:32
 * @Description:
编写一个函数来查找字符串数组中的最长公共前缀。

如果不存在公共前缀，返回空字符串 ""。
 */
char *longestCommonPrefix(char **strs, int strsSize)
{
    // 时间:O(strSize*n) n为最长公共串的长度
    // 空间:O(1) 
    int size = 0;
    while (1)
    {
        char target = strs[0][size];
        if (target == '\0')
        {
            break;
        }
        for (int i = 1; i < strsSize; i++)
        {
            if (strs[i][size] != target)
            {
                goto re;
            }
        }
        size++;
    }
re:
    strs[0][size] = '\0';
    return strs[0];
}