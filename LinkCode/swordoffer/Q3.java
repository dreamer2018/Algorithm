/*************************************************************************
	> File Name: Q3.java
	> Author: ZhouPan / github: dreamer2018
	> Mail: zhoupans_mail@163.com
	> Created Time: Mon 16 May 2016 12:07:04 AM
    > Function:单例问题
 ************************************************************************/
public class Q3{
    public static Q3 instance= null;
    public static Q3 getInstance() {
        // write your code here
        return instance == null ? instance : new Q3();
    }
    public static void main(String[] args){
        Q3 q1=Q3.getInstance();
        Q3 q2=Q3.getInstance();
        if(q1 == q2){
            System.out.println("True");
        }else{
            System.out.println("False");
        }
    }
}

