#include <boost/algorithm/string.hpp>
#include <vector>
#include <string>
#include <cassert>
#include <iostream>

std::string poem = R"(Do not go gentle into that good night
Dylan Thomas - 1914-1953

Do not go gentle into that good night,
Old age should burn and rave at close of day;
Rage, rage against the dying of the light.

Though wise men at their end know dark is right,
Because their words had forked no lightning they
Do not go gentle into that good night.

Good men, the last wave by, crying how bright
Their frail deeds might have danced in a green bay,
Rage, rage against the dying of the light.

Wild men who caught and sang the sun in flight,
And learn, too late, they grieved it on its way,
Do not go gentle into that good night.

Grave men, near death, who see with blinding sight
Blind eyes could blaze like meteors and be gay,
Rage, rage against the dying of the light.

And you, my father, there on the sad height,
Curse, bless, me now with your fierce tears, I pray.
Do not go gentle into that good night.
Rage, rage against the dying of the light.)";

int main()
{
    using string_range = boost::iterator_range<std::string::iterator>;
    std::vector<string_range> matches;
    boost::find_all(matches,poem,"gentle");
    std::cout<<"find "<<matches.size()<<" matches at offest:"<<std::endl;
    for(auto& i:matches)
    {
        std::cout<<i.begin()-poem.begin()<<'\t';
    }
    std::cout<<std::endl;

    // find_first
    auto first=boost::find_first(poem,"gentle");
    assert(matches[0].begin()==first.begin());
    assert(matches[0].end()==first.end());
}