target='executable'

cmake -H. -Bbuild -DCMAKE_BUILD_TYPE=Debug -DTARGET=$target

make -C build

./build/$target

