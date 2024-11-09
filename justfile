alias b := build
alias r:= run


cpp_template := "#include <iostream>

int main()
{
    return 0;
}"

build target:
 @g++ {{target}}.cpp -o .build/{{target}}


run target:
 @g++ {{target}}/main.cpp -o .build/{{target}} && ./.build/{{target}}


new target:
    @mkdir {{target}} 
    @touch {{target}}/main.cpp
    @echo '# {{target}}' >{{target}}/README.md