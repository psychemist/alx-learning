from fabric import local

def do_make():
    local('mkdir -p hello/world/')
    local('touch hello/world/psych')
