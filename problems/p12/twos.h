static int twos(int n){
        int count=0;
        for(int i = 1; i <= n; i++){
            if((i % 10)==2){
               count++;
            }
            if(i-(i%10)==20){
               count++;
            }
            if(i/10-(i%10)==20){
               count++;
            }
            if(i/10-(i%10)==20){
               count++;
            }
       }
	return count;
}