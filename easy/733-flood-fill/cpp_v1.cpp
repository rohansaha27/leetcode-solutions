// Pushed: 2026-09-03 13:38:52 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 18.6 MB

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int original_color = image[sr][sc]; 
        if (image[sr][sc] == color) {
            return image; 
        }
        image[sr][sc] = color; 
        return floodFill_wrapper(image, sr, sc, color, original_color); 
    }

    vector<vector<int>> floodFill_wrapper(vector<vector<int>>& image, int sr, int sc, int color, int oc) {
        
        int rows = image.size(); 
        int cols = image[0].size(); 

        if(sr+1 < rows && image[sr+1][sc] == oc) {
            image[sr+1][sc] = color; 
            image = floodFill_wrapper(image, sr+1, sc, color, oc); 
        }
        
        if(sc+1 < cols && image[sr][sc+1] == oc) {
            image[sr][sc+1] = color; 
            image = floodFill_wrapper(image, sr, sc+1, color, oc); 
        }
        
        if(sr-1 >= 0 && image[sr-1][sc] == oc) {
            image[sr-1][sc] = color; 
            image = floodFill_wrapper(image, sr-1, sc, color, oc); 
        }
        
        if(sc-1 >= 0 && image[sr][sc-1] == oc) {
            image[sr][sc-1] = color; 
            image = floodFill_wrapper(image, sr, sc-1, color, oc); 
        }

        return image; 
    }
};