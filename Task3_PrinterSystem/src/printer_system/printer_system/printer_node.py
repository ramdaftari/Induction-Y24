#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from printer_system.srv import PrintJob


class PrinterNode(Node):
    def __init__(self):
        super().__init__('printer_node')
        self.srv = self.create_service(PrintJob, 'submit_print_job', self.handle_print_job)

    def handle_print_job(self, request, response):
        self.get_logger().info(f"Received print request for document: {request.document_name}")
        response.accepted = True  
        return response


def main():
    rclpy.init()
    node = PrinterNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
