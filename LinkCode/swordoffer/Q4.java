/*************************************************************************
	> File Name: Q4.java
	> Author: ZhouPan / github: dreamer2018
	> Mail: zhoupans_mail@163.com
	> Created Time: Mon 16 May 2016 09:13:05 PM CST
    > Function:
 ************************************************************************/
public class Q4{
    public int replaceBlank(char[] string, int length){
        // Write your code here
        if(length ==0){
            return 0;
        }
        for(int i=0;i<=length;i++){
            if(string[i] == ' '){
                this.moveAndreplaceString(string,i,length);
                length+=2;
            }
        }
        for(int i=0;i<length;i++){
            System.out.print(string[i]);
        }
        return length;
    }
    public void moveAndreplaceString(char[] string,int index,int length){
        for(int i=length-1;i>index;i--){
            string[i+2]=string[i];
        }
        string[index]='%';
        string[index+1]='2';
        string[index+2]='0';
    }
    public static void main(String[] args){
        char[] string = new char[100];
        string[0]='h';
        string[1]='e';
        string[2]='l';
        string[3]='l';
        string[4]='o';
        string[5]=' ';
        string[6]='w';
        string[7]='o';
        string[8]='r';
        string[9]='l';
        string[10]='d';

        new Q4().replaceBlank(string,11);
    }
}

