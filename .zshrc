# If you come from bash you might have to change your $PATH.
# export PATH=$HOME/bin:$HOME/.local/bin:/usr/local/bin:$PATH

# Path to your oh-my-zsh installation.
export ZSH="$HOME/.oh-my-zsh"

# Set name of the theme to load --- if set to "random", it will
# load a random theme each time oh-my-zsh is loaded, in which case,
# to know which specific one was loaded, run: echo $RANDOM_THEME
# See https://github.com/ohmyzsh/ohmyzsh/wiki/Themes
# ZSH_THEME="robbyrussell"
ZSH_THEME="minimal"

# Set list of themes to pick from when loading at random
# Setting this variable when ZSH_THEME=random will cause zsh to load
# a theme from this variable instead of looking in $ZSH/themes/
# If set to an empty array, this variable will have no effect.
# ZSH_THEME_RANDOM_CANDIDATES=( "robbyrussell" "agnoster" )

# Uncomment the following line to use case-sensitive completion.
# CASE_SENSITIVE="true"

# Uncomment the following line to use hyphen-insensitive completion.
# Case-sensitive completion must be off. _ and - will be interchangeable.
# HYPHEN_INSENSITIVE="true"

# Uncomment one of the following lines to change the auto-update behavior
# zstyle ':omz:update' mode disabled  # disable automatic updates
# zstyle ':omz:update' mode auto      # update automatically without asking
# zstyle ':omz:update' mode reminder  # just remind me to update when it's time

# Uncomment the following line to change how often to auto-update (in days).
# zstyle ':omz:update' frequency 13

# Uncomment the following line if pasting URLs and other text is messed up.
# DISABLE_MAGIC_FUNCTIONS="true"

# Uncomment the following line to disable colors in ls.
# DISABLE_LS_COLORS="true"

# Uncomment the following line to disable auto-setting terminal title.
# DISABLE_AUTO_TITLE="true"

# Uncomment the following line to enable command auto-correction.
# ENABLE_CORRECTION="true"

# Uncomment the following line to display red dots whilst waiting for completion.
# You can also set it to another string to have that shown instead of the default red dots.
# e.g. COMPLETION_WAITING_DOTS="%F{yellow}waiting...%f"
# Caution: this setting can cause issues with multiline prompts in zsh < 5.7.1 (see #5765)
# COMPLETION_WAITING_DOTS="true"

# Uncomment the following line if you want to disable marking untracked files
# under VCS as dirty. This makes repository status check for large repositories
# much, much faster.
# DISABLE_UNTRACKED_FILES_DIRTY="true"

# Uncomment the following line if you want to change the command execution time
# stamp shown in the history command output.
# You can set one of the optional three formats:
# "mm/dd/yyyy"|"dd.mm.yyyy"|"yyyy-mm-dd"
# or set a custom format using the strftime function format specifications,
# see 'man strftime' for details.
# HIST_STAMPS="mm/dd/yyyy"

# Would you like to use another custom folder than $ZSH/custom?
# ZSH_CUSTOM=/path/to/new-custom-folder

# Which plugins would you like to load?
# Standard plugins can be found in $ZSH/plugins/
# Custom plugins may be added to $ZSH_CUSTOM/plugins/
# Example format: plugins=(rails git textmate ruby lighthouse)
# Add wisely, as too many plugins slow down shell startup.
plugins=(git z )

source $ZSH/oh-my-zsh.sh

# User configuration

# export MANPATH="/usr/local/man:$MANPATH"

# You may need to manually set your language environment
# export LANG=en_US.UTF-8

# Preferred editor for local and remote sessions
# if [[ -n $SSH_CONNECTION ]]; then
#   export EDITOR='vim'
# else
#   export EDITOR='mvim'
# fi

# Compilation flags
# export ARCHFLAGS="-arch x86_64"

# Set personal aliases, overriding those provided by oh-my-zsh libs,
# plugins, and themes. Aliases can be placed here, though oh-my-zsh
# users are encouraged to define aliases within the ZSH_CUSTOM folder.
# For a full list of active aliases, run `alias`.
#
# Example aliases
# alias zshconfig="mate ~/.zshrc"
# alias ohmyzsh="mate ~/.oh-my-zsh"
export PATH="/opt/homebrew/opt/llvm/bin:$PATH"

export LDFLAGS="-L/opt/homebrew/opt/llvm/lib"
export CPPFLAGS="-I/opt/homebrew/opt/llvm/include"

