FROM ubuntu:18.04
LABEL maintainer="jp@gnugroup.org"
ENV REFRESHED_AT 2022-06-14
RUN apt-get update
RUN apt-get install -y nginx
RUN echo "Hi, I am page from your container" > /var/www/html/index.html
ENTRYPOINT ["/usr/sbin/nginx","-g","daemon off;"]
EXPOSE 80
