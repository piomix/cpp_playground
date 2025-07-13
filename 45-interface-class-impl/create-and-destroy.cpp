#include <format>
#include <iostream>
#include "CreateAndDestroy.h"

CreateAndDestroy::CreateAndDestroy(int id, std::string_view message)
    : m_ID{id}, m_message{message} {
        std::cout << std::format("Object: {} constructor run, message: {}\n", m_ID, m_message);
}

CreateAndDestroy::~CreateAndDestroy() {
    std::cout << std::format("Object: {} destructor run, message: {}\n", m_ID, m_message);
}