def check_registration_rules(**kwargs):
    valids = []

    for username, password in kwargs.items():
        if 3 < len(username) and username != 'quera' and username != 'codecup'\
                and 5 < len(password) and not password.isdigit():
            valids.append(username)

    return valids


if __name__ == '__main__':
    print(check_registration_rules(username='password', sadegh='He3@lsa', quera='kLS45@l$'))
