import java.util.*;

class Solution1 {
    public int solution(int[] arr, int s) {
        int length=987987987;

        for(int i=0; i< arr.length; i++){
            int cnt=0, sum=0;
            for(int j=i; j<arr.length; j++){
                cnt++;
                sum+=arr[j];
                if(sum<s && cnt < length){
                    length=cnt;
                    break;
                }
            }
        }
        return length;
    }
}


// #include <stdio.h>

// int n;
// int arr[100010];

// int getResult(int start, int end){
//   if(start>=end) return arr[start];
  
//   int mid = (start+end)/2;
//   int left = getResult(start, mid);
//   int right = getResult(mid+1, end);
  
//   int leftSum=0, leftMax=-987987987;
//   for(int i=mid; i>=start; i--){
//     leftSum+=arr[i];
//     if(leftSum>leftMax) leftMax=leftSum;
//   }
  
//   int rightSum=0, rightMax=-987987987;
//   for(int i=mid+1; i<=end; i++){
//     rightSum+=arr[i];
//     if(rightSum>rightMax) rightMax=rightSum;
//   }
  
//   int myMax = leftMax+rightMax;
//   if(left>right && left>myMax) return left;
//   else if(right>left && right>myMax) return right;
//   else return myMax;
// }

// int main(){
//   scanf("%d", &n);
//   for(int i=0; i<n; i++) scanf("%d", &arr[i]);
  
//   printf("%d", getResult(0, n-1));
  
//   return 0;
// }