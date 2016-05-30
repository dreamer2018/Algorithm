/*************************************************************************
	> File Name: Q5.java
	> Author: ZhouPan / github: dreamer2018
	> Mail: zhoupans_mail@163.com
	> Created Time: Tue 17 May 2016 09:25:36 AM CST
    > Function:
 ************************************************************************/
public class Q5{
     public int countOnes(int num) {
        // write your code here
        int count=0;
        for(int i=0;i<32;i++){
            if( (num & 1) == 1){
                count++;
            }
            num=num>>1;
        }
        return count;
    }
    public static void main(String[] args){
        System.out.println(new Q5().countOnes(32));
    }
}

