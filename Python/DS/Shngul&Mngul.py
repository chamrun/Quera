infix = input()
postfix = ""

add_act = False
act = ""

for character in infix:
    if character.isalpha():
        postfix += character
        if add_act:
            postfix += act
            act = ""
            add_act = False

    elif character == "/" or character == "*":
        act = character + act
        add_act = True

    elif character == "+" or character == "-":
        act = character + act

print(postfix)
