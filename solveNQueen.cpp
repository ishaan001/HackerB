#include<iostream>
using namespace std;

void output(char Board[][100] ,int m,int n){
	for (int i = 0; i < m; ++i)
	{
		/* code */
		for (int j = 0; j < n; ++j)
		{
			/* code */
			cout<<Board[i][j]<<" ";
		}
		cout<<endl;
	}
}
void output1(char Board[][100] ,int m,int n){
	for (int i = 0; i < m; ++i)
	{
		/* code */
		for (int j = 0; j < n; ++j)
		{
			/* code */
			if(Board[i][j]=='Q')
			{

				cout<<"{"<<i<<"-"<<j<<"}"<<" ";
			}
		}
		//cout<<endl;
	}
}
void clearBoard(char Board[][100],int N ,int M){
	cout<<endl;
	for(int r = 0 ; r < N ; r++){
		for (int c = 0 ;c < M ; ++c)
		{
			/* code */
			Board[r][c]='l';
		}
	}
}
bool canPlace(char Board[][100],int N, int r,int c){

	for (int x = 0; x < N; x++)
	{
		/* code */
		if(Board[x][c] == 'Q') return false;
	}
	int rowDir[]={-1,-1};
	int colDir[]={-1,+1};
	for(int dir = 0 ; dir < 2 ; dir++){
		for(int dist = 1 ; dist < N ; dist++ ){
			int nextRow = r + dist * rowDir[dir];
			int nextCol = c + dist * colDir[dir];
			if((nextRow < 0 or nextRow >= N) or (nextCol < 0 or nextCol >= N )){
				break;
			}
			if(Board[nextRow][nextCol] == 'Q')
				return false;

		}
	}
	return true;
}
bool solveNQueen(char Board[][100],int N,int r){

	if(r==N){return true;}

	for(int c = 0 ; c < N ; c++)
	{
		bool check=canPlace(Board,N,r,c);
		if(check==true){
			Board[r][c]='Q';
			bool status = solveNQueen(Board,N,r+1);
			if(status==true){
				return true;
			}
			else{
				Board[r][c]='l';
			}
		}
	}
	return false;
}
int main(){
	char Board[100][100];
	int N;cin>>N;

	clearBoard(Board,N,N);

	bool success=solveNQueen(Board,N,0);

	if(success){
		output(Board,N,N);
		output1(Board,N,N);
	}
	else{
		cout<<"sorry bro couldn't do neither could you :P "<<endl;
	}

}