#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	
	for(int i=0;i<n;i++)

    {

        for(int j=0;j<m;j++)

        {

            if(matrix[i][j]==0)

            {

                for(int x=0;x<m;x++)

                {

                    if(matrix[i][x]!=0)

                        matrix[i][x]=-1;

                }

                for(int x=0;x<n;x++)

                {

                    if(matrix[x][j]!=0)

                        matrix[x][j]=-1;

                }

            }

        }

    }

 

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            if (matrix[i][j] == -1) {

                matrix[i][j] = 0;

            }

        }

    }

 

        return matrix;
}
