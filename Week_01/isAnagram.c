//给定两个字符串 s 和 t ，编写一个函数来判断 t 是否是 s 的字母异位词。

bool isAnagram(char * s, char * t){

    if(strlen(s)!=strlen(t))
    {
        return false;
    }

    int table[26]={0};
    int slen=strlen(s);
    int i;
    for(i=0;i<slen;i++)
    {
        table[*(s+i)-97]++;
    }
    for(i=0;i<slen;i++)
    {
        table[*(t+i)-97]--;
        if(table[*(t+i)-97]<0)
        {
            return false;
        }
    }

    return true;
}