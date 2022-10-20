my_list = ['@F1','OBCD', '!', '@F2' , 'ADDA', '!', '@F3', 'ABCD', '!', '@F4', 'ABCD', '!', '@F5', 'ABCD', '!', '@F6', 'ABCD', '!', '@F7', 'ABCD', '!', '@F8', 'ABCD', '!', '@F9', 'ABCD', '!', '@F10', 'ABCD', '!', '@F11', 'ABCD', '!', '@F12', 'ABCD', '!', '@F13', 'ABCD', '!', '@F14', 'ABCD', '!', '@F15', 'ABCD', '!', '@F16', 'ABCD', '!', '@F17', 'ABCD', '!', '@F18', 'ABCD', '!', '@F19', 'ABCD', '!', '@F20', 'ABCD', '!', '@F21', 'ABCD', '!', '@F22', 'ABCD', '!', '@F23', 'ABCD', '!', '@F24', 'ABCD', '!', '@F25', 'ABCD', '!', '@F26', 'ABCD', '!', '@F27', 'ABCD', '!', '@F28', 'ABCD', '!', '@F29', 'ABCD', '!', '@F30', 'ABCD', '!', '@F31', 'ABCD', '!', '@F32', 'ABCD', '!', '@F33', 'ABCD', '!', '@F34', 'ABCD', '!', '@F35', 'ABCD', '!', '@F36', 'ABCD', '!', '@F37', 'ABCD', '!', '@F38', 'ABCD', '!', '@F39', 'ABCD', '!', '@F40', 'ABCD', '!', '@F41', 'ABCD', '!', '@F42', 'ABCD', '!', '@F43', 'ABCD', '!', '@F44', 'ABCD', '!', '@F45', 'ABCD', '!', '@F46', 'ABCD', '!', '@F47', 'ABCD', '!', '@F48', 'ABCD', '!', '@F49', 'ABCD', '!', '@F50', 'ABCD', '!', '@F51', 'ABCD', '!', '@F52', 'ABCD', '!']

# expected output is a dictionary: output_dict = {'@F1': 'OBCD', '@F2': 'ADDA', '@F3': 'ABCD', '@F4': 'ABCD', '@F5': 'ABCD', '@F6': 'ABCD', '@F7': 'ABCD', '@F8': 'ABCD', '@F9': 'ABCD', '@F10': 'ABCD', '@F11': 'ABCD', '@F12': 'ABCD', '@F13': 'ABCD', '@F14': 'ABCD', '@F15': 'ABCD', '@F16': 'ABCD', '@F17': 'ABCD', '@F18': 'ABCD', '@F19': 'ABCD', '@F20': 'ABCD', '@F21': 'ABCD', '@F22': 'ABCD', '@F23': 'ABCD', '@F24': 'ABCD', '@F25': 'ABCD', '@F26': 'ABCD', '@F27': 'ABCD', '@F28': 'ABCD', '@F29': 'ABCD', '@F30': 'ABCD', '@F31': 'ABCD', '@F32': 'ABCD', '@F33': 'ABCD', '@F34': 'ABCD', '@F35': 'ABCD', '@F36': 'ABCD', '@F37': 'ABCD', '@F38': 'ABCD', '@F39': 'ABCD', '@F40': 'ABCD', '@F41': 'ABCD', '@F42': 'ABCD', '@F43': 'ABCD', '@F44': 'ABCD', '@F45': 'ABCD', '@F46': 'ABCD', '@F47': 'ABCD', '@F48': 'ABCD', '@F49': 'ABCD', '@F50': 'ABCD', '@F51': 'ABCD', '@F52': 'ABCD'}

output_dict = {}

for index, val in enumerate(my_list):
    # print(index, val)
    print(index)
    if '@' in val[0]:
        output_dict[val] = my_list[index+1]

print(output_dict)