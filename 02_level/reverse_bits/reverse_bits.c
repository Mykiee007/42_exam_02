////9:48 - 9:56

unsigned char	reverse_bits(unsigned char octet)
{
	int i = 0;
	unsigned char result = 0;

	while (i < 8)
	{
		if(octet & (1 << i))
			result |= (1 << (7 - i));
		i++;
	}
	return result;
}