cmake_minimum_required(VERSION 3.8)
project(visualization_marker)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(visualization_msgs REQUIRED)

ament_export_dependencies(
  rclcpp
  geometry_msgs
  visualization_msgs)

  add_executable(basic_shapes src/basic_shapes.cpp)
  ament_target_dependencies(basic_shapes
    "rclcpp"
    "visualization_msgs")
  
  add_executable(points_and_lines src/points_and_lines.cpp)
  ament_target_dependencies(points_and_lines
    "rclcpp"
    "geometry_msgs"
    "visualization_msgs")

  add_executable(lines src/lines.cpp)
  ament_target_dependencies(lines
    "rclcpp"
    "geometry_msgs"
    "visualization_msgs")    

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

install(TARGETS
  basic_shapes
  points_and_lines
  lines
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

ament_package()
