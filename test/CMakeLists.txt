PROJECT(test_calc)

ADD_LIBRARY(test_calc MODULE ${PROJECT_SOURCE_DIR}/test/test_calc.cpp)
TARGET_LINK_LIBRARIES(test_calc calc cutter cppcutter)

