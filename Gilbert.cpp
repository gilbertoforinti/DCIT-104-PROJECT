



int main()
{
    int num;
    int i;
    int reach =100;
    int sum =0;
    for(num =2; num<= reah; num++)
    {

        for(i =; i<= (num / 2); i++)
        {

            if(num % i == 0)
            {
                i = num;
                break;
            }
        }
        if(i != num)
        {
            sum += num;
        }
    }

    cout << sum << endl;

    return 0;
}
