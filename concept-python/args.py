def cheeseshop(kind, *arguments, **keywords):
    print("-- Do you have any", kind, "?")
    print("-- I'm sorry, we're all out of", kind)
    for arg in arguments:
        print(arg)
    print("-" * 40)
    for kw in keywords:
        print(kw, ":", keywords[kw])

# *arguments receives a tuple containing all the positional arguments
# 	beyond the formal parameter list
""" **keywords receives a dictionary containing all keyword arguments
 	except those corresponding to a formal parameter """

cheeseshop("Limburger", "It's very runny, sir.",
           "It's really very, VERY runny, sir.",
           shopkeeper="Michael Palin",
           client="John Cleese",
           sketch="Cheese Shop Sketch")


def standard_arg(arg):
    print(arg)

def pos_only_arg(arg, /):
    print(arg)

def kwd_only_arg(*, arg):
    print(arg)

def combined_example(pos_only, /, standard, *, kwd_only):
    print(pos_only, standard, kwd_only)


standard_arg(2)

standard_arg(arg=2)

pos_only_arg(1)

pos_only_arg(arg=1)

kwd_only_arg(3)

kwd_only_arg(arg=3)

combined_example(1, 2, 3)

combined_example(1, 2, kwd_only=3)

combined_example(1, standard=2, kwd_only=3)

combined_example(pos_only=1, standard=2, kwd_only=3)
