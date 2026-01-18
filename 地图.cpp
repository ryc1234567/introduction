#include <bits/stdc++.h>
#pragma  G++ optimize(3)
#include <windows.h>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0) 
using namespace std;
char a[1001][1001];
int main()
{
	ios:sync_with_stdio();
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cout<<"输入行数和列数（行数=列数)"<<endl;
	cin>>n>>m;
	int x=2,y=2;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(i==1||i==n||j==1||j==n)
			{
				a[i][j]='*';
			}
			else a[i][j]=' ';
		}
	 } 
	 char k='#';
	 a[x][y]=k;
	 int cnt=1,ant=1;
	 cout<<"wasd移动，q切换皮肤,e切换地图,x退出"<<endl;
	 while(1)
	 {char z;if(z=='q')
	 {
	 	cout<<"输入你想要的字符，只能输一个非中文字符"<<endl;
	 	cin>>k;
	 	cout<<"切换成功，下个操作后显示"<<endl;
	 	
	 }
	{
		
		 
	}
	if(z=='e')
	{
		ant++;
		if(ant%4==1)
		{
			for(int i=1;i<=n;i++)
			{
			for(int j=1;j<=m;j++)
			{
			if(i==1||i==n||j==1||j==n)
			{
				a[i][j]='*';
			}
			else a[i][j]=' ';
			}
	 		}
			 a[x][y]=k; 
		}
		if(ant%4==2)
		{
			for(int i=1;i<=n;i++)
			{
			for(int j=1;j<=m;j++)
			{
			if(i==1||i==n||j==1||j==n)
			{
				a[i][j]='*';
			}
			else a[i][j]=' ';
			}
	 		}
			 a[x][y]=k;
			 for(int i=1;i<=n;i+=3)
			 {
			 	for(int j=1;j<=m;j+=2)
			 	{
			 		if(i!=x||j!=y)
			 		{
			 			a[i][j]='*';
					 }
				 }
			  } 
		}
		if(ant%4==0)
		{
			for(int i=1;i<=n;i++)
			{
			for(int j=1;j<=m;j++)
			{
			if(i==1||i==n||j==1||j==n)
			{
				a[i][j]='*';
			}
			else a[i][j]=' ';
			}
	 		}
			 a[x][y]=k;
			 for(int i=1;i<=n;i+=2)
			 {
			 	for(int j=1;j<=m;j+=3)
			 	{
			 		if(i!=x||j!=y)
			 		{
			 			a[i][j]='*';
					 }
				 }
			  } 
		}
		if(ant%4==3)
		{
			for(int i=1;i<=n;i++)
			{
			for(int j=1;j<=m;j++)
			{
			if(i==1||i==n||j==1||j==n)
			{
				a[i][j]='*';
			}
			else a[i][j]=' ';
			}
	 		}
			 a[x][y]=k;
			 for(int i=1;i<=n;i+=3)
			 {
			 	for(int j=1;j<=m;j+=4)
			 	{
			 		if(i!=x||j!=y)
			 		{
			 			a[i][j]='*';
					 }
				 }
			  } 
			  for(int i=1;i<=n;i+=4)
			 {
			 	for(int j=1;j<=m;j+=2)
			 	{
			 		if(i!=x||j!=y)
			 		{
			 			a[i][j]='*';
					 }
				 }
			  } 
		}
		 
		 
	}
	 	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	 } 
	
	cin>>z;
	if(z=='x')
	{
		return 0;
	 } 
	if(z=='a')
	{
		if(a[x][y-1]=='*')
		{system("cls");
			continue;
		}
		a[x][y-1]=k;
		a[x][y]=' ';
		y-=1;
	}
	if(z=='d')
	{
		if(a[x][y+1]=='*')
		{system("cls");
			continue;
		}
		a[x][y+1]=k;
		a[x][y]=' ';
		y+=1;
	}
	if(z=='w')
	{
		if(a[x-1][y]=='*')
		{system("cls");
			continue;
		}
		a[x-1][y]=k;
		a[x][y]=' ';
		x-=1;
	}
	if(z=='s')
	{
		if(a[x+1][y]=='*')
		{system("cls");
			continue;
			
		}
		a[x+1][y]=k;
		a[x][y]=' ';
		x+=1;
	}
	
	system("cls"); 
	 }
    return 0;
}




