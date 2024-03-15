#include <iostream>
#include <rpp/rpp.hpp>

int main()
{
    rpp::source::just(1,3,4,5)
            | rpp::operators::flat_map([](auto v) { return rpp::source::just(v * 2); })
            | rpp::operators::subscribe([](int i) {
                std::cout << i << std::endl;
            });
    return 0;
}
