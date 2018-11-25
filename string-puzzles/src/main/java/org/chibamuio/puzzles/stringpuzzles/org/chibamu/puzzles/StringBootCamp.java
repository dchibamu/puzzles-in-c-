package org.chibamuio.puzzles.stringpuzzles.org.chibamu.puzzles;

import org.springframework.stereotype.Component;
import org.springframework.stereotype.Service;

@Service
public class StringBootCamp {
    /**
     * Uses O(1) space complexity, Time complexity is O(n)
     * @param input
     * @return
     */
    public boolean isPalindromic(String input){

        for(int i = 0, j = input.length()-1; i < j; i++, j--){
            if(input.charAt(i) != input.charAt(j)){
                return false;
            }
        }
        return true;
    }

    /**
     * Time Complexity O(n), Space complexity is O(1)
     * @param digit
     * @return
     */
    public String intToString(int digit){

        boolean isNegative = false;

        if(digit < 0){
            isNegative = true;
        }

        StringBuilder sb = new StringBuilder();

        do {
            char ch = (char) ('0' + Math.abs(digit % 10));
            sb.append(ch);
            digit /= 10;
        }while(digit != 0);

        if(isNegative)
            sb.append("-");

        sb.reverse();

        return sb.toString();
    }


    public int stringToInt(String in){
        int result = 0, i = 0;
        boolean isNegative = in.charAt(0) == '-';
        if(isNegative)
            i = 1;
        for(; i < in.length(); i++){
            int digit = in.charAt(i) - '0';
            result = result * 10 + digit;
        }

        if(isNegative)
            result = -result;

        return result;
    }


    public String columnIdToColumnLetters(int columnId){

        String columnLetters = null;

        return columnLetters;
    }
}
