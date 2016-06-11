/*************************************************************************
	> File Name: test.java
	> Author: ZhouPan / github: dreamer2018
	> Mail: zhoupans_mail@163.com
	> Created Time: Mon 16 May 2016 10:19:52 PM CST
    > Function:
 ************************************************************************/
public class test

{

    public static void sss(int[] a,int b)
    {

        System.out.println(a);
        System.out.println(b.hashcode());
        int[] b = {2,3,4};
        a = b;
        a[1]=100;
        System.out.println(a);
    }
    public static void main(String argc[])
    {
        int[] s = {1,1,1};
        int b=100;
        sss(s,b);
        System.out.println(b.hashcode());
        System.out.println(s[1]);
        System.out.println(s);
    }

}
