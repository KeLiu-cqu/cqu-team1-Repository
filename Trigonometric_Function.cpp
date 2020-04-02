// Trigonometric_Function.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>

using namespace std;
#define N 5

class Trigonmetric_Func//���Ǻ�����
{
	public:
		double Radian;//��������
		Trigonmetric_Func(double x)
		{
			Radian=x;
		}
		double sin(double x);
		double cos(double x);
		double tan(double x);
		double cot(double x);
		double My_pow(double x,int n);//�Զ���x��n�η�
		
};



double Trigonmetric_Func::sin(double x)
{
	double sum=0;//̩��չ��ʽ֮��
	int n_n=0;//̩��չ��ʽÿ��ǰ��������
	for(int n=0;n<N;n++)//5��ѭ������5��̩��չ��ʽ֮��
	{
		int m=1;//̩��չ��ʽ��ĸ
		double X;//̩��չ��ʽÿ��ķ���
		for(int j=1;j<=2*n+1;j++)//̩��չ��ʽ��ĸ�׳�
		{
			m*=j;
		}
		n_n=(int)My_pow(-1,n);//̩��չ��ʽÿ��ǰ�������ţ�����ż����
		X=My_pow(x,2*n+1);//̩��չ��ʽÿ��ķ��ӣ�X��(2*n+1)�η���
		sum+=(X/m)*n_n;//̩��չ��ʽ֮�ͼ��������Һ����Ľ���ֵ
		//cout<<"m="<<m<<endl;
		//cout<<"n_n="<<n_n<<endl;
		
		
	}
	return sum;
	
}

double Trigonmetric_Func::cos(double x)
{
	double sum=0;//̩��չ��ʽ֮��
	int n_n=0;//̩��չ��ʽÿ��ǰ��������
	for(int n=0;n<N;n++)//5��ѭ������5��̩��չ��ʽ֮��
	{
		int m=1;//̩��չ��ʽ��ĸ
		double X;//̩��չ��ʽÿ��ķ���
		for(int j=1;j<=2*n;j++)//̩��չ��ʽ��ĸ�׳�
		{
			m*=j;
		}
		n_n=(int)My_pow(-1,n);//̩��չ��ʽÿ��ǰ�������ţ�����ż����
		X=My_pow(x,2*n);//̩��չ��ʽÿ��ķ��ӣ�X��(2*n)�η���
		sum+=(X/m)*n_n;//̩��չ��ʽ֮�ͼ��������Һ����Ľ���ֵ
		
		
	}
	return sum;
	
}


double Trigonmetric_Func::tan(double x)
{
	double sum=0;//̩��չ��ʽ֮��
		double m=0.00000;//̩��չ��ʽ��ĸ

	for(int n=1;n<=N;n++)//5��ѭ������5��̩��չ��ʽ֮��
	{
		double X;//̩��չ��ʽÿ��ķ���
		if(n==1)
		{
			m=1;
			
		}
		if(n==2)
		{
			m=(double)1/3;
			
		}
		if(n==3)
		{
			m=(double)2/15;
			
		}
		if(n==4)
		{
			m=(double)17/315;
			
		}
		if(n==5)
		{
			m=(double)62/2835;
			
		}
		
		X=My_pow(x,2*n-1);//̩��չ��ʽÿ��ķ��ӣ�X��(2*n)�η���
		
		sum+=(X*m);//̩��չ��ʽ֮�ͼ��������Һ����Ľ���ֵ
		
		
	}
	return sum;
	
}


double Trigonmetric_Func::cot(double x)
{
	double sum=0;//̩��չ��ʽ֮��
		double m=0.00000;//̩��չ��ʽ��ĸ

	for(int n=0;n<N;n++)//5��ѭ������5��̩��չ��ʽ֮��
	{
		double X;//̩��չ��ʽÿ��ķ���
		if(n==0)
		{
			m=1;
			
		}
		if(n==1)
		{
			m=(double)-1/3;
			cout<<"m="<<m<<endl;
		}
		if(n==2)
		{
			m=(double)-1/45;
			cout<<"m="<<m<<endl;
		}
		if(n==3)
		{
			m=(double)-2/945;
			cout<<"m="<<m<<endl;
		}
		if(n==4)
		{
			m=(double)-1/4725;
			cout<<"m="<<m<<endl;
		}
		
		X=My_pow(x,2*n-1);//̩��չ��ʽÿ��ķ��ӣ�X��(2*n)�η���
		
		sum+=(X*m);//̩��չ��ʽ֮�ͼ��������Һ����Ľ���ֵ
		
		
	}
	return sum;
	
}


double Trigonmetric_Func::My_pow (double x,int y)
{
	double x_x=x;
	if(y>=0)
	{
		if(y==0)
		{
			x_x=1;	
		}
		else
		{
			double accumulate=x;
			for(int j=1;j<=y-1;j++)
			{
				accumulate=accumulate*x;
			}
			x_x=accumulate;
		}
		
	}
	if(y<0)
	{
		double accumulate=x;
		for(int j=-2;j>=y;j--)
			{
				accumulate=x*accumulate;
			}
		x_x=1/accumulate;
	}
	return x_x;
}




void Show_Input(int &number,double &x)
{
	
	cout<<"1��sin(x);"<<endl;
	cout<<"2��cos(x);"<<endl;
	cout<<"3��tan(x);"<<endl;
	cout<<"4��cot(x);"<<endl;
	cout<<"�������Ӧ���Ǻ���ǰ����ţ�ѡ����Ҫ��������Ǻ�������"<<endl;
	cin>>number;
	cout<<"�����뻡��ֵ��";
	cin>>x;
	
}

int main()
{
	int number;//���Ǻ���ѡ�����
	double x;//���������Ǻ�������ֵ
	double result;//���Ǻ���������

	
	
	
	Show_Input(number,x);//�ַ��������
	Trigonmetric_Func* ptr=new Trigonmetric_Func(x);
		if(number==1)
		{
				result=ptr->sin(x);
				cout<<"sin("<<x<<")="<<setiosflags(ios::fixed)<<setprecision(4)<<result<<endl;//����С�������λ�������������
		}
			
		if(number==2)
		{
				result=ptr->cos(x);
				cout<<"cos("<<x<<")="<<setiosflags(ios::fixed)<<setprecision(4)<<result<<endl;//����С�������λ�������������
		}
		if(number==3)
		{
				result=ptr->tan(x);
				cout<<"tan("<<x<<")="<<setiosflags(ios::fixed)<<setprecision(4)<<result<<endl;//����С�������λ�������������
		}
		if(number==4)
		{
				result=ptr->cot(x);
				cout<<"cot("<<x<<")="<<setiosflags(ios::fixed)<<setprecision(4)<<result<<endl;//����С�������λ�������������
		}
		delete ptr;

	system("pause");
	return 0;
}

