sudo fuser -k 8888/tcp
rm objs/addon/cppngx/ngx_http_hello_world_module.o
./configure --with-debug --add-module=/home/kijin/nginx-1.14.0/cppngx --with-cc-opt="-Wno-deprecated -fomit-frame-pointer -pthread -Wno-unused -Wno-error -std=c++11 -fpermissive" --with-ld-opt="-lstdc++ -ldl -lpthread" --without-http_rewrite_module --without-http_fastcgi_module --without-http_scgi_module --without-http_proxy_module --without-http_split_clients_module --without-http_uwsgi_module --without-http_gzip_module
#./configure --with-debug --add-module=/home/kijin/projects/jsoffloader/extremejs/cppngx --with-cc-opt="-Wno-deprecated -fomit-frame-pointer -pthread -Wno-unused -Wno-error -std=c++11 -fpermissive" --with-ld-opt="-lstdc++ -ldl -lpthread" --without-http_rewrite_module --without-http_fastcgi_module --without-http_scgi_module --without-http_proxy_module --without-http_split_clients_module --without-http_uwsgi_module --without-http_gzip_module


sudo make install

sudo /usr/local/nginx/sbin/nginx

echo 'curl 128.173.239.239:8888/interp -v'
curl 128.173.239.239:8888/interp -v
