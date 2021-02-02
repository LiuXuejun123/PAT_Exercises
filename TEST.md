### 1001 害死人不偿命的(3n+1)猜想

卡拉兹(Callatz)猜想：

对任何一个正整数 *n*，如果它是偶数，那么把它砍掉一半；如果它是奇数，那么把 (3*n*+1) 砍掉一半。这样一直反复砍下去，最后一定在某一步得到 *n*=1。卡拉兹在 1950 年的世界数学家大会上公布了这个猜想，传说当时耶鲁大学师生齐动员，拼命想证明这个貌似很傻很天真的命题，结果闹得学生们无心学业，一心只证 (3*n*+1)，以至于有人说这是一个阴谋，卡拉兹是在蓄意延缓美国数学界教学与科研的进展……

我们今天的题目不是证明卡拉兹猜想，而是对给定的任一不超过 1000 的正整数 *n*，简单地数一下，需要多少步（砍几下）才能得到 *n*=1？

### 输入格式：

每个测试输入包含 1 个测试用例，即给出正整数 *n* 的值。

### 输出格式：

输出从 *n* 计算到 1 需要的步数。

### 输入样例：

```in
3
```

### 输出样例：

```out
5
```

### 解法

```c
int main(void){
  int a,i=0;
  scanf("%d",&a);
  while(a>1){
    a=(a%2==0)?a/2:(3*a+1)/2;
    i++;
  }   
  printf("%d",i);
  return 0;
}
```

### **1002** **写出这个数**

读入一个正整数 *n*，计算其各位数字之和，用汉语拼音写出和的每一位数字。

### 输入格式：

每个测试输入包含 1 个测试用例，即给出自然数 *n* 的值。这里保证 *n* 小于 10100。

### 输出格式：

在一行内输出 *n* 的各位数字之和的每一位，拼音数字间有 1 空格，但一行中最后一个拼音数字后没有空格。

### 输入样例：

```in
1234567890987654321123456789
```

### 输出样例：

```out
yi san wu
```

### 解答： 大数（超出内存空间）变成字符串对每一个字符串相加

```C++
#include <iostream>
#define max 3
using namespace std;
const char* pinyin[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
 
int main() {
	char c;
	int sum=0;
	while((c=getchar())!='\n')
		sum += c-'0';
	//cout<<sum;
	int i,d[max];
	for(i=0;i<max&&sum!=0;i++){
		d[i]=sum%10;
		sum/=10;
	}
	i--;
	for(;i>=0;i--){
		if(i==0)
			cout<<pinyin[d[i]]<<endl;
		else
			cout<<pinyin[d[i]]<<" ";
	}
	return 0;
}
```



### 1003我要通过

“**答案正确**”是自动判题系统给出的最令人欢喜的回复。本题属于 PAT 的“**答案正确**”大派送 —— 只要读入的字符串满足下列条件，系统就输出“**答案正确**”，否则输出“**答案错误**”。

得到“**答案正确**”的条件是：

1. 字符串中必须仅有 `P`、 `A`、 `T`这三种字符，不可以包含其它字符；
2. 任意形如 `xPATx` 的字符串都可以获得“**答案正确**”，其中 `x` 或者是空字符串，或者是仅由字母 `A` 组成的字符串；
3. 如果 `aPbTc` 是正确的，那么 `aPbATca` 也是正确的，其中 `a`、 `b`、 `c` 均或者是空字符串，或者是仅由字母 `A` 组成的字符串。

现在就请你为 PAT 写一个自动裁判程序，判定哪些字符串是可以获得“**答案正确**”的。

### 输入格式：

每个测试输入包含 1 个测试用例。第 1 行给出一个正整数 *n* (<10)，是需要检测的字符串个数。接下来每个字符串占一行，字符串长度不超过 100，且不包含空格。

### 输出格式：

每个字符串的检测结果占一行，如果该字符串可以获得“**答案正确**”，则输出 `YES`，否则输出 `NO`。

### 输入样例：

```in
8
PAT
PAAT
AAPATAA
AAPAATAAAA
xPATx
PT
Whatever
APAAATAA
```

### 输出样例：

```out
YES
YES
YES
YES
NO
NO
NO
NO
```





















### 1004成绩排名

读入 *n*（>0）名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。

### 输入格式：

每个测试输入包含 1 个测试用例，格式为

```
第 1 行：正整数 n
第 2 行：第 1 个学生的姓名 学号 成绩
第 3 行：第 2 个学生的姓名 学号 成绩
  ... ... ...
第 n+1 行：第 n 个学生的姓名 学号 成绩
```

其中`姓名`和`学号`均为不超过 10 个字符的字符串，成绩为 0 到 100 之间的一个整数，这里保证在一组测试用例中没有两个学生的成绩是相同的。

### 输出格式：

对每个测试用例输出 2 行，第 1 行是成绩最高学生的姓名和学号，第 2 行是成绩最低学生的姓名和学号，字符串间有 1 空格。

### 输入样例：

```in
3
Joe Math990112 89
Mike CS991301 100
Mary EE990830 95
```

### 输出样例：

```out
Mike CS991301
Joe Math990112
```

### 解法

在数据一组一组进来的过程中就进行判断（结构体或memcpy函数的使用）

* memcpy（目标位置，源地址，地址长度）（cstring 头文件）

```C++
#include<stdio.h>
struct student{
    char name[20];
    char ID[20];
    int score;

};

int n,min,max;
int min_flag=0;
int max_flag=0;
int main()
{
    struct student str[101];
    scanf("%d",&n);
    for (int i = 0; i < n; ++i)
        scanf("%s %s %d",&str[i].name,&str[i].ID,&str[i].score);
    min=str[0].score;
    max=str[0].score;
    for (int j = 1; j < n; ++j) {
        if(max<str[j].score)
        {
            max=str[j].score;
            max_flag=j;
        }
        if(min>str[j].score)
        {
            min=str[j].score;
            min_flag=j;
        }
    }
    printf("%s %s\n",str[max_flag].name,str[max_flag].ID);
    printf("%s %s",str[min_flag].name,str[min_flag].ID);
    return 0;
}

方法二：
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int i;
    int n;
    int score;
    int max=0,min=100;
    cin>>n;
    char a[11],b[11];      //a、b字符串数组用来存放输入的名字、学号
    char aa[11],bb[11];    //aa、bb用来存放成绩最高的人的名字、学号
    char cc[11],dd[11];    //cc、dd用来存放成绩最低的人的名字、学号
    for(i=0;i<n;i++){
        cin>>a;
        cin>>b;
        cin>>score;
        if(score>max){
            max=score;
            memcpy(aa, a, sizeof(a));
            memcpy(bb, b, sizeof(b));
        }
        if(score<min){
            min=score;
            memcpy(cc, a, sizeof(a));
            memcpy(dd, b, sizeof(b));
        }
    }
    cout<<aa<<" "<<bb<<endl;
    cout<<cc<<" "<<dd;

}




```

