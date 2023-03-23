int count_ones(int number){
    int c = 0;
    int prev;
    for (int i = 0; i < 8; i++)
    {
        // Store the previous number
        prev = number;
        // Shift the number to the right by 1 bit
        number = number >> 1;
        if (number != prev)
        {
           if (prev-1 == (number << 1))
           {    
                c += 1;
           }
        }else{
            break;
        }
    }

    return c;
}