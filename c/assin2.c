#include <stdio.h>
int main()
 {
    // int x=10,y=20,z=30;
    // x=y=111,z=333;
    // printf("“%d %d %d “",x,y,z);
    //op : 111 111 333

    // int x=10,y=20,z=30;
    // x=(y=111,z=333);
    // printf("“%d %d %d “",x,y,z);
    // op : 333 111 333

    // int x=1,y=2;
    // x,y = 10,20,30;
    // printf("“%d %d “",x,y);
    //op : 1 10 

    // int x=5,y=10,z,p;
    // z=(x++ , ++y);
    // p=x , y;
    // printf("“ %d %d %d %d”",x,y,z,p);
    // op : 6 11 11 6

    // int x,y=; 
    // x + y ==10+20;
    // printf("“ %d %d ”",x,y);
    // op: gardb 1

    // int x=11,y=6,z;
    // z=x= 50 || y!=4;
    // printf("“ %d %d %d”",x,y,z);
    //op : 1 6 1

    // int x=11,y=6,z;
    // z=(x=50) || y!=z;
    // printf("“ %d %d %d”",x,y,z);
    //op : 50 6 1

    // int x=11,y=6,z;
    // z=x=0 || (y=444);
    // printf("“ %d %d %d”",x,y,z);
    //op : 1 444 1

    // int x=11,y=6,z;
    // z=(x=0) || (y=444);
    // printf("“ %d %d %d”", x , y , z);
    //op: o 444 1

    // int x,y,z;
    // x=y=z=2;
    // x=!!x;
    // y=x==0 && z<2;
    // printf("“ %d %d %d”", x, y, z);
    //op : 1 0 2

    // int i=10;
    // float j=20.9;
    // printf("“ %d”", sizeof(i+j));
    //op : 4

    // int x=11,y=6,z;
    // z=x==5 || y !=4;
    // printf("“ %d”", z);
    //op : 1

    // int x=10,y=5,p,q;
    // p=x>9;
    // q=x>3 && y!=3;
    // printf("“ p = %d q= %d” ", p , q) ;
    //op : p = 1 q= 1

    // int a=30,b=40,x;
    // x=(a!=10) && (b=50);
    // printf( "“%d %d %d”", a , b , x);
    //op: 30 50 1

    // int a=100,b=200,c;
    // c=(a=100 || b>200);
    // printf("“ %d %d %d”" , a , b , c);
    //op : 1 200 1

    // int x=11,y=6,z;
    // z=x==6 || y!=4;
    // printf("“ %d %d %d” ", x , y , z);
    //op : 11 6 1

    // int x=10,y=-20;
    // x=!x ;
    // y=!y ; 
    // printf("“ %d %d”",x,y);
    //op : 0 0


    // int x=0,y=1;
    // y=!x;
    // x=!y;
    // printf( "“%d %d”",x,y);
    //op : 0 1

    // int x=3,y=4,z=4;
    // printf("“ Ans is %d”",(z>=y>=x?100:200));
    //z>=y>=x means z>=y && y>=x
    //op : 200


    // int i=-4,j,num=10;
    // j=i % -3;
    // j=( j ? 0 : num * num);
    // printf("“ j= %d ”",j);
    //op : j= 0 


    // int k=12 ,n=30;
    // k=( k >5 && n=4 ? 100:200);
    // printf( "“k=%d”",k);
    // in && op we cant assign the value: error
    // k=( k >5 && (n=4) ? 100:200); this is now correct
    //op : 100 


    // int c=0, d=5, e=10,a;
    // a=c > 1 ? d > 1 || e>1 ? 100:200:300;
    // printf("“a=%d”",a);
    //op : 300

    // int a=10 , b=10;
    // printf("“ans=%d”", a>b ? a *a : b/b );
    //op : 1

    // int x=10,y=20;
    // x=!x;
    // y=!x && !y;
    // printf("“ x= %d y= %d”",x,y);
    //op : 0 0

    // int y;
    // y=sizeof(sizeof(sizeof(7.0)));
    // printf("“ %d”",y);
    // default is double (7.0) op : 8

    // int a=5,b=10,z;
    // z*= a*b;
    // printf("“ %d ”",z);

    // char a='a';
    // printf("%d%d%d",sizeof(a),sizeof('a'),sizeof(char));

    // int x=10,y=20,z=30;
    // x=(y=111,x=222,z=333);
    // printf("“ %d %d %d”",x,y,z);
    // op : 333 111 333


    // int x=11,y=6,z;
    // z=(x=50) || y!=z;
    // printf("“ %d %d %d”",x,y,z);
    //op : 50 6 1

    // printf("“ %d”",10 ? 0 ? 5: 11 : 12);
    //op : 11

    // char ch = '\0';
    // printf("“%d%d”",sizeof(NULL),sizeof(ch));
    //op : 84

    // int k=12, n=30;
    // k= ( k > 5 && (n=4) ? 100 : 200 );
    // printf("“ %d %d”",k,n);
    // op : 100 4
    
   
    // int x=3 , y=4, z=4;
    // printf("“ Ans is %d”", z >= y && y>= x?1 : 0);
    ///op : 1
    
    // char arr[12];
    // scanf("%[^\n]s",arr);
    // printf("%s",arr);
    //complite sentence

    // char x[100];
    // char y[100];
    // int x;
    // printf("%d",scanf("%d",&x));
    //in put retuns all ways no of successfull inputs

    
  
   




   return 0;
 }