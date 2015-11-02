int switch_prob(int x, int n)
{
    int result = x;

    switch(n) {

        case 50:
        case 52:
            x <<= 2;
            break;

        case 53:
            x >>= 2;

        case 54:
            x *= 3;

        case 55:
            x *= x;

        case 51:
        default:
            x += 10;

    }

    return result;
}
