#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <malloc.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
#include <regex.h>

typedef double              db;
typedef float               fl;

typedef char                s1;
typedef int                 s4;
typedef long                s8;
typedef long long           s16;

typedef unsigned char       u1;
typedef unsigned int        u4;
typedef unsigned long       u8;
typedef unsigned long long  u16;

typedef bool                bl;

#define ROUND_THRESHHOLD	(0.5)                                           //  四捨五入の閾値
#define MIN_CODE_HANKAKU    (0x21)                                          //  半角文字を表すUTF-8文字コードの16進数最小値
#define MAX_CODE_HANKAKU    (0x7E)                                          //  半角文字を表すUTF-8文字コードの16進数最大値

#define print(pargs) printf pargs                                                                       // 標準出力

#define I(x) scanf("%d",&x);                                                                            // 標準入力（整数1）
#define FL(x) scanf("%f",&x);                                                                           // 標準入力（実数1）
#define I2(x, y) scanf("%d %d",&x,&y);                                                                  // 標準入力（整数2）
#define I3(x, y, z) scanf("%d %d %d",&x,&y,&z);                                                         // 標準入力（整数3）
#define In(A,N) for(int i = 0; i < N; i++){if(i == N-1){scanf("%d",&A[i]);}else{scanf("%d ",&A[i]);}}   // 標準入力（整数配列N）

#define nxt print(("\n"));                                                                              // 改行（;不要）

#define Pa(i,A,N,is_nxt) rp0(i,N){if(i == N-1){print(("%d",A[i]));nxt}else{print(("%d ",A[i]));if(is_nxt==true)nxt}}
                                                                                                        // 標準出力（配列,改行の有無）

#define rp0(i,n) for(i = 0; i < n; ++i)                                                                 // forループ（0からN-1）
#define rp1(i,n) for(i = 1; i <= n; ++i)                                                                // forループ（1からN）
#define rpc(i,st,en,di) for(i = st; i <= en; i += di)                                                           
                                                                                                        // forループ（stからenまでdiカウント）

void nmain(void);                                                                                       // main（コマンドライン引数無）
void cmain(int cargc, char* cargv[]);                                                                   // main（コマンドライン引数有）

void getstr(u1 S[]){int i = 0; do{S[i] = getchar(); if(S[i] == '\n'){S[i] = '\0'; break;} i++; }while(S[i] != '\n');};
                                                                                                        // 文字列入力

void is_yn(bool flag){if(flag == true){print(("Yes\n"));}else{print(("No\n"));}};                       // Yes or No

void nmain(void)
{
    // int i,N;
    // int A[N+1];

    // I(N)
    // In(A,N)
    // Pa(i,A,N,true);
    // Pa(i,A,N,false);

    // u1 s[100];
    // getstr(s);
    // print(("String : %s\n",s));

    bl flag1 = true;
    bl flag2 = false;

    is_yn(flag1);
    is_yn(flag2);
}

void cmain(int cargc, char* cargv[])
{
    /*  do nothing  */
    return;
}

int main(int argc, char* argv[])
{
    if(argc == 1){
        nmain();
    }else{
        cmain(argc, argv);
    }

    return 0;
}