# >>> conda initialize >>>
# !! Contents within this block are managed by 'conda init' !!
__conda_setup="$('/Users/coreqode/miniconda3/bin/conda' 'shell.zsh' 'hook' 2> /dev/null)"
if [ $? -eq 0 ]; then
    eval "$__conda_setup"
else
    if [ -f "/Users/coreqode/miniconda3/etc/profile.d/conda.sh" ]; then
        . "/Users/coreqode/miniconda3/etc/profile.d/conda.sh"
    else
        export PATH="/Users/coreqode/miniconda3/bin:$PATH"
    fi
fi
unset __conda_setup
# <<< conda initialize <<<


alias lvim='/Users/coreqode/.local/bin/lvim'
alias viewmesh="/Users/coreqode/exec/gp-cli/precompiled/osx/bin/viewmesh"

export PATH="$HOME/.rbenv/bin:$PATH"
eval "$(rbenv init -)"


encrypt_text() {
    echo "Enter password for encryption:"
    read -s password
    echo
    echo "$1" | openssl enc -aes-256-cbc -salt -pbkdf2 -pass pass:"$password" | base64
}

decrypt_text() {
    echo "Enter password for decryption:"
    read -s password
    echo
    echo "$1" | base64 --decode | openssl enc -d -aes-256-cbc -salt -pbkdf2 -pass pass:"$password" 2>/dev/null
    if [ $? -eq 0 ]; then
        echo "Decryption successful."
    else
        echo "Decryption failed. Please check your password and ensure the text is properly encrypted."
    fi
}

alias enc='encrypt_text'
alias dec='decrypt_text'

cpu_usage() {
  top -l 1 | grep "CPU usage" | awk '{print $3 " " $4 " " $5 " " $6}'
}

search() {
  grep -rnw . -e "$1"
}

histg() {
  history 1 | grep "$1"
}

pathadd() {
  if [[ ":$PATH:" != *":$1:"* ]]; then
    export PATH="$1:$PATH"
  fi
}

fzf_find() {
  local file
  file=$(find . -type f | fzf)
  if [ -n "$file" ]; then
    vim "$file"
  fi
}

timer() {
  local start=$(date +%s)
  "$@"
  local end=$(date +%s)
  local duration=$((end - start))
  echo "Command took $duration seconds."
}

up() {
  local d=""
  for ((i=1;i<=${1:-1};i++)); do d="../$d"; done
  cd "$d"
}

notify() {
  "$@"
  if [ $? -eq 0 ]; then
    if [[ "$OSTYPE" == "darwin"* ]]; then
      osascript -e 'display notification "Command completed successfully." with title "Notification"'
    elif [[ "$OSTYPE" == "linux-gnu"* ]]; then
      notify-send "Notification" "Command completed successfully."
    else
      echo "Command completed successfully."
    fi
  else
    if [[ "$OSTYPE" == "darwin"* ]]; then
      osascript -e 'display notification "Command failed." with title "Notification"'
    elif [[ "$OSTYPE" == "linux-gnu"* ]]; then
      notify-send "Notification" "Command failed."
    else
      echo "Command failed."
    fi
  fi
}


histsearch() {
  local cmd
  cmd=$(history 1 | fzf --tac --preview 'echo {}' | sed 's/^ *[0-9]* *//')
  if [ -n "$cmd" ]; then
    BUFFER="$cmd"
    CURSOR=${#BUFFER}
    zle reset-prompt
  fi
}
zle -N histsearch
bindkey '^R' histsearch


# Directory Navigation
alias ..='cd ..'
alias ...='cd ../..'
alias ....='cd ../../..'

# File Operations
alias ll='ls -la'
alias la='ls -A'
alias l='ls -CF'

alias today='date +"%Y-%m-%d"'
alias now='date +"%H:%M:%S"'

tmux_ns() {
  if [ -z "$1" ]; then
    echo "Usage: tmux_new_session <session_name>"
    return 1
  fi
  tmux new-session -s "$1" -n main
}

tmux_as() {
  if [ -z "$1" ]; then
    echo "Usage: tmux_attach <session_name>"
    return 1
  fi
  tmux attach-session -t "$1"
}

findbig() {
  if [ -z "$1" ]; then
    echo "Usage: findbig <size>"
    echo "Example: findbig 100M  # Finds files larger than 100MB"
    return 1
  fi
  find . -type f -size +"$1"
}

finddup() {
  fdupes -r .
}






set -o vi
