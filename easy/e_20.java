/*
 * @Author: EKKO 189890049@qq.com
 * @Date: 2024-03-09 22:04:51
 * @LastEditors: EKKO 189890049@qq.com
 * @LastEditTime: 2024-03-09 22:53:11
 * @Description: 
 * 对java数据结构相关的api需要查询,不是很合理!!
 */
import java.util.Deque;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.Map;
class e_20 {
    
    public boolean isValid(String s) {
        Map<Character, Character> map = new HashMap<Character, Character>();
        Deque<Character> stack = new LinkedList<Character>();
        if(s.length()==0){
            return true;
        }
        stack.push(s.charAt(0));
        map.put(']', '[');
        map.put(')', '(');
        map.put('}', '{');
        Character temp;
        for(int i=1;i<s.length();i++){
            temp=s.charAt(i);
            if(map.get(temp)==null){
                stack.push(s.charAt(i));
            }else if(stack.size()!=0 && stack.getFirst()==map.get(temp)){
                stack.pop();
            }else{
                return false;
            }
        }
        if (stack.size()==0)
            return true;
        
        return false;
    }
}