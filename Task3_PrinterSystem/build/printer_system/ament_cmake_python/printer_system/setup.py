from setuptools import find_packages
from setuptools import setup

setup(
    name='printer_system',
    version='0.0.0',
    packages=find_packages(
        include=('printer_system', 'printer_system.*')),
)
