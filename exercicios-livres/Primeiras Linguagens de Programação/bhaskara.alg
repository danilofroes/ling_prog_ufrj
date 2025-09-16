comment Calculo de Bhaskara em ALGOL 60;
comment Autor: Danilo Fróes;

begin
    real a, b, c, delta, x1, x2;

    write("--- Calculadora de Bhaskara ---");
    write("Digite o coeficiente a: ");
    read(a);
    write("Digite o coeficiente b: ");
    read(b);
    write("Digite o coeficiente c: ");
    read(c);

    if a = 0 then begin
        write("O valor 'a' nao pode ser zero em uma equacao de segundo grau");
    end

    else begin
        delta := b*b - (4 * a * c);

        if delta < 0 then begin
            write("O problema nao possui raizes reais - delta < 0 -");
        end

        else if delta > 0 then begin
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            write("O valor das raizes reais da sua equacao de segundo grau sao:");
            write("x1 = "); write(x1);
            write("x2 = "); write(x2);
        end
        
        else begin
            x1 = (-b) / (2 * a);
            write("Existe apenas uma raiz real - delta = 0 -");
            write("x = "); write(x1);
        end;
    end;
end.