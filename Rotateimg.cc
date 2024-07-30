class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int s=0, e=n-1;
        for(int i=0; i<n/2; i++)
        {
            for(int j=s; j<e; j++)
            {
                int a=matrix[i][j];
                int b=matrix[j][e];
                int c=matrix[e][e-(j-s)];
                int d=matrix[e-(j-s)][i];
                matrix[i][j]=d;
                matrix[j][e]=a;
                matrix[e][e-(j-s)]=b;
                matrix[e-(j-s)][i]=c;
            }
            s++,e--;
        }
    }
};
