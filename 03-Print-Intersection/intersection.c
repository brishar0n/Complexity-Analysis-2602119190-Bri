void printIntersection(int* x, int* y, int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(x[i] == y[j]){
                printf("%d, ", x[1]);
                break;
            } 
        }
    }
    printf("\n");

}