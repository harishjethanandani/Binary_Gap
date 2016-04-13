// Lesson - 1 - Iterations

int solution(int N) {
    
    // temporary variables
    int temp_lbg = 0, lbg = 0, flag_1 = 0, flag_2 = 0;
    
    // loop over binary version of the input integer
    while (N > 0)
    {
        if (N%2 == 0)
        {
            temp_lbg++;            
            flag_2 = 0;
        }    
        else
        {
            flag_2 = 1;
            if ((temp_lbg > lbg)&(flag_1 == 1)&(flag_2 == 1))
            {
                lbg = temp_lbg;
            }    
            flag_1 = 1;
            temp_lbg = 0;
        }
        N = N/2;
    }    
    return lbg;
}
