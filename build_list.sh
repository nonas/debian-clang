mkdir builds
cp package_list.txt builds/
cd builds
for i in `cat package_list.txt`; do
	mkdir $i
	cd $i
	apt-get source $i
	sbuild *.dsc
	cd ..
done
