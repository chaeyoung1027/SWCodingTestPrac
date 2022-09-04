import java.util.*;
import java.util.ArrayList;

public class Solution {
    public int[] solution(int []arr) {
        ArrayList<Integer> ans = new ArrayList<Integer>();
        int num = -1;
        
        for(int i = 0; i<arr.length; i++){
            if(arr[i]!=num){
                ans.add(arr[i]);
                num=arr[i];
            }
        }
        int answer[] = new int[ans.size()];
        for(int i=0; i<answer.length; i++){
            answer[i] = ans.get(i); 
        }

        return answer;
    }
}
