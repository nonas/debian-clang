echo "Replace gcc, g++ & cpp by clang"

cd /usr/bin
VERSIONS="4.8"
for VERSION in $VERSIONS; do
rm g++-$VERSION gcc-$VERSION cpp-$VERSION
ln -s clang++ g++-$VERSION
ln -s clang gcc-$VERSION
ln -s clang cpp-$VERSION
done
rm g++ gcc cpp
ln -s clang++ g++
ln -s clang gcc
ln -s clang cpp

echo "Block the installation of new gcc version"

echo "cpp hold"|dpkg --set-selections
echo "cpp-4.8 hold"|dpkg --set-selections
echo "g++ hold"|dpkg --set-selections
echo "g++-4.8 hold"|dpkg --set-selections
echo "gcc hold"|dpkg --set-selections
echo "gcc-4.8 hold"|dpkg --set-selections
echo "gcc-4.8-base:amd64 hold"|dpkg --set-selections

echo "Check if gcc, g++ & cpp are actually clang"
echo "* gcc:"
gcc --version|grep clang 
echo "* g++:"
g++ --version|grep clang
echo "* cpp:"
cpp --version|grep clang
