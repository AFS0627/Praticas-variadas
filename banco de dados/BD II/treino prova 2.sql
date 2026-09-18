create or replace function dobro(a number)
return number
is
 dobro NUMBER;
begin
declare dobro number 
dobro := a * 2;
return dobro;
end;

create or replace function quadrado(a number)
return number 
is 
	quadrado number;
begin 
quadrado := a * a;
return quadrado;
end

create or replace function soma (a number,b number)
return number 
is 
soma number 
begin
soma := a + b;
return soma;
end

create or replace function verifica_idade(idade number)
return varchar2(20)
begin
if idade >= 18 then 
return 'Maior de idade';
else 
return 'Menor de idade'
end if
end

create or replace function positivo_negativo(numero number)
return varchar2 
begin 
if numero > 0 then 
return 'Positivo';
elsif numero = 0 then 
return 'Zero'
else 
return 'Negativo'
end if
end

create or replace procedure saudacao (in nome varchar2(100))
begin
DBMS_OUTPUT.PUT_LINE('Olá, ' || nome);
end 

create or replace procedura Mostrar_dobro (in numero number)
begin 
declare dobro number;
dobro := numero + numero;
DBMS_OUTPUT.PUT_LINE('O dobro é ' || dobro);
end 

