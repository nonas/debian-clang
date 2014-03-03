# Tests building packages debian with Clang

See [this wiki page](https://github.com/nonas/debian-clang/wiki/Building-Debian-with-Clang:-tests) to see how to setup a sbuild chroot.

1. Make sure a bug does *not* already exists
2. Get package source from _sid_: ```apt-get -t unstable source _package_```
3. Backup the description file: ```cp _package-version_.dsc _package-version_.orig.dsc```
4. Test if build still fails: ```sbuild _package-version_.dsc```
```
if  build fails:
```
cd _package-version_/
quilt new _patchname_
quild add _some-source-to-fix_
```
fix source files, then
```
quilt refresh
quilt pop -a
cd ..
dpkg-source -b _package-version_/
sbuild _package-version_.dsc
```
Build should be successful.
Fill a bug report with patch :-)
