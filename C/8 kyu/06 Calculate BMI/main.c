const char *bmi (int weight, double height)
{
  double result = (weight/(height*height));
  if (result <= 18.5) return "Underweight";
  else if (result > 18.5 && result <= 25.0) return "Normal";
  else if (result > 25.0 && result <=  30.0) return "Overweight";
  else return "Obese";
}
