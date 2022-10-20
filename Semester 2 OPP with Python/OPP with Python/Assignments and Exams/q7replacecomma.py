def replace_comma_with_space(text):
    result = ''
    for char in text:
        if char == ",":
            char = " "
        result += char
    return result

s = "I,have,been,practising,python,since,the,course,started"

output = replace_comma_with_space(s)
print(output)
