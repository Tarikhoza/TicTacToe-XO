#include<iostream>
#include <conio.h>
using namespace std;

void winner(char M[3][3]){
if(M[0][0]=='X' and M[0][1]=='X' and M[0][2]=='X'){
	cout<<"X is the Winner"<<endl;
getch();

}
if(M[1][0]=='X' and M[1][1]=='X' and M[1][2]=='X'){
	cout<<"X is the Winner"<<endl;
getch();

}

if(M[2][0]=='X' and M[2][1]=='X' and M[2][2]=='X'){
	cout<<"X is the Winner"<<endl;
getch();
}

if(M[0][0]=='X' and M[1][0]=='X' and M[2][0]=='X'){
	cout<<"X is the Winner"<<endl;
getch();
}
if(M[0][1]=='X' and M[1][1]=='X' and M[2][1]=='X'){
	cout<<"X is the Winner"<<endl;
getch();
}
if(M[0][2]=='X' and M[1][2]=='X' and M[2][2]=='X'){
	cout<<"X is the Winner"<<endl;
getch();
}

if(M[0][0]=='X' and M[1][1]=='X' and M[2][2]=='X'){
	cout<<"X is the Winner"<<endl;
getch();
}

if(M[0][2]=='X' and M[1][1]=='X' and M[2][0]=='X'){
	cout<<"X is the Winner"<<endl;
getch();
}

if(M[0][0]=='O' and M[0][1]=='O' and M[0][2]=='O'){
	cout<<"O is the Winner"<<endl;
getch();
}
if(M[1][0]=='O' and M[1][1]=='O' and M[1][2]=='O'){
	cout<<"O is the Winner"<<endl;
getch();
}
if(M[2][0]=='O' and M[2][1]=='O' and M[2][2]=='O'){
	cout<<"O is the Winner"<<endl;
getch();
}
if(M[0][0]=='O' and M[1][1]=='O' and M[2][2]=='O'){
	cout<<"O is the Winner"<<endl;
getch();
}
if(M[0][2]=='O' and M[1][1]=='O' and M[2][0]=='O'){
	cout<<"O is the Winner"<<endl;
getch();
}
if(M[0][0]=='O' and M[1][0]=='O' and M[2][0]=='O'){
	cout<<"O is the Winner"<<endl;
getch();
}
if(M[0][1]=='O' and M[1][1]=='O' and M[2][1]=='O'){
	cout<<"O is the Winner"<<endl;
getch();
}
if(M[0][2]=='O' and M[1][2]=='O' and M[2][2]=='O'){
	cout<<"O is the Winner"<<endl;
getch();
}
}

void toggle(char &XO){
if(XO=='O'){
	XO='X';
}
else{
	XO='O';
	}
}
void change(char &b,char M[3][3],char &XO,bool inuse[3][3]){
if(b=='1'){
	if(inuse[2][0]==1){
		cout<<"You can't do that"<<endl;
		getch();
	}
	else{
		M[2][0]=XO;
		inuse[2][0]=1;
		toggle(XO);
	}
}	

if(b=='2'){
		if(inuse[2][1]==1){
		cout<<"You can't do that"<<endl;
		getch();
	}
	else{
		M[2][1]=XO;
		inuse[2][1]=1;
		toggle(XO);
	}
}	
if(b=='3'){
		if(inuse[2][2]==1){
		cout<<"You can't do that"<<endl;
		getch();

	}
	else{
		M[2][2]=XO;
		inuse[2][2]=1;
		toggle(XO);
	}
}	
if(b=='4'){	
	if(inuse[1][0]==1){
		cout<<"You can't do that"<<endl;
		getch();
	}
	else{
		M[1][0]=XO;
		inuse[1][0]=1;
		toggle(XO);
	}
}	
if(b=='5'){
	if(inuse[1][1]==1){
		cout<<"You can't do that"<<endl;
		getch();
	}
	else{
		M[1][1]=XO;
		inuse[1][1]=1;
		toggle(XO);
	}
}	
if(b=='6'){
	if(inuse[1][2]==1){
		cout<<"You can't do that"<<endl;
		getch();
	}
	else{
		M[1][2]=XO;
		inuse[1][2]=1;
		toggle(XO);
	}
}	
if(b=='7'){
		if(inuse[0][0]==1){
		cout<<"You can't do that"<<endl;
		getch();

	}
	else{
		M[0][0]=XO;
		inuse[0][0]=1;
		toggle(XO);
	}
}	
if(b=='8'){
	if(inuse[0][1]==1){
		cout<<"You can't do that"<<endl;
		getch();

	}
	else{
		M[0][1]=XO;
		inuse[0][1]=1;
		toggle(XO);
	}
}	
if(b=='9'){
	if(inuse[0][2]==1){
		cout<<"You can't do that"<<endl;
		getch();
	}
	else{
		M[0][2]=XO;
		inuse[0][2]=1;
		toggle(XO);

	}
}	
}

void reset(char a,char b,char M[3][3],bool select[3][3],char XO,bool inuse[3][3]){
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			M[i][j]='#';
		}
	}
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			select[i][j]=0;
		}
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			inuse[i][j]=0;
		}}}
		XO='X';
}
void set(char M[3][3],bool select[3][3]){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			M[i][j]='#';
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			select[i][j]=0;
		}
	}
}



void print(char M[3][3],bool select[3][3],char a){
system("cls");
	for(int i=0;i<3;i++){
			cout<<endl;
		for(int j=0;j<3;j++){
			if(select[i][j]==1){
				cout<<"[";
				cout<<M[i][j];
				cout<<"]";
		
			}			
			else{
				cout<<" ";
				cout<<M[i][j];
				cout<<" ";
			}
		}
	cout<<endl;
	}
	
	cout<<a;
}

void control(bool select[3][3],char a,char &b,char M[3][3],char &XO,bool inuse[3][3]){
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			select[i][j]=0;
		}
	}
	a=_getch();
	if(a=='9'){
		b='9';
		select[0][2]=1;
		}
	if(a=='8'){
		b='8';
		select[0][1]=1;
		}
	
	if(a=='7'){
		b='7';
		select[0][0]=1;
		}
	
	if(a=='6'){
		b='6';
		select[1][2]=1;
		}
	if(a=='5'){
		b='5';
		select[1][1]=1;
		}
	
	if(a=='4'){
		b='4';
		select[1][0]=1;
		}
	
	if(a=='3'){
		b='3';
		select[2][2]=1;
		}
	if(a=='2'){
		b='2';
		select[2][1]=1;
		}
	
	if(a=='1'){
		b='1';
		select[2][0]=1;
		}
	if(a=='0'){
		change(b,M,XO,inuse);
		}
	
	if(a=='a'){
	reset(a,b,M,select,XO,inuse);
	}	
}

int main(){
char a;
char b='0';
char M[3][3];
char XO='X';
bool select[3][3]{0,0,0,0,0,0,0,0,0};
bool inuse[3][3]{0,0,0,0,0,0,0,0,0};
set(M,select);
cout<<"You control the cursor whit the numBlock.\n 7 8 9 \n 4 5 6 \n 1 2 3 \n To confirm your option press '0' \nWith 'a' you restart the game\nDo not forget to set NumLock to ON"<<endl;
getch();
while (true){
print(M,select,a);
control(select,a,b,M,XO,inuse);
winner(M);
}
}
