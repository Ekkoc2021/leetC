
/**
给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。
回文数
是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
*/
typedef char bool;
bool isPalindrome(int x)
{
    // 负数一定不是,有符号类型一定不会超过无符号类型的长度
    // 余数是0一定不是
    if (x < 0 || (x != 0 && x % 10 == 0))
        return 0;

    int remainder = 0; // 余数
    int x2 = 0;        // 计算回文值
    while (x > x2)
    {
        remainder = x % 10;
        x2 = x2 * 10 + remainder;
        x = x / 10;
        if (x == x2)
        {
            return 1;
        }
    }

    // 处理长度为奇数情况
    if (x * 10 + remainder == x2)
    {
        return 1;
    }

    return 0;
}