create schema banco;

use banco;
create table termos(
termo varchar(200)

);
create table usuarios(
usuario varchar(20) not null primary key,
senha varchar(20) not null
);

insert into termos values('cachorro'),('gato'),('coelho');
insert into usuarios values('admin','123');

select * from usuarios;

