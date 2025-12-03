# how to run cmake:
sudo apt install cmake   # if needed
cd project/
mkdir build
cd build
cmake ..
make -j$(nproc)
./raytracer
