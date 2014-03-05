# Tests building debian packages with Clang

[How to setup sbuild](https://github.com/nonas/debian-clang/wiki/Building-Debian-with-Clang:-tests)

Improve things with [APT-cacher-NG](https://github.com/nonas/debian-clang/wiki/APT-cacher-NG)

Change sbuild configuration, add the following lines to ```~/.sbuildrc```:
```
# Do not update chroot everytime i.e. you need to take care of that yourself!
$apt_update = 0;
$apt_upgrade = 0;
$apt_distupgrade = 0;
```

1. Make sure a bug report does **not** already exists
2. Get package source from _sid_: ```apt-get -t unstable source _package_```
3. Backup the description file: ```cp _package-version_.dsc _package-version_.orig.dsc```
4. Update your sbuild chroot **once** (we disabled automatic updates in ```~/.sbuildrc```): ```sudo sbuild-update -udcar sid-amd64-sbuild```
  If GCC stuff was installed/updated, clean it (see the wiki page above).
5. Test if build still fails: ```sbuild _package-version_.dsc```
6. If  build fails, cd to package directory: ```cd _package-version_/```
7. Create a new patch using _quilt_: ```quilt new _patchname_```
8. Add source file(s) to fix: ```quilt add _some-source-to-fix_```
9. Fix source files using your favorite $EDITOR
10. "commit" them: ```quilt refresh```
11. Generate a _proper_ patch header: ```quilt header -e --dep3```
12. Un-apply all patches: ```quilt pop -a```
13. Move to parent folder: ```cd ..```
14. Create a source package from folder: ```dpkg-source -b _package-version_/```
15. Try a new build: ```sbuild _package-version_.dsc```

If your patch fixes the issue the build should be successful.
Fill a bug report with patch :-)

1. reportbug: FTBFS with clang instead of gcc
2. When editing the message, add ```Usertags: clang-ftbfs``` and ```User: pkg-llvm-team@lists.alioth.debian.org``` fields
3. Do **not** forget to attach the patch (```a``` after editing or ```reportbug -A path/to/the/patch```)
4. Send it :-)
