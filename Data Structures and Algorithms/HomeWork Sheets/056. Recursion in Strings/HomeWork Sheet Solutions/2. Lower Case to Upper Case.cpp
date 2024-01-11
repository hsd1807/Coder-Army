string to_upper(string str)
{
    if(str.size()==0) return "";
    char c=str.back()-'a'+'A';
    str.pop_back();
    return to_upper(str)+c;
}
