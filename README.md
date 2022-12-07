# Digispark reverse shell - ABNT2 keyboard layout

**Esse é um simples script para Digispark que permite a execução de um reverse shell, usando o layout de teclado ABNT2 (pt-br)**

## Como usar

### Shell script

1. Altere o IP e a porta do servidor de escuta no script `shell.ps1`.<br/>
   Por padrão, o script está configurado para o IP local `192.168.0.80` na porta `5678`

### Máquina atacante

1. Inicie o netcat com o comando `stty raw -echo; (stty size; cat) | nc -lvnp <porta>`<br/>
   Substitua `<porta>` pela porta especificada em shell.ps1

### Digispark

1. Edite o arquivo `script/script.ino` e altere a fonte de download para o seu servidor com o arquivo `shell.ps1`.
2. Compile o script e faça o upload para o Digispark.

### Máquina alvo

1. Conecte o Digispark ao computador alvo.
2. Espere alguns segundos para que o script seja executado.
3. Happy hacking! 👩‍💻

-   OBS: Caso a máquina alvo esteja rodando windows 11, é necessário que a **proteção em tempo real** esteja desabilitada para que o script funcione corretamente

### 👮‍♀️ Aviso 

Esse script foi desenvolvido para fins educacionais e de testes de segurança, devendo ser utilizado apenas em ambientes controlados, e com devida autorização. Quaisquer ações e ou atividades relacionadas ao uso do script são inteiramente de sua responsabilidade.