static int twos(int n){
    int count=0;
    std::string check = std::to_string(n);
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < (std::to_string(i)).length(); j++ ){
        	if ((std::to_string(i)).at(j) == '2'){
        		count++;
        	}
        }
    }
   	return count;
}