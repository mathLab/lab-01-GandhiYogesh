if(EXISTS "/workspaces/lab-01-GandhiYogesh/build-container/gtest[1]_tests.cmake")
  include("/workspaces/lab-01-GandhiYogesh/build-container/gtest[1]_tests.cmake")
else()
  add_test(gtest_NOT_BUILT gtest_NOT_BUILT)
endif()
