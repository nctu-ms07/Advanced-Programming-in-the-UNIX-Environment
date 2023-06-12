FROM ubuntu:22.04

# install packages
RUN apt-get update
RUN yes | unminimize
RUN apt-get install -y tini iproute2 iputils-ping net-tools netcat
RUN apt-get install -y openssh-server sudo vim grep gawk rsync tmux man manpages manpages-dev manpages-posix manpages-posix-dev diffutils file
RUN apt-get install -y gcc gdb make yasm nasm tcpdump libcapstone-dev libncurses-dev python3 python3-pip python3-virtualenv
RUN apt-get install -y gcc-multilib g++-multilib
RUN apt-get install -y libc6-dbg dpkg-dev
RUN apt-get install -y curl git zsh
#RUN apt-get install -y qemu-user-static gcc-mips64-linux-gnuabi64
#RUN apt-get install -y musl
#RUN ln -s /lib/x86_64-linux-musl/libc.so /usr/lib/libc.musl-x86_64.so.1
# /var/run/sshd: required on ubuntu
RUN mkdir /var/run/sshd

# locale
RUN apt-get install -y locales
ENV LANGUAGE en_US.UTF-8
ENV LANG en_US.UTF-8
ENV LC_ALL en_US.UTF-8
RUN echo "en_US.UTF-8 UTF-8" > /etc/locale.gen
RUN /usr/sbin/locale-gen

# gen ssh-keys, allow empty password
#RUN ssh-keygen -t dsa -f /etc/ssh/ssh_host_dsa_key
#RUN ssh-keygen -t rsa -f /etc/ssh/ssh_host_rsa_key
RUN echo 'PermitEmptyPasswords yes' >> /etc/ssh/sshd_config
RUN sed -i 's/nullok_secure/nullok/' /etc/pam.d/common-auth

# add user/group, empty password, allow sudo
RUN groupadd -g 1000 chuang
RUN useradd --uid 1000 --gid 1000 --groups root,sudo,adm,users --create-home --password '' --shell /bin/bash chuang
RUN echo '%sudo ALL=(ALL) ALL' >> /etc/sudoers

# run the service
EXPOSE 22
ENTRYPOINT ["/usr/bin/tini", "--"]
CMD ["/usr/sbin/sshd", "-D"]

