#!/usr/bin/python3
from fabric import Connection

def do_connect():
    result = Connection('54.152.106.255').run('uname -s', hide=True)
    msg = "Ran {0.command!r} on {0.connection.host}, got stdout:\n{0.stdout}"
    print(msg.format(result))
