#include <string>
#include <string_view>


class CreateAndDestroy{
public:
    CreateAndDestroy(int id, std::string_view message);
    ~CreateAndDestroy();

private:

int m_ID;
std::string m_message;
    
};