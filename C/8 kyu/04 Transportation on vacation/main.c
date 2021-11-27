unsigned rental_car_cost(unsigned d)
{
  if (d>=3 && d<7)
    return (d * 40u) - 20u;
    else if (d>=7) return (d * 40u) - 50u;
    else return d * 40u;
}
