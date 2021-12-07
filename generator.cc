#include "generator.hh"

std::string generator::make_string(std::size_t const length_limit)
{
    static constexpr auto rand_char_limit = 25;
    static constexpr auto first_capital_char = 65;
    static constexpr auto first_lowercase_char = 97;

    std::string random_string;
    random_string.resize(std::rand() % length_limit + length_limit / 3);

    std::generate(std::begin(random_string), std::end(random_string), [] {
        return char((std::rand() % rand_char_limit) +
            (std::rand() % 2 == 1 ? first_capital_char : first_lowercase_char));
        });
    return random_string;
}
