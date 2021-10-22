Anticlokwise=left rotate
void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
       for (int i=0;i<n;i++) {           //swap elemets
           for (int j=i+1;j<n;j++)
                swap(matrix[i][j],matrix[j][i]);
       } 
       for (int i=0;i<n;i++) {     //reverse coloum wise
           int low=0,high=n-1;
           while (low < high) {
                swap(matrix[low][i],matrix[high][i]);
                low++;
                high--;
           }
       }
    }

Clockwise=rightrotate

void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
       for (int i=0;i<n;i++) {                //swap elements
           for (int j=i+1;j<n;j++)
                swap(matrix[i][j],matrix[j][i]);
       } 
       for (int i=0;i<n;i++) {          //reverse row wise
           int low=0,high=n-1;
           while (low < high) {
                swap(matrix[i][low],matrix[i][high]);
                low++;
                high--;
           }
       }
    }
