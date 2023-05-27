#include <memory>

#include "rclcpp/logging.hpp"
#include "rclcpp/rclcpp.hpp"
#include "visualization_msgs/msg/marker.hpp"

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("shapes");
  auto marker_pub = node->create_publisher<visualization_msgs::msg::Marker>(
    "visualization_marker", 1);
  rclcpp::Rate loop_rate(1);
  RCLCPP_INFO(node->get_logger(), "Ready");

  // Set our initial shape type to be a SPHERE
  uint32_t shape = visualization_msgs::msg::Marker::SPHERE;

  while (rclcpp::ok()) {
    
    visualization_msgs::msg::Marker marker;
    visualization_msgs::msg::Marker marker1;
    visualization_msgs::msg::Marker marker2;
    visualization_msgs::msg::Marker marker3;
    visualization_msgs::msg::Marker marker4;



    // Set the frame ID and timestamp. See the TF tutorials for information on these.
    marker.header.frame_id = "base_link";
    marker.header.stamp = rclcpp::Clock().now();

    // Set the namespace and id for this marker. This serves to create a unique ID
    // Any marker sent with the same namespace and id will overwrite the old one
    marker.ns = "shapes";
    marker.id = 0;

    // Set the marker type
    // Initially this is CUBE, and cycles between that and SPHERE, ARROW, and CYLINDER
    marker.type = shape;

    // Set the marker action
    // Options are ADD, DELETE, and DELETEALL
    marker.action = visualization_msgs::msg::Marker::ADD;

    // Set the pose of the marker
    // This is a full 6DOF pose relative to the frame/time specified in the header
    marker.pose.position.x = 0;
    marker.pose.position.y = 0;
    marker.pose.position.z = 0;
    marker.pose.orientation.x = 0.0;
    marker.pose.orientation.y = 0.0;
    marker.pose.orientation.z = 0.0;
    marker.pose.orientation.w = 1.0;

    // Set the scale of the marker -- 1x1x1 here means 1m on a side
    marker.scale.x = 1.0;
    marker.scale.y = 1.0;
    marker.scale.z = 1.0;

    // Set the color -- be sure to set alpha to something non-zero!
    marker.color.r = 0.0f;
    marker.color.g = 1.0f;
    marker.color.b = 0.0f;
    marker.color.a = 1.0;

    // Set the lifetime of the marker -- 0 indicates forever
    marker.lifetime = rclcpp::Duration::from_nanoseconds(0);

    // Publish the marker
    marker_pub->publish(marker);

    marker1.header.frame_id = "base_link";
    marker1.header.stamp = rclcpp::Clock().now();
    marker1.ns = "shapes";
    marker1.id = 1;
    marker1.type = shape;
    marker1.action = visualization_msgs::msg::Marker::ADD;
    marker1.pose.position.x = 2;
    marker1.pose.position.y = 0;
    marker1.pose.position.z = 0;
    marker1.pose.orientation.x = 0.0;
    marker1.pose.orientation.y = 0.0;
    marker1.pose.orientation.z = 0.0;
    marker1.pose.orientation.w = 1.0;
    marker1.scale.x = 1.0;
    marker1.scale.y = 1.0;
    marker1.scale.z = 1.0;
    marker1.color.r = 0.0f;
    marker1.color.g = 1.0f;
    marker1.color.b = 0.0f;
    marker1.color.a = 1.0;
    marker1.lifetime = rclcpp::Duration::from_nanoseconds(0);
    marker_pub->publish(marker1);

    marker2.header.frame_id = "base_link";
    marker2.header.stamp = rclcpp::Clock().now();
    marker2.ns = "shapes";
    marker2.id = 2;
    marker2.type = shape;
    marker2.action = visualization_msgs::msg::Marker::ADD;
    marker2.pose.position.x = 4;
    marker2.pose.position.y = 0;
    marker2.pose.position.z = 0;
    marker2.pose.orientation.x = 0.0;
    marker2.pose.orientation.y = 0.0;
    marker2.pose.orientation.z = 0.0;
    marker2.pose.orientation.w = 1.0;
    marker2.scale.x = 1.0;
    marker2.scale.y = 1.0;
    marker2.scale.z = 1.0;
    marker2.color.r = 0.0f;
    marker2.color.g = 1.0f;
    marker2.color.b = 0.0f;
    marker2.color.a = 1.0;
    marker2.lifetime = rclcpp::Duration::from_nanoseconds(0);
    marker_pub->publish(marker2);

    marker3.header.frame_id = "base_link";
    marker3.header.stamp = rclcpp::Clock().now();
    marker3.ns = "shapes";
    marker3.id = 3;
    marker3.type = shape;
    marker3.action = visualization_msgs::msg::Marker::ADD;
    marker3.pose.position.x = 6;
    marker3.pose.position.y = 0;
    marker3.pose.position.z = 0;
    marker3.pose.orientation.x = 0.0;
    marker3.pose.orientation.y = 0.0;
    marker3.pose.orientation.z = 0.0;
    marker3.pose.orientation.w = 1.0;
    marker3.scale.x = 1.0;
    marker3.scale.y = 1.0;
    marker3.scale.z = 1.0;
    marker3.color.r = 0.0f;
    marker3.color.g = 1.0f;
    marker3.color.b = 0.0f;
    marker3.color.a = 1.0;
    marker3.lifetime = rclcpp::Duration::from_nanoseconds(0);
    marker_pub->publish(marker3);

    marker4.header.frame_id = "base_link";
    marker4.header.stamp = rclcpp::Clock().now();
    marker4.ns = "shapes";
    marker4.id = 4;
    marker4.type = shape;
    marker4.action = visualization_msgs::msg::Marker::ADD;
    marker4.pose.position.x = 8;
    marker4.pose.position.y = 0;
    marker4.pose.position.z = 0;
    marker4.pose.orientation.x = 0.0;
    marker4.pose.orientation.y = 0.0;
    marker4.pose.orientation.z = 0.0;
    marker4.pose.orientation.w = 1.0;
    marker4.scale.x = 1.0;
    marker4.scale.y = 1.0;
    marker4.scale.z = 1.0;
    marker4.color.r = 0.0f;
    marker4.color.g = 1.0f;
    marker4.color.b = 0.0f;
    marker4.color.a = 1.0;
    marker4.lifetime = rclcpp::Duration::from_nanoseconds(0);
    marker_pub->publish(marker4);

    // Cycle between different shapes
    switch (shape) {
      case visualization_msgs::msg::Marker::SPHERE:
        shape = visualization_msgs::msg::Marker::ARROW;
        break;
      case visualization_msgs::msg::Marker::ARROW:
        shape = visualization_msgs::msg::Marker::SPHERE;
        break;
      // case visualization_msgs::msg::Marker::CYLINDER:
      //   shape = visualization_msgs::msg::Marker::CUBE;
      //   break;
      // case visualization_msgs::msg::Marker::CUBE:
      //   shape = visualization_msgs::msg::Marker::SPHERE;
      //   break;
    }

    loop_rate.sleep();
  }
}
