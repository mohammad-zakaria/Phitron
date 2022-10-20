replace_with = ["chief", "thief", "superintendent", "sweeper", "married", "left", "tried", "died"]
s = "I am the chief of Baghdad. Before that I used to be a superintendent of Bank Asia. Things have changed a lot since Jorina married me. A lot of girls tried to marry me."

def replace_word(text):
    # replace word with the next word in replace word list
    for word in text.split():
        if word in replace_with:
            text = text.replace(word, replace_with[replace_with.index(word) + 1])
    return text

output = replace_word(s)
print(output)