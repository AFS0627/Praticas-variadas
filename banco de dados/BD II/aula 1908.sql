drop table if exists produto_auditoria;

create table produto_auditoria(
id int NOT null auto_increment,
productid int not null,
productname varchar(50) not null,
supplierid int not null,
unitprice decimal(12,2) not null,
package varchar(30) not null,
isdiscontinued bit(1) not null,
updatedat datetime not null,
operation char(3) not null,
primary key (id),
constraint produto_auditoria_chk_1 check (((operation = 'INS') or (operation = 'DEL')))
);

drop trigger if exists trg_produto_auditoriaINSERT;
DELIMITER $$
create trigger trg_produto_auditoriaINSERT after insert on product
for each row
begin
insert into produto_auditoria (
productid,
productname,
suplierid,
unitprice,
package,
isdiscontinued,
updatedat,
operation) values (
new.id,
new.productname,
new.supplierid,
new.unitprice,
new.package,
new.isdiscontinued,
now(), 'INS' );

end$$
DELIMITER;


