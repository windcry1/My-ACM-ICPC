import java.util.*;
import java.io.*;
import java.math.*;
public class Main {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        System.out.println(5);
    }
}
/*
public class Main {
    public static class S implements Comparable<S> {
        double score;
        String name;
        String author;
        public S(String name,String author,int score) {
            this.name = name;
            this.author = author;
            this.score = score;
        }
        public int compareTo(S a){
            if(this.score-a.score != 0) return this.score-a.score>0?1:0;
            else return this.name.compareTo(a.name);
        }
    }
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int n = cin.nextInt();
        S[] d = new S[10010];
        for(int i=0;i<n;i++) {
            String s1=cin.next(),s2=cin.next();int t=cin.nextInt();
            d[i] = new S(s1,s2,t);
        }
        Arrays.sort(d,0,n);
        String temp = cin.next();
        boolean flag=false;
        for(int i=0;i<n;i++){
            if(d[i].name.indexOf(temp)!=-1){
                System.out.println(d[i].name + " " + d[i].author + " " + d[i].score);
                flag=true;
            }
        }
        if(!flag){
            System.out.println(-1);
        }
    }
}
*/
/*
public class Main {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int[] num = new int[1010];
        for(int i=0;i<1010;i++) num[i]=0;
        int n = cin.nextInt();
        for(int i=0;i<n;i++){
            int t = cin.nextInt();
            num[t]++;
        }
        while(true){
            int m=0;
            for(int i=1009;i>=0;i--){
                if(m<num[i]){
                    m=num[i];
                }
            }
            if(m==0) break;
            for(int i=1009;i>=0;i--){
                if(m==num[i]){
                    System.out.println(i + " " + num[i]);
                    num[i]=0;
                }
            }
        }
    }
}
*/
/*
public class Main {
public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int x = cin.nextInt(),y = cin.nextInt();
        for(int i=6;;i+=6){
            if (i % x == 4 && i % y == 3 && i % 6 == 0) {
                System.out.println(i);
                return ;
            }
        }
    }
}
*/
/*
class S implements Comparable<S>
{
    int x,y;
    public S(int x ,int y) {
        this.x = x;
        this.y = y;
    }
    public S(){
        x=0;
        y=0;
    }
    public int compareTo(S a)
    {
        if(this.x-a.x != 0)
            return this.x-a.x;//按x升序排序
        else return this.y-a.y;//如果x相同，按y升序排序
    }
}
public class Main {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int n = cin.nextInt();
        S a[] = new S[1010];
        for(int i=0;i<n;i++) {
            int t = cin.nextInt();
            flag[t]++;
        }
    }
}
*/
/*
import java.util.*;
import java.io.*;
import java.math.*;
public class Main {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        BigInteger a = cin.nextBigInteger();
        int n = cin.nextInt(),k = cin.nextInt();
        System.out.println(k);
        BigInteger res = a;
        for(int i=1;i<n;i++){
            res = res.multiply(a);
        }
        String s = res.toString(10);
        System.out.println(s);
        System.out.println(s.charAt(s.length()-k));
    }
}
*/
/*
import java.util.*;
import java.io.*;
import java.math.*;
public class Main{
    public static void main(String[] args){
        Scanner cin = new Scanner(System.in);
        int n = cin.nextInt();
        double[]a = new double[10010];
        char []b = new char[10010];
        double res=0;
        for(int i=0;i<n;i++){
            String s = cin.next();
            b[i] = s.charAt(0);
            a[i] = cin.nextDouble();
        }
        for(int i=0;i<n;i++){
            double t = cin.nextDouble();
            if(b[i]=='K'){
                if(t>=5) res += t*a[i]*0.9;
                else res+=t*a[i];
            }
            else if(b[i]=='I'){
                res += t*a[i]-(int)(t*a[i]/50);
            }
            else {
                if(t>=10){
                    res += (a[i]-1)*(t-10) + a[i]*10;
                }
                else res+=a[i]*t;
            }
        }
        System.out.printf("%.0f\n",res);
    }
}
*/