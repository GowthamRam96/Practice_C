# Problem Statement
Chef is very fond of horses. He enjoys watching them race. As expected, he has a stable full of horses. He, along with his friends, goes to his stable during the weekends to watch a few of these horses race. Chef wants his friends to enjoy the race and so he wants the race to be close. This can happen only if the horses are comparable on their skill i.e. the difference in their skills is less.

There are N horses in the stable. The skill of the horse i is represented by an integer S[i]. The Chef needs to pick 2 horses for the race such that the difference in their skills is minimum. This way, he would be able to host a very interesting race. Your task is to help him do this and report the minimum difference that is possible between 2 horses in the race.

Input:

First line of the input file contains a single integer T, the number of test cases.
Every test case starts with a line containing the integer N.
The next line contains N space separated integers where the i-th integer is S[i].

Output:

For each test case, output a single line containing the minimum difference that is possible.

Constraints:

1 ≤ T ≤ 10

2 ≤ N ≤ 5000

1 ≤ S[i] ≤ 1000000000


Sample Input 1

1

5

4 9 1 32 13

Sample Output 1 

3



# Sample Solution:
```c
#include<stdio.h>
#include<assert.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

void intSort(int d[],int s){int i=-1,j=s,k,t;if(s<=1)return;k=(d[0]+d[s-1])/2;for(;;){while(d[++i]<k);while(d[--j]>k);if(i>=j)break;t=d[i];d[i]=d[j];d[j]=t;}intSort(d,i);intSort(d+j+1,s-j-1);}

int main(){
  int T, N, S[5000];
  int i, res;

  assert( scanf("%d",&T)==1 );
  assert( 1<=T && T<=10 );
  while(T--){
    assert( scanf("%d",&N)==1 );
    assert( 2<=N && N<=5000 );
    rep(i,N) assert( scanf("%d",S+i)==1 ), assert( 1<=S[i] && S[i]<=1000000000 );
    intSort(S, N); /* sort such as S[0] <= S[1] <= S[2] <= ... */
    res = S[1] - S[0];
    REP(i,2,N) if(res > S[i]-S[i-1]) res = S[i]-S[i-1];
    printf("%d\n",res);
  }

  return 0;
}
```

# My Solution:

```c++
#include <iostream>
using namespace std;

long int Qsort(long int data[],long int left,long int right)
{
long int mid,tmp,i,j;
i = left;
j = right;
mid = data[(left+right)/2];
do
{
while (data[i] < mid)
i++;
while (mid < data[j])
j--;
if (i <= j)
{
tmp = data[i];
data[i] = data[j];
data[j] = tmp;
i++;
j--;
}
}
while (i <= j);
{
if (left < j)
Qsort(data,left,j);
if (i < right)
Qsort(data,i,right);
}
}


int main()
{
long int t,n,i,ans,k;
cin>>t;
for(;t>0;t--)
{
 cin>>n;
 long int a[n];
 for(i=0;i<n;i++)
 cin>>a[i];
 Qsort(a,0,n-1);
 for(i=0;i<n-1;i++)
 {
 k=a[i+1]-a[i];
 if(i==0)
 ans=k;
 if(k<ans)
 ans=k;
 }
 cout<< ans;
}
}

```

![image](https://user-images.githubusercontent.com/84629235/147532098-1908e672-abcc-4be8-8da4-3996f6bb19d5.png)

![image](https://user-images.githubusercontent.com/84629235/147532157-ff578b66-4d28-4a2d-bcde-fe5ed1f078a7.png)
