sudo apt-get update
# set passwordauthentication "yes"
vim /etc/ssh/sshd_config

sudo ufw allow 4000/tcp
sudo iptables -A INPUT -p tcp --dport 4000 -j ACCEPT
sudo netfilter-persistent save
sudo netfilter-persistent reload
sudo apt-get upgrade -y

sudo apt-get install ubuntu-desktop

sudo adduser nomachine

sudo usermod -aG sudo,adm nomachine

sudo -i

wget https://download.nomachine.com/download/7.4/Linux/nomachine_7.4.1_1_amd64.deb
sudo dpkg -i ./nomachine_7.4.1_1_amd64.deb

sudo reboot
