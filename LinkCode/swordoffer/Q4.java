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
        for(int i=0;i<=length;i++){
            if(string[i] == ' '){
                moveAndreplaceString(string,index,length);
                length+=2;
            }
        }
        return 0;
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
        string[1]=' ';
        string[2]='e';
        string[3]=' ';
        string[4]='l';
        string[5]=' ';
        string[6]='l';
        string[7]=' ';
        string[8]='o';
        new Q4().replaceBlank(string,length);
    }
}

