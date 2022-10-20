""" Suppose you have a program that converts a string into Upper, 
Capitalized and Lower style using three different functions. 
Now create a test script for testing the three functionality of that program. 
Run using PyTest.

Write a function make_upper() to make the string in uppercase
Write a function make_capital() to make the string capitalized
Write a function make_lower() to make the string lowercase

Write a function named test_script() and write your code inside this function.
 """
import pytest

def make_upper(text):
    return text.upper()

def make_capital(text):
    return text.capitalize()

def make_lower(text):
    return text.lower()

def test_script():
    assert make_upper("python") == "PYTHON"
    assert make_capital("python") == "Python"
    assert make_lower("PYTHON") == "python"

