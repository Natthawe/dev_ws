#define _USE_MATH_DEFINES

#include <chrono>
#include <cmath>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/point.hpp"
#include "visualization_msgs/msg/marker.hpp"

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("points_and_lines");
  auto marker_pub = node->create_publisher<visualization_msgs::msg::Marker>(
    "visualization_marker", 10);
  rclcpp::Rate loop_rate(30);

  float f = 0.0f;
  while (rclcpp::ok()) {
    visualization_msgs::msg::Marker line_strip;
    line_strip.header.frame_id = "/frame";
    line_strip.header.stamp = rclcpp::Clock().now();
    line_strip.ns = "points_and_lines";
    line_strip.action = visualization_msgs::msg::Marker::ADD;

    line_strip.id = 1;

    line_strip.type = visualization_msgs::msg::Marker::LINE_STRIP;


    // LINE_STRIP/LINE_LIST markers use only the x component of scale, for the line width
    line_strip.scale.x = 0.2;

    // // Line strip is blue
    // line_strip.color.b = 1.0;
    // line_strip.color.a = 1.0;

    // // Points are green
    // line_strip.color.g = 1.0f;
    // line_strip.color.a = 1.0;

    // Line list is red
    line_strip.color.r = 1.0;
    line_strip.color.a = 1.0;

// // right ->
//     for (float i = 0; i < 11; i++){
//       float y = 0.0;
//       geometry_msgs::msg::Point p;
//       p.x = i;
//       p.y = y;
//       line_strip.points.push_back(p);
//     }

// // up ||
//     for (float i = 0; i < 11; i++){
//       float x = 10.0;
//       float y = i;
//       geometry_msgs::msg::Point p;
//       p.x = x;
//       p.y = y;
//       line_strip.points.push_back(p);
//     } 

// // left <-
//     for (float i = 10; i > -1; i--){
//       float y = 10.0;
//       geometry_msgs::msg::Point p;
//       p.x = i;
//       p.y = y;
//       line_strip.points.push_back(p);
//     }    

// // down || 
//     for (float i = 10; i > -1; i--){
//       float y = i;
//       geometry_msgs::msg::Point p;
//       p.y = y;
//       line_strip.points.push_back(p);
//     } 


//number 9
// right ->
    for (float i = 0; i < 11; i++){
      float y = -10.0;
      geometry_msgs::msg::Point p;
      p.x = i;
      p.y = y;
      line_strip.points.push_back(p);
    }

// up || 
    for (float i = -10.0; i < 11; i++){
      float x = 10.0;
      geometry_msgs::msg::Point p;
      p.x = x;
      p.y = i;
      line_strip.points.push_back(p);
    } 

// left <-
    for (float i = 10; i > -1; i--){
      float y = 10.0;
      geometry_msgs::msg::Point p;
      p.x = i;
      p.y = y;
      line_strip.points.push_back(p);
    }

// down ||
    for (float i = 10; i > -1; i--){
      float x = 0.0;
      geometry_msgs::msg::Point p;
      p.x = x;
      p.y = i;
      line_strip.points.push_back(p);
    }

// right ->
    for (float i = 0; i < 11; i++){
      float y = 0.0;
      geometry_msgs::msg::Point p;
      p.x = i;
      p.y = y;
      line_strip.points.push_back(p);
    }

    marker_pub->publish(line_strip);


    loop_rate.sleep();

    f += 0.04f;
  }
}
