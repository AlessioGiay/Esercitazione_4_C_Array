list(APPEND rateOfReturn_headers ${CMAKE_CURRENT_SOURCE_DIR}/Utils.hpp)
list(APPEND rateOfReturn_sources ${CMAKE_CURRENT_SOURCE_DIR}/Utils.cpp)

list(APPEND rateOfReturn_includes ${CMAKE_CURRENT_SOURCE_DIR})

set(rateOfReturn_sources ${rateOfReturn_sources} PARENT_SCOPE)
set(rateOfReturn_headers ${rateOfReturn_headers} PARENT_SCOPE)
set(rateOfReturn_includes ${rateOfReturn_includes} PARENT_SCOPE)
