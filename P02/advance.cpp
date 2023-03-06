bool isLeap(int y){
    if (y % 4 == 0){
        if (y % 100 == 0){
            if (y % 400 == 0){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return true;
        }
    }
    else{
        return false;
    }
}

void advance(int delta, int& d, int& m, int& y){
    while (delta > 0) { 
        int monthDays = 0;
        switch(m) { 
            case 1: 
            case 3: 
            case 5: 
            case 7: 
            case 8: 
            case 10:
            case 12:
                monthDays = 31;
                break;
            case 4: 
            case 6: 
            case 9: 
            case 11:
                monthDays = 30;
                break;
            case 2: 
                if(isLeap(y)) 
                    monthDays = 29; 
                else
                    monthDays = 28;
                break;
        }
        if(delta <= monthDays - d) { 
            d += delta;
            delta = 0;
        } 
        else { 
            delta -= monthDays - d + 1;
            d = 1;
            if(m == 12) { 
                m = 1;
                y++;
            } else {
                m++;
            }
        }
    }
}