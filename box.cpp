#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Box{
	private:
		int l,b,h;
	public:
		//constructors
		Box(){
			l=0;
			b=0;
			h=0;
			}
		Box(int l,int b,int h){
			l=l;
			h=h;
			b=b;
		}
		Box(const Box &B){
			l=B.l;
			h=B.h;
			b=B.h;
		}
		//methods
		int getLength(){
			return l;
		}
		int getHeight(){
			return h;
			}
		int  getBreadth(){
			return b;
		}
		long long CalculateVolume(){
			return (long long)(b)*l*h;
		}
		bool operator<(Box &B){
			if (l<B.l){
				return true;
			}else if(l==B.l){
				if (b<B.b){
					return true;
				}
				else if(b==B.b){
					if (h<B.h){
						return true;
					}
				}
			}
			return false;
		}
};
ostream &operator<<(ostream &out,Box &B)[
	out<<B.getLength()<<' '<<B.getBreadth()<<' '<<B.getHeight();
	return std::out;
	}
void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}
int main(){
	check2();
}
