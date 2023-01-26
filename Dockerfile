FROM alpine:latest
 
COPY main.c /app/

RUN apk update && apk add build-base
WORKDIR /app
RUN gcc -o main main.c


CMD ["./main"]