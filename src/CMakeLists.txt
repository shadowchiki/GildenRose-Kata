set(SRC_LIB_NAME src)
add_library(
  ${SRC_LIB_NAME}
  itemHandle/ItemHandle.hpp
  itemHandle/ItemHandle.cpp
  itemHandle/AgedBrieHandle.cpp
  itemHandle/AgedBrieHandle.hpp
  itemHandle/BackStagePasses.hpp
  itemHandle/BackStagePasses.cpp
  itemHandle/StandarHandle.hpp
  itemHandle/StandarHandle.cpp
  itemHandle/Sulfuras.hpp
  itemHandle/Sulfuras.cpp)

target_sources(${SRC_LIB_NAME} PRIVATE GildedRose.cc)
target_include_directories(${SRC_LIB_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
