// obfuscation
int sumOfDigits(const int data)
{
    int sod;
    int copy_data;
    for(sod=0, copy_data = data; copy_data ; copy_data /=10)
    {
        sod += (copy_data%10);
    }
    return sod;
}
int numberOfDigits( const int data);
int reverse(int data);
int power(int base, int expo);
int base10(int expo);

