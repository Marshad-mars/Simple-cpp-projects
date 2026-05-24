#include<iostream>
using namespace std;

int prefix_digit_finder(int value){ //gives the digit value of the prefix-1/0
    int power_ten = 1;

    for(int i = 1; i <= value; i++){
        power_ten *= 10;
    }
    return power_ten;
}
int range_finder(int value){  //gives the binary length of the binary value
    int clone_value = value;
    int range = 0;
    
    while(clone_value != 0){
        clone_value /= 10;
        range++;
    }
    return range;
}
int first_zero_digit_finder(int value){  //gives the digit of the first occuring 0 in the binary value
    int binary_length = range_finder(value);
    int occurance_digit;

    for(int i = 0; i < binary_length; i++){
        if(value % 10 == 0){
            occurance_digit = i;
            break;
        }
        else value /= 10;
    }
    return occurance_digit;
}
int first_one_digit_finder(int value){
    int binary_length = range_finder(value);
    int occurence_digit;

    for(int i = 0; i < binary_length; i++){
        if(value % 10 == 1){
            occurence_digit = i;
            break;
        }
        else value /= 10;
    }
    return occurence_digit;
}
int binary_converter(int dec_value){  //converts decimal to binary form
    int bin_value = 0;
    int digit_ident = 1;

    while(dec_value != 0){
        bin_value += (dec_value % 2) * digit_ident;
        dec_value /= 2;
        digit_ident *= 10;
    }
    return bin_value;
}
int decimal_converter(int bin_value){  //converts binary to decimal form
    int digit_holder;
    int dec_value = 0;
    int power_t = 1; //iterated product by 2 for the exponential power growth 
    
    while(bin_value != 0){
        dec_value += (bin_value % 10) * power_t;
        bin_value /= 10;
        power_t *= 2;
    }
    return dec_value;
}
int negative_complement(int decimal_value){  //two's complement of the negative decimals
    decimal_value *= -1;
    int value = binary_converter(decimal_value);
    int binary_length = range_finder(value);
    int clone_value = value;
    int one_complement = 0;
    int power_ten = 1;
    int digit_holder;
    
    for(int i = 0; i <= binary_length; i++){ //prefix addition and one_complement
        digit_holder = clone_value % 10;

        if(digit_holder == 1) digit_holder = 0;
        else if(digit_holder == 0) digit_holder = 1;

        one_complement += digit_holder * power_ten;
        power_ten *= 10;
        int holder_forOne;
        clone_value /= 10;
    }
    int digit_first_zero = first_zero_digit_finder(one_complement);
    int one_complement_length = range_finder(one_complement);
    binary_length = range_finder(one_complement);
    int final_binary = 0;
    power_ten = 1;
    clone_value = one_complement;
    int last_increment;

    for(int j = 0; j <= digit_first_zero; j++){  //last increment finding for main incrementat=ion
        last_increment = clone_value % 10;

        if(last_increment == 0){
            last_increment++;
            break;
        }
        else if(last_increment == 1){
            last_increment = 0;
            for(int a = 1; a <= one_complement_length; a++){
                final_binary += last_increment * power_ten;
                power_ten *= 10;
            }
        }
        clone_value /= 10;
    }
    if(digit_first_zero == 0){  //incrementation when the unit digit 0
        clone_value = one_complement;
        power_ten = 10;
        clone_value /= 10;
    
        for(int i = 1; i <= binary_length; i++){ 
            if(i == 1){
                digit_holder = last_increment;
                final_binary += digit_holder;
            }
            else{
                digit_holder = clone_value % 10;
                final_binary += digit_holder * power_ten;
                power_ten *= 10;
                clone_value /= 10;
            }
        }
    }
    else if(digit_first_zero != 0){  //incrementation when the unit digit not 0
        final_binary = 0;
        clone_value = one_complement;
        power_ten = 1;
        int i = 0;

        while(clone_value != 0){
            digit_holder = clone_value % 10;
            
            if(i < digit_first_zero){
                digit_holder = 0;
            }
            if(i == digit_first_zero){
                digit_holder = 1;
            }
            final_binary += digit_holder * power_ten;
            power_ten *= 10;
            clone_value /= 10;
            i++;

        }
    }
    return final_binary;
}
int positive_complement(int value){
    int digit_first_one = first_one_digit_finder(value);
    int binary_length = range_finder(value);
    int decrement_binary = 0;
    int digit_holder, clone_value = value, power_ten = 1;
    
    if(digit_first_one == 0){  //binary decrementation when unit digit 1(step-1)
        for(int i = 0; i < binary_length; i++){
            if(i == digit_first_one){
                decrement_binary = 0;
                clone_value /= 10;
                power_ten *= 10;
            }
            else{
                digit_holder = clone_value % 10;
                decrement_binary += digit_holder * power_ten;
                power_ten *= 10;
                clone_value /= 10;
            }
        }
    }
    else if(digit_first_one != 0){  //binary decrementation when unit digit not 1(step-1)
        for(int i = 0; i <= binary_length; i++){
            if(i < digit_first_one){
                digit_holder = 1;
                decrement_binary += digit_holder * power_ten;
                power_ten *= 10;
                clone_value /= 10;
            }
            else if(i == digit_first_one){
                power_ten *= 10;
                clone_value /= 10;
            }
            else{
                digit_holder = clone_value % 10;
                decrement_binary += digit_holder * power_ten;
                power_ten *= 10;
                clone_value /= 10;
            }
        }
    }
    int one_complement_binary = 0;
    clone_value = decrement_binary;
    power_ten = 1;

    while(clone_value != 0){  //one complementation and prefix removal
        digit_holder = clone_value % 10;

        if(digit_holder == 0) digit_holder = 1;
        else if(digit_holder == 1) digit_holder = 0;

        one_complement_binary += digit_holder * power_ten;
        power_ten *= 10;
        clone_value /= 10;
    }
    int final_decimal = decimal_converter(one_complement_binary) * -1;  //decimal conversion in the form of negative int
    return final_decimal;
}
int main(){
    char choice;
    char neg_pos;
    int binary_val;
    int decimal_val;

    cout << "Decimal to Binary value conversion~(A)" << endl;
    cout << "Binary to Decimal value conversion~(B)" << endl << endl;

    cout << "Enter the choice: ";
    cin >> choice;

    switch(choice){
        case 'A':
            cout << "Enter the value: ";
            cin >> decimal_val;
            cout << endl;

            if(decimal_val > 0){
                cout << "The Binary form of the (" << decimal_val << ") is: " << binary_converter(decimal_val) << endl;
            }
            else if(decimal_val < 0){
                cout << "The Binary form of the (" << decimal_val << ") is: " << negative_complement(decimal_val) << endl;
            }
            break;
        case 'B':
            cout  << "Enter the value: ";
            cin >> binary_val;
            cout << "~~~~~If the given binary-(" << binary_val << ") is postive then please enter-{p}" << endl;
            cout << "~~~~~If the given binary-(" << binary_val << ") is negative then please enter-{n}" << endl;
            cout << "Enter the alterantive: ";
            cin >> neg_pos;
            cout << endl;

            if(neg_pos == 'p'){
                cout << "The decimal form of (" << binary_val << ") is: " << decimal_converter(binary_val) << endl;
            }
            else if(neg_pos == 'n'){
                cout << "The decimal form of (" << binary_val << ") is: " << positive_complement(binary_val) << endl;
            }
            break;
        default:
            cout << "Re-enter the choice character, char  didn't marched..." << endl;
            break;
    }
    return 0;   
}