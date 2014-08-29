echo "Replace gcc, g++ & cpp by clang"

cd /usr/bin
CLANG_VERSION="3.5"
VERSIONS="4.7 4.8 4.9"
for VERSION in $VERSIONS; do
rm g++-$VERSION gcc-$VERSION cpp-$VERSION
ln -s clang++-$CLANG_VERSION g++-$VERSION
ln -s clang-$CLANG_VERSION gcc-$VERSION
ln -s clang-$CLANG_VERSION cpp-$VERSION
done
rm g++ gcc cpp
ln -s clang++-$CLANG_VERSION g++
ln -s clang-$CLANG_VERSION gcc
ln -s clang-$CLANG_VERSION cpp

echo "Block the installation of new gcc version"

for VERSION in $VERSIONS; do
echo "gcc-$VERSION-base:amd64 hold"|dpkg --set-selections
echo "cpp-$VERSION hold"|dpkg --set-selections
echo "gcc-$VERSION hold"|dpkg --set-selections
echo "g++-$VERSION hold"|dpkg --set-selections
done

echo "cpp hold"|dpkg --set-selections
echo "g++ hold"|dpkg --set-selections
echo "gcc hold"|dpkg --set-selections

echo "Check if gcc, g++ & cpp are actually clang"
echo "* gcc:"
gcc --version|grep clang 
echo "* g++:"
g++ --version|grep clang
echo "* cpp:"
cpp --version|grep clang
