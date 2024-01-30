double smallest(double num1,double num2,double num3)
{
	int smallest = (num1<num2)?((num1<num3)?num1:num3):((num2<num3)?num2:num3);
	return smallest;
}