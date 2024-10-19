/*#include <stdio.h>
int main()
{
	int c1, c2;
	c1=97; c2=98;
	printf("%c,%c", c1, c2);
	printf("%d,%d", c1, c2);
	return 0;
}
在此基础上:
1）加一个printf语句，并运行之。
printf(“ % d, % d”, c1, c2);
2）再将第二行改为：
int c1, c2;
再使之运行。
3）再将第三行改为：
c1 = 300; c2 = 400;

#include <stdio.h>
int main()
{
	char c1 = 'a', c2 = 'b', c3 = 'c', c4 = '\101', c5 = '\106';
	printf("a%cb%c\tabc\n", c1, c2, c3);
	printf("\t\b % c % c", c4, c5);
	return 0;
}

#include <stdio.h>
int main()
{
	int  i, j, m= 0, n= 0;
	i = 8; j = 10;
	m += i++; n -= --j;
	printf("i=%d,j=%d,m=%d,n=%d", i, j, m, n);
	return 0;
}
*/
#include <stdio.h>
int main()
{
	char c1, c2, c3, c4, c5;
	c1 = 67; c2 = 104; c3 = 105; c4 = 110; c5 = 97;
	c1 = c1 + 5; c2 = c2 + 5; c3 = c3 + 5; c4 = c4 + 5; c5 = c5 + 5;
	//printf("%c,%c,%c,%c,%c",c1, c2, c3, c4, c5);
	printf("\t\b%c%c%c%c%c",c1,c2,c3,c4,c5);
	return 0;
}
/*
#include <stdio.h>
int main()
{
	float z,x = 3.5, y = 2.5, a=2, b= 3;
	z = (a+b)/2+(int)x%(int)y;
	printf(" z=% d", z);
	return 0;
}
#include <stdio.h>
int main()
{
	int  a = 10;
	a+=a-=a*=a;
	printf("a = % d", a);
	return 0;

}*/