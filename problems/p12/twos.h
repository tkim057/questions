static int twos(int n){
    int count=0;
    string check = to_string(n);
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < to_string(i).length(); j++ ){
        	if ((to_string(i)).at(j) == 2){
        		count++;
        	}
        }
    }
   	return count;
}