#include <iostream>
#include <set>
#include <vector>

char* my_memchr(const char* str, int c, size_t n)
{
    for (size_t i = 0; i < n; ++i)
    {
        if (str[i] == (char)c) { return (char*)(&(str[i])); }
    }
    return nullptr;
}

int my_memcmp(const char* str1, const char* str2, size_t n)
{
    for (size_t i = 0; i < n; ++i)
    {
        if (str1[i] > str2[i]) { return 1; }
        else if (str1[i] < str2[i]) { return -1; }
    }
    return 0;
}

char* my_memcpy(char* dest, const char* src, size_t n)
{
    for (size_t i = 0; i < n; ++i)
    {
        dest[i] = src[i];
    }
    return dest;
}

char* my_memset(char* str, int c, size_t n)
{
    for (size_t i = 0; i < n; ++i)
    {
        str[i] = c;
    }

    return str;
}

char* my_strncat(char* dest, const char* src, size_t n)
{
    char* ptr = dest;
    while (*ptr != '\0') { ptr++;  }

    int i = 0;
    while (i < n && src[i] != '\0')
    {
        *ptr = src[i];
        ptr++;
        i++;
    }
    *ptr = '\0';
    return dest;
}

char* my_strchr(const char* str, int c)
{
    for (size_t i = 0; i != -1; ++i)
    {
        if (str[i] == c) { return (char*)&(str[i]); }
    }
    return nullptr;
}

int my_strncmp(const char* str1, const char* str2, size_t n)
{
    for (size_t i = 0; i < n; ++i)
    {
        if (str1[i] > str2[i]) { return 1; }
        else if (str1[i] < str2[i]) { return 2; }
    }
    return 0;
}

char* my_strncpy(char* dest, const char* src, size_t n)
{
    char* ptr = dest;

    int i = 0;
    while (i < n && src[i] != '\0')
    {
        *ptr = src[i];
        ptr++;
        i++;
    }
    *ptr = '\0';

    return dest;
}

size_t my_strcspn(const char* str1, const char* str2)
{
    size_t res = 0;
    const char* ptr1 = str1;
    const char* ptr2 = str2;

    while (*ptr1 != '\0' && *ptr2 != '\0')
    {
        if (*ptr1 == *ptr2) { return res; }
        res++;
        ptr1++;
        ptr2++;
    }

    return res;
}

size_t my_strlen(const char* str)
{
    size_t res = 0;

    const char* ptr = str;
    while (*ptr != '\0') { res++; ptr++; }

    return res;
}

char* my_strpbrk(const char* str1, const char* str2)
{
    const char* res = str1;
    const char* ptr2 = str2;

    while (*res != '\0')
    {
        while (*ptr2 != '\0')
        {
            if (*res == *ptr2) { return (char*)res; }
            ptr2++;
        }
        res++;
    }

    return nullptr;
}

char* my_strrchr(const char* str, int c)
{
    char* res = nullptr;

    const char* ptr = str;
    while (*ptr != '\0')
    {
        if (*ptr == c) { res = (char*)ptr; }
        ptr++;
    }

    return res;
}

char* my_strstr(const char* haystack, const char* needle)
{
    const char* ptr = haystack;
    const char* ptr2 = needle;
    char* res = nullptr;

    bool flag = true;
    while (*ptr != '\0')
    {
        if (*ptr2 == '\0') { return res; }

        if (*ptr == *ptr2)
        {
            if (flag) { res = (char*)ptr; flag = false; }
            ptr2++;
        }
        else { ptr2 = haystack; flag = true; }
        ptr++;
    }
    
    return res;
}






int main()
{
    char* string1;

}
