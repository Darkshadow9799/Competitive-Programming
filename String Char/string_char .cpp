#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int size,i,j;
    scanf("%d",&size);
    char a[size];
    scanf("%s",a);
    int Q;
    scanf("%d",&Q);
    int P[Q],m[Q];
    for(i=0;i<Q;i++)
    {
        scanf("%d",&P[i]);P[i]--;
    }
	
	i=0;
	m[0]=1;
    for(j=1;j<P[i];j++)
    {
        if(i>=Q)
		{
			break;
		}
        if(a[j]==a[P[i]])
        {
            m[i]++;
        }
		if(j==(P[i]-1))
		{
			i++;
			j=1;
			m[i]=1;
		}
	}
	for(i=0;i<Q;i++)
	{
		printf("%d\n",m[i]);
	}
    return 0;
}
