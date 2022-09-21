/*


// User function template for C++
class Solution{
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        vector<vector<int>> vis(n , vector<int>(n , 0));
        string path = "";
        if(m[0][0] == 1 ) ratKaRasta(0 , 0 , n , path , m , vis , ans);
        
        return ans;
    }
    
    void ratKaRasta(int i , int j , int n ,string path , vector<vector<int>> & maze , vector<vector<int>> & vis , vector<string> &ans )
    {
        if(i == n-1 && j == n-1)
        {
            ans.push_back(path);
            return;
        }
        
        //down 
        if(i+1 < n && vis[i+1][j] == 0 && maze[i+1][j] == 1)
        {
            // cout<<"D"<<i<<j<<endl;
            vis[i][j] = 1;
            ratKaRasta(i+1 , j , n , path+'D' , maze , vis , ans);
            vis[i][j] = 0;
        }
        
        //left
        if(j-1 >= 0 && vis[i][j-1] == 0 && maze[i][j-1] == 1)
        {
            // cout<<"L"<<i<<j<<endl;
            vis[i][j] = 1;
            ratKaRasta(i , j-1 , n , path+'L' , maze , vis , ans);
            vis[i][j] = 0;
        }
        
        //right
        if(j+1 < n && vis[i][j+1] == 0 && maze[i][j+1] == 1)
        {
            // cout<<"R"<<i<<j<<endl;
            vis[i][j] = 1;
            ratKaRasta(i , j+1 , n , path+'R' , maze , vis , ans);
            vis[i][j] = 0;
        }
        
        //up
        if(i-1 >= 0 && vis[i-1][j] == 0 && maze[i-1][j] == 1)
        {
            // cout<<"U"<<i<<j<<endl;
            vis[i][j] = 1;
            ratKaRasta(i-1 , j , n , path + 'U' , maze , vis , ans);
            vis[i][j] = 0;
        }
    }
    
    
};
\


*/
