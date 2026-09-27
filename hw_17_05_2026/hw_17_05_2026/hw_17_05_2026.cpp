#include <iostream>
#pragma warning (disable : 4996)

class small_string
{
    char str[32];

public:
    small_string() { strncpy(this->str, "\0", sizeof(this->str)); }

    ~small_string() {  }

    int size() const
    {
        int result = 0;
        for (char ch : str)
        {
            if (ch == '\0')
            {
                break;
            }
            result++;
        }

        return result;
    }

    int find(const std::string& s) const
    {
        if (s.size() > size()) { return -1; }

        int answer;
        int cur_ind = 0;
        bool lock_answer = false;

        for (char ch : str)
        {
            if (ch == str[cur_ind])
            {
                if (!lock_answer)
                {
                    answer = cur_ind;
                    lock_answer = true;
                }

                if (cur_ind < s.size())
                {
                    cur_ind++;
                }
                else
                {
                    return answer;
                }
            }
            else
            {
                lock_answer = false;
                if (cur_ind < s.size())
                {
                    cur_ind++;
                }
                else
                {
                    return -1;
                }
            }
        }

        return -1;
    }

    void operator= (const small_string &str2)
    {
        strncpy(this->str, str2.str, sizeof(this->str));
    }

    friend std::ostream& operator<< (std::ostream& os, const small_string& s)
    {
        os << s.str;
        return os;
    }
    

    std::istream& operator>> (const char* &new_str)
    {
        strncpy(this->str, new_str, sizeof(this->str));
    }
    
};

int main()
{
    
}

