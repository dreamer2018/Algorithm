/*************************************************************************
	> File Name: relist.java
	> Author: ZhouPan / github: dreamer2018
	> Mail: zhoupans_mail@163.com
	> Created Time: Tue 10 May 2016 12:29:06 PM
    > Function:逆序对 http://www.lintcode.com/zh-cn/problem/reverse-pairs/
 ************************************************************************/
public class relist{
    public long reversePairs(int[] A){
        long count=0;
        for(int i=0;i<A.length;i++){
            for(int j=i;j<A.length;j++){
                if(A[i]>A[j]){
                    count++;
                }
            }
        }
        return count;
    }
    public static void main(String[] argv){
        int[] A = {9,2,4,1,3,5};
        long result=new relist().reversePairs(A);
        System.out.println(result);
    }
}


