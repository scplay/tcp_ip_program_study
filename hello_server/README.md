## server / client 
compiled in linux ubt16.04 with gcc

    ./hserver 9999
    server is listen 9999

    ./hclient localhost 9999
    message from zeon : hello world

## questions
how to know the port is binded ? I use lsof -i , it does't show any listen port 
and how to loop the accept ? how to unbind the port ?
