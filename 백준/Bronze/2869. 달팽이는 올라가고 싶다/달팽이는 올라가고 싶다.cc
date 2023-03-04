//
// Created by jeyou on 2023-03-04.
//

#include <iostream>

int main(){
    int a, b, v;
    std::cin >> a >> b >> v;

    int cnt = ((v - b) / (a - b));
    if ((v - b) % (a - b) == 0){
        std::cout << cnt << std::endl;
    }
    else {
        std::cout << cnt + 1 << std::endl;
    }
    }
