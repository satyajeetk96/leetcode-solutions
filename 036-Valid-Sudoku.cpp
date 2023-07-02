// Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

// Each row must contain the digits 1-9 without repetition.
// Each column must contain the digits 1-9 without repetition.
// Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_map<char, int>>vectorMap(27);
        for(int i = 0; i<9; i++){
            for(int j = 0; j<9; j++){
                vectorMap[i][board[i][j]]++;
            }
        }

        for(int i = 0; i<9; i++){
            for(int j = 0; j<9; j++){
                vectorMap[i+9][board[j][i]]++;
            }
        }

        for(int m = 0; m<9; m = m+3)
        for(int k = 0; k<9; k=k+3)
        for(int i = 0; i<3; i++){
            for(int j = 0; j<3; j++){
                vectorMap[18+k/3+m][board[i+k][j]]++;
            }
        }

        for(auto mp: vectorMap){
            for(auto p: mp){
                if(p.first == '.') continue;
                else{
                    if(p.first<'1' || p.first>'9' || p.second>1) 
                    {
                        return false;
                    }
                }
            }
        }

        return true;
    }

            // vector<unordered_map<char, int>>vectorMap(27);
        // for(int i = 0; i<9; i++){
        //     for(int j = 0; j<9; j++){
        //         // if(board[i][j] != '.')
        //         vectorMap[i][board[i][j]]++;
        //     }
        // }

        // for(int i = 0; i<9; i++){
        //     for(int j = 0; j<9; j++){
        //         vectorMap[i+9][board[j][i]]++;
        //     }
        // }

        // for(int m = 0; m<9; m = m+3)
        // for(int k = 0; k<9; k=k+3)
        // for(int i = 0; i<3; i++){
        //     for(int j = 0; j<3; j++){
        //         vectorMap[18+k/3+m][board[i+k][j]]++;
        //     }
        // }
        

        // for(int k = 0; k<9; k=k+3)
        // for(int i = 0; i<3; i++){
        //     for(int j = 0; j<3; j++){
        //         vectorMap[21+k/3][board[i+k][j+3]]++;
        //     }
        // }

        // for(int k = 0; k<9; k=k+3)
        // for(int i = 0; i<3; i++){
        //     for(int j = 0; j<3; j++){
        //         vectorMap[24+k/3][board[i+k][j+6]]++;
        //     }
        // }


        // for(auto mp: vectorMap){
        //     for(auto p: mp){
        //         if(p.first == '.') continue;
        //         else{
                    // cout<<p.first<<" : "<<p.second<<" , ";
                    // if(p.first<'1' || p.first>'9' || p.second>1) 
                    // {
                    //     // cout<<"Hello";
            //             return false;
            //         }
            //     }
            // }
            // cout<<endl;

};
