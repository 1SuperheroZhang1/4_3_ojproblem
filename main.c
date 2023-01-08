#include <stdio.h>

/*
 * 1.输入一个整型数，判断是否是对称数，如果是，输出yes，否则输出no，不用考虑这个整型数过大，int类型存不下，不用考虑负值；
      例如 12321是对称数，输出yes，124421是对称数，输出yes，1231不是对称数，输出no
      思想：将整型数逆置，判断逆置后的整型数如果和最初的数相等，那么它就是对称数，如果不相等，就不是对称数。
 * */
int main() {
    int a;
    scanf("%d",&a);
    int i=10000,ret=0,tmp=0;
    int backup_a=a;//备份a
    while(a){
       tmp=(a%10)*i;
       ret+=tmp;
//       tmp=a%10;
//       ret=(ret*10)+tmp;
       a/=10;
       i/=10;
    }
    //判断ret是否和backup_a相等，如果相等，是兑成数，如果不相等，不是对称数。
    if(ret==backup_a){
        printf("yes\n");
    }else{
        printf("no\n");
    }
    return 0;
}

/*
 * 2.利用while或者for循环计算n！的值。提示：n！＝1*2*3…*n
 * */
//int main(){
//    int n;
//    scanf("%d",&n);
//    int result,i;
//    for(i=1,result=1;i<=n;i++){
//        result*=i;
//    }
//    printf("%d\n",result);
//    return 0;
//}

/*
 * 3.某人想将手中的一张面值100元的人民币换成10元、5元、2元和1元面值的票子。
 *   要求换正好40张，且每种票子至少一张。问：有几种换法？
 * */
//int main(){
//    int a,b,c,d,count=0;//a,b,c,d分别表示10元，5元，2元和1元
//    for(a=1;a<=10;a++){//10元的票子最多需要10张
//        for(b=1;b<=20;b++){//5元的票子最多需要20张
//            for(c=1;c<=37;c++){//2元的票子最多需要37张
//                for(d=1;d<=37;d++){//1元的票子最多需要37张
//                    if(a*10+b*5+c*2+d*1==100&&a+b+c+d==40){
//                        count++;
//                    }
//                }
//            }
//        }
//    }
//    printf("%d\n",count);//34
//    return 0;
//}
