#!/usr/bin/env python3
import sys
import rclpy
from rclpy.node import Node
from printer_system.srv import PrintJob


class PrintClient(Node):
    def __init__(self):
        super().__init__('print_client')
        self.cli = self.create_client(PrintJob, 'submit_print_job')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for print service...')
        self.req = PrintJob.Request()

    def send_request(self, document_name):
        self.req.document_name = document_name
        return self.cli.call_async(self.req)


def main():
    rclpy.init()
    client = PrintClient()

    if len(sys.argv) < 2:
        print("Usage: ros2 run printer_system client_node <document_name>")
        return

    future = client.send_request(sys.argv[1])
    rclpy.spin_until_future_complete(client, future)

    if future.result() is not None:
        client.get_logger().info(f"Print job accepted? {future.result().accepted}")
    else:
        client.get_logger().error('Service call failed')

    client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
