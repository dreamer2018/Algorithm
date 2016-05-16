/*************************************************************************
	> File Name: Q2.java
	> Author: ZhouPan / github: dreamer2018
	> Mail: zhoupans_mail@163.com
	> Created Time: Sun 15 May 2016 11:16:21 PM
    > Function:
 ************************************************************************/
public class Q2{
    public int fibonacci(int n){
        int sum=0;
        if(n<=0){
            return -1;
        }else if(n==1){
            return 0;
        }
        int[] a = new  int[n];
        a[0]=0;
        a[1]=1;
        for(int i=2;i<n;i++){
            a[i]=a[i-1]+a[i-2];

        }
        return a[n-1];
    }
    public static void main(String[] args){
        System.out.println(new Q2().fibonacci(3));
    }
}

