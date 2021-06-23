class Solution {
    public boolean solution(String a, String b) {
        boolean answer = false;
        String small, big;

        if(a.length()<b.length()){
            small = a;
            big = b;
        }else{
            big = a;
            small = b;
        }

        while(small.length()<big.length()){
            small+=small;
        }

        small=small.substring(0, big.length());
        if(a.equals(b)) answer=true;
        
        return answer;
    }
}