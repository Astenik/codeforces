#include <iostream>
#include <string>

int main()
{
       int n;
    std:: cout << "enter the count of problems: ";
    std::cin >> n;
    std::string row;
    std::string arr[n];
    int d;
    for(int i = 0; i < n; ++i)
    {
        arr[i] = ' ';
        std:: cout << "enter the views of friends: ";
        d = 3;
        
        while(d > 0)
        {
            std::cin >> row;
            arr[i] += row;
            --d;
        }
    }
    
    int count, res = 0;
    for(int i = 0; i < n; ++i)
    {
        count = 0;
        for(int j = 0; j < arr[i].size(); ++j)
        {
            if(arr[i][j] == '1')
            {
                count++;
            }
        }
        if(count >= 2)
        {
            res++;
        }
    }
    
    std::cout << "the result is: " << res << std::endl;
    
    return 0;
}
