# Try to clone $repo_addr. if $repo_name folder already exists, pull instead
#
# $repo_name: the name of the repository
# $repo_addr: "https://adir-ux@github.com/adir-ux/$repo_name"
#
#
# git clone $repo_addr || (cd $repo_folder ; git pull)
#
git clone "https://github.com/adir-ux/Technion-Scripts" || ( cd Technion-Scripts" ; git pull )
