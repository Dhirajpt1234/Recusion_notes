//This is the code for m- coloring problem without driver code.

/*

class Solution{
public:

    bool isSafe(int k , vector<int> &color , int node , int n , bool graph[101][101])
    {
        for(int i = 0 ; i< n ; i++)
        {
            if(i != node && graph[node][i] == 1 && color[i] == k)
            return false;
        }
        return true;
    }

    bool solve(int node , int n ,int m , vector<int>color , bool graph[101][101])
    {
        if(node == n)
        {
            return true;
        }
       for(int i = 1 ; i<=m ; i++)
       {
           if(isSafe(i , color , node , n  , graph))
           {
               color[node] = i;
               if(solve(node +1 , n , m , color , graph))
                    return true;
                color[node] = 0;

           }
       }
       return false;
    }

    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
    bool graphColoring(bool graph[101][101], int m, int n) {
        // your code here
        vector<int> color(n , 0);
        return solve(0 ,  n ,  m , color , graph);
    }
};

*/