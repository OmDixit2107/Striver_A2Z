
int i = 0;

bool isPalindrome(string &s)
{
    int n = s.size();
    if (i >= n / 2)
    {
        return true;
    }
    if (s[i] != s[n - i - 1])
    {
        return false;
    }
    i++;
    return isPalindrome(s);
}