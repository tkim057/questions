static int twos(int n){
	    int n = 250;
        int count=0;
        int counter = 0;
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
       cout << count << endl;
	return 0;
}