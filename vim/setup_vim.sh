git clone --depth=1 https://github.com/amix/vimrc.git ~/.vim_runtime
sh ~/.vim_runtime/install_awesome_vimrc.sh

cp ./.vimrc ~/
cp ./basic.vim ~/.vim_runtime/vimrcs/

if [ ! -d ~/.vim ]
then
    mkdir ~/.vim
fi

cp -r ./colors ~/.vim/
echo "------- COMPLETED --------"
