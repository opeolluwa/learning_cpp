alias b := build
alias r:= run



build target:
 @g++ {{target}}.cpp -o build_source/{{target}}


run target:
 @g++ {{target}}.cpp -o build_source/{{target}} && ./build_source/{{target}}
