/*
 int convert2Decimal(string binary) {
   int decimal = 0;
        int base = 1; // 2^0
        int len = binary.length();
        for (int i = len - 1; i >= 0; i--) {
            if (binary[i] == '1') {
                decimal += base;
            }
            base *= 2; // Move to the next power of 2
        }
        return decimal;
 }

*/