
#include<iostream>
using namespace std;
int main()
{
    int matr1[3][3], matr2[3][3], i, j, matr3[3][3];
	
    cout<<" Entry elements of 1st matrix ";
	
    for(i=0; i<3; i++)
		
    {
        for(j=0; j<3; j++)
			
            cin>>matr1[i][j];
    }
    cout<<" entry elements of 2nd matrix ";
	
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>matr2[i][j];
    }
	
    	
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
			
            matr3[i][j] = matr1[i][j]+matr2[i][j];
			
    }
    cout<<" Look result" << endl << endl;
	
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
			
            cout<<matr3[i][j]<<" ";
			
        cout<<endl;
    }
    return 0;
}