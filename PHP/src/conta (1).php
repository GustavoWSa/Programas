<?php   

class Conta{
    public string $nome;
    public string $cpf;
    public float $saldo;
    public function sacar(float $retirar){
        if($retirar > $this->saldo){
            print("Saldo insuficiente") . PHP_EOL;
        }
        else{
            $this->saldo -= $retirar;
        }
    }
    public function depositar(float $deposito){
        if($deposito <= 0){
            print("Valor invalido") . PHP_EOL;
        }
        else{
            $this->saldo += $deposito;
        }
    }
}
$conta1 =new Conta();
$conta1->cpf = '123.456.789-10';
var_dump($conta1);
$conta2 = new Conta();
$conta2 = $conta1;
//echo $conta2->cpf;
$conta2->saldo=500;
$conta2->sacar(501);
var_dump($conta2);