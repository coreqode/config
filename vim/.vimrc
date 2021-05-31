set runtimepath+=~/.vim_runtime

source ~/.vim_runtime/vimrcs/basic.vim
source ~/.vim_runtime/vimrcs/filetypes.vim
source ~/.vim_runtime/vimrcs/plugins_config.vim
source ~/.vim_runtime/vimrcs/extended.vim

try
source ~/.vim_runtime/my_configs.vim
catch
endtry
set relativenumber
let g:snipMate = { 'snippet_version' : 1 }
colorscheme molokai
syntax on
let NERDTreeQuitOnOpen = 1
set ttymouse=xterm2
set clipboard=unnamed
set autochdir
