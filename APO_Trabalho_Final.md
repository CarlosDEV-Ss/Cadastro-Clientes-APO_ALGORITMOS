# ATIVIDADE PRÁTICA ORIENTADA (APO)
## ALGORITMOS E FUNDAMENTOS DE PROGRAMAÇÃO DE COMPUTADORES

---

**Aluno:** Carlo  
**Professor:** Elyssandro Piffer, MSc.  
**Disciplina:** Algoritmos e Fundamentos de Programação de Computadores  
**Instituição:** UNIPAR EAD  
**Data:** Novembro de 2025

---

## SUMÁRIO

1. [ETAPA 1 – PESQUISA E CONTEXTUALIZAÇÃO](#etapa-1--pesquisa-e-contextualização)
   - 1.1 [Nuvem de Palavras](#11-nuvem-de-palavras)
2. [ETAPA 2 – CONCEITOS FUNDAMENTAIS](#etapa-2--conceitos-fundamentais)
   - 2.1 [Comandos de Entrada, Processamento e Saída](#21-comandos-de-entrada-processamento-e-saída)
   - 2.2 [Estruturas de Decisão](#22-estruturas-de-decisão)
   - 2.3 [Estruturas de Repetição](#23-estruturas-de-repetição)
   - 2.4 [Estruturas Homogêneas e Heterogêneas](#24-estruturas-homogêneas-e-heterogêneas)
   - 2.5 [Modularização](#25-modularização)
3. [ETAPA 3 – DESENVOLVIMENTO DO PROGRAMA](#etapa-3--desenvolvimento-do-programa)
   - 3.1 [Código-Fonte](#31-código-fonte)
   - 3.2 [Explicação do Código](#32-explicação-do-código)
   - 3.3 [Compilação e Execução](#33-compilação-e-execução)
4. [REFERÊNCIAS](#referências)

---

## ETAPA 1 – PESQUISA E CONTEXTUALIZAÇÃO

### 1.1 Nuvem de Palavras

Após a leitura dos capítulos indicados (páginas 50 a 240) do livro "Fundamentos da programação de computadores: algoritmos, PASCAL, C/C++ e JAVA" (2ª edição), foram identificadas as 15 principais palavras reservadas e comandos da linguagem C relacionados às estruturas de controle:

**Principais Palavras-Chave e Comandos:**

1. **if** - Estrutura de decisão simples
2. **else** - Alternativa da estrutura de decisão
3. **for** - Estrutura de repetição com contador
4. **while** - Estrutura de repetição condicional
5. **do** - Início da estrutura do-while
6. **switch** - Estrutura de seleção múltipla
7. **case** - Casos da estrutura switch
8. **break** - Interrupção de laços
9. **continue** - Pula iteração do laço
10. **return** - Retorno de função
11. **void** - Tipo de retorno vazio
12. **int** - Tipo de dado inteiro
13. **float** - Tipo de dado ponto flutuante
14. **char** - Tipo de dado caractere
15. **struct** - Estrutura de dados heterogênea

**[Inserir imagem da nuvem de palavras aqui]**

---

## ETAPA 2 – CONCEITOS FUNDAMENTAIS

### 2.1 Comandos de Entrada, Processamento e Saída

**a) Definição dos comandos:**

#### Entrada de Dados
São comandos utilizados para receber informações do usuário durante a execução do programa. Em C, os principais comandos de entrada são:

- **`scanf()`**: Lê dados formatados da entrada padrão (teclado)
  ```c
  scanf("%d", &idade);
  ```
- **`gets()` / `fgets()`**: Lê strings completas

**Exemplos práticos:**
- Ler um número inteiro
- Ler o nome de uma pessoa
- Ler múltiplos valores em uma única linha

#### Processamento de Dados
É o conjunto de operações lógicas e aritméticas realizadas sobre os dados recebidos. Inclui:

- **Operações aritméticas**: `+`, `-`, `*`, `/`, `%`
- **Operações lógicas**: `&&` (E), `||` (OU), `!` (NÃO)
- **Operações relacionais**: `==`, `!=`, `>`, `<`, `>=`, `<=`
- **Atribuições**: `=`, `+=`, `-=`, `*=`, `/=`

**Exemplos:**
```c
// Cálculo de média
media = (nota1 + nota2 + nota3) / 3;

// Verificação de aprovação
aprovado = (media >= 7.0);
```

#### Saída de Dados
São comandos para exibir resultados ao usuário. Em C:

- **`printf()`**: Imprime dados formatados na tela
  ```c
  printf("A média é: %.2f\n", media);
  ```
- **`puts()`**: Imprime uma string seguida de quebra de linha

**Formato de saída:**
- `%d` - inteiros
- `%f` - decimais
- `%c` - caracteres
- `%s` - strings
- `%.2f` - decimais com 2 casas

---

### 2.2 Estruturas de Decisão

**b) Estruturas de Decisão Simples e Composta:**

#### Estrutura de Decisão Simples
Executa um bloco de código apenas quando uma condição é verdadeira.

**Sintaxe:**
```c
if (condição) {
    // comandos executados se condição for verdadeira
}
```

**Exemplo prático:**
```c
if (idade >= 18) {
    printf("Você é maior de idade\n");
}
```

**Quando usar:** Quando há apenas uma ação a ser tomada em caso de condição verdadeira.

#### Estrutura de Decisão Composta
Executa um bloco de código quando a condição é verdadeira e outro bloco quando é falsa.

**Sintaxe:**
```c
if (condição) {
    // comandos se verdadeiro
} else {
    // comandos se falso
}
```

**Exemplo prático:**
```c
if (nota >= 7.0) {
    printf("Aprovado\n");
} else {
    printf("Reprovado\n");
}
```

**Diferenças principais:**
- **Simples**: Apenas uma ação condicional
- **Composta**: Duas ações alternativas (verdadeiro/falso)

**Aplicações:**
- Validação de dados
- Tomada de decisões baseadas em condições
- Controle de fluxo do programa

---

### 2.3 Estruturas de Repetição

**c) Diferenças entre PARA (for) e ENQUANTO (while):**

#### Estrutura FOR (PARA)
Utilizada quando se conhece previamente o número de repetições.

**Sintaxe:**
```c
for (inicialização; condição; incremento) {
    // comandos a repetir
}
```

**Exemplo:**
```c
for (int i = 0; i < 5; i++) {
    printf("Iteração %d\n", i);
}
```

**Características:**
- Contador explícito
- Número de iterações conhecido
- Inicialização, condição e incremento em uma linha
- Ideal para percorrer arrays

#### Estrutura WHILE (ENQUANTO)
Utilizada quando o número de repetições depende de uma condição.

**Sintaxe:**
```c
while (condição) {
    // comandos a repetir
}
```

**Exemplo:**
```c
int opcao = 0;
while (opcao != 5) {
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
}
```

**Características:**
- Testa condição antes de executar
- Número de iterações indeterminado
- Depende de condição lógica
- Pode não executar nenhuma vez

#### Comparação Prática

| Característica | FOR | WHILE |
|----------------|-----|-------|
| Nº de iterações | Conhecido | Desconhecido |
| Contador | Explícito | Implícito/Manual |
| Uso típico | Arrays, contagens | Menus, validações |
| Teste inicial | Sim | Sim |

**Quando usar cada um:**
- **FOR**: Percorrer arrays, realizar contagens definidas
- **WHILE**: Menus de opções, leitura de dados até condição específica

---

### 2.4 Estruturas Homogêneas e Heterogêneas

**d) Conceitos sobre estruturas de dados:**

#### Estruturas Homogêneas (Arrays/Vetores)
Coleção de elementos do **mesmo tipo** de dado, armazenados sequencialmente na memória.

**Características:**
- Todos os elementos são do mesmo tipo (`int`, `float`, `char`)
- Acesso por índice numérico
- Tamanho fixo definido na declaração
- Armazenamento contíguo na memória

**Sintaxe:**
```c
tipo nome[tamanho];
```

**Exemplos:**
```c
// Vetor de inteiros
int numeros[5] = {10, 20, 30, 40, 50};

// Vetor de floats
float notas[3];

// Matriz (array bidimensional)
int matriz[3][3];

// String (vetor de caracteres)
char nome[50];
```

**Acesso aos elementos:**
```c
printf("%d", numeros[0]); // Imprime 10
notas[1] = 8.5;           // Atribui valor ao segundo elemento
```

**Vantagens:**
- Eficiência no acesso (índice direto)
- Facilita operações em conjunto de dados similares
- Uso otimizado de memória

**Aplicações:**
- Armazenar notas de alunos
- Lista de temperaturas
- Nomes em uma agenda

#### Estruturas Heterogêneas (Structs)
Coleção de elementos de **tipos diferentes** agrupados sob um único nome.

**Características:**
- Elementos podem ser de tipos diferentes
- Acesso por nome do campo
- Representa entidades do mundo real
- Permite organização lógica de dados relacionados

**Sintaxe:**
```c
struct nome_estrutura {
    tipo1 campo1;
    tipo2 campo2;
    tipo3 campo3;
};
```

**Exemplo prático:**
```c
struct Pessoa {
    int codigo;
    char nome[50];
    int idade;
    float salario;
};

// Declaração de variável
struct Pessoa funcionario;

// Atribuição de valores
funcionario.codigo = 1;
strcpy(funcionario.nome, "João Silva");
funcionario.idade = 30;
funcionario.salario = 3500.50;

// Acesso aos dados
printf("Nome: %s\n", funcionario.nome);
printf("Salário: R$ %.2f\n", funcionario.salario);
```

**Vantagens:**
- Organização lógica de dados relacionados
- Facilita manutenção do código
- Representa entidades complexas
- Permite criar tipos de dados customizados

**Aplicações:**
- Cadastro de clientes
- Registro de produtos
- Dados de funcionários

#### Comparação

| Aspecto | Homogênea | Heterogênea |
|---------|-----------|-------------|
| Tipos de dados | Único tipo | Múltiplos tipos |
| Acesso | Por índice | Por nome do campo |
| Exemplo | `int numeros[5]` | `struct Pessoa` |
| Uso | Dados similares | Entidades complexas |

---

### 2.5 Modularização

**e) Significado de Modularização em Programação:**

#### Conceito
Modularização é a técnica de dividir um programa em partes menores e independentes chamadas **módulos** ou **funções**, onde cada módulo executa uma tarefa específica.

#### Características Principais

**1. Divisão de Responsabilidades**
- Cada função tem uma única responsabilidade
- Código organizado por funcionalidade
- Facilita o entendimento do programa

**2. Reutilização de Código**
- Funções podem ser chamadas múltiplas vezes
- Evita duplicação de código
- Economiza tempo de desenvolvimento

**3. Facilita Manutenção**
- Alterações localizadas em funções específicas
- Menor risco de introduzir erros
- Testes mais simples e específicos

#### Tipos de Funções

**Funções sem retorno (void):**
```c
void imprimirMensagem() {
    printf("Bem-vindo ao sistema!\n");
}
```

**Funções com retorno:**
```c
int calcularSoma(int a, int b) {
    return a + b;
}
```

**Funções com parâmetros:**
```c
float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3.0;
}
```

#### Exemplo Prático Completo

**Programa sem modularização:**
```c
int main() {
    // Todo o código misturado
    int num1, num2;
    printf("Digite dois números: ");
    scanf("%d %d", &num1, &num2);
    int soma = num1 + num2;
    printf("Soma: %d\n", soma);
    int produto = num1 * num2;
    printf("Produto: %d\n", produto);
    return 0;
}
```

**Programa com modularização:**
```c
// Função para ler números
void lerNumeros(int *a, int *b) {
    printf("Digite dois números: ");
    scanf("%d %d", a, b);
}

// Função para calcular soma
int calcularSoma(int a, int b) {
    return a + b;
}

// Função para calcular produto
int calcularProduto(int a, int b) {
    return a * b;
}

// Função para exibir resultado
void exibirResultado(char *operacao, int resultado) {
    printf("%s: %d\n", operacao, resultado);
}

// Programa principal
int main() {
    int num1, num2;
    
    lerNumeros(&num1, &num2);
    
    int soma = calcularSoma(num1, num2);
    exibirResultado("Soma", soma);
    
    int produto = calcularProduto(num1, num2);
    exibirResultado("Produto", produto);
    
    return 0;
}
```

#### Vantagens da Modularização

1. **Legibilidade**: Código mais fácil de ler e entender
2. **Manutenção**: Correções e melhorias simplificadas
3. **Reusabilidade**: Funções podem ser usadas em diferentes programas
4. **Testabilidade**: Cada função pode ser testada isoladamente
5. **Trabalho em equipe**: Diferentes desenvolvedores trabalham em módulos diferentes
6. **Depuração**: Mais fácil identificar e corrigir erros

#### Boas Práticas

- Nome descritivo para as funções
- Uma função = uma responsabilidade
- Funções pequenas (máximo 50 linhas)
- Documentar parâmetros e retorno
- Evitar efeitos colaterais indesejados

---

## ETAPA 3 – DESENVOLVIMENTO DO PROGRAMA

### 3.1 Código-Fonte

Programa desenvolvido em Linguagem C que contempla:
- Estrutura `struct` chamada "dados" com 5 clientes
- Entrada de dados com estrutura de repetição
- Função para imprimir todos os dados
- Função para calcular somatória e média de idades

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declaração da struct dados como variável global
struct dados {
    int codigo;
    char nome[50];
    int idade;
    char sexo;
    float salario;
};

struct dados cliente[5];

// Primeira função: imprime todos os dados dos clientes
void imprimirDados(struct dados cli[]) {
    int i;
    
    printf("\n========================================");
    printf("\n       DADOS DOS CLIENTES CADASTRADOS");
    printf("\n========================================\n");
    
    for (i = 0; i < 5; i++) {
        printf("\n--- Cliente %d ---\n", i + 1);
        printf("Codigo: %d\n", cli[i].codigo);
        printf("Nome: %s\n", cli[i].nome);
        printf("Idade: %d anos\n", cli[i].idade);
        printf("Sexo: %c\n", cli[i].sexo);
        printf("Salario: R$ %.2f\n", cli[i].salario);
    }
    printf("\n========================================\n");
}

// Segunda função: calcula e retorna a somatória das idades
int somaIdades(struct dados cli[]) {
    int i, soma = 0;
    
    for (i = 0; i < 5; i++) {
        soma += cli[i].idade;
    }
    
    return soma;
}

// Função principal
int main() {
    int i;
    int somaTotal;
    float mediaIdade;
    
    printf("========================================\n");
    printf("  SISTEMA DE CADASTRO DE CLIENTES\n");
    printf("========================================\n");
    
    // Entrada de dados para os 5 clientes usando estrutura de repetição
    for (i = 0; i < 5; i++) {
        printf("\n--- Cadastro do Cliente %d ---\n", i + 1);
        
        printf("Digite o codigo: ");
        scanf("%d", &cliente[i].codigo);
        
        printf("Digite o nome: ");
        scanf(" %[^\n]", cliente[i].nome);  // Lê nome com espaços
        
        printf("Digite a idade: ");
        scanf("%d", &cliente[i].idade);
        
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &cliente[i].sexo);
        
        printf("Digite o salario: ");
        scanf("%f", &cliente[i].salario);
    }
    
    // Chama a primeira função para imprimir todos os dados
    imprimirDados(cliente);
    
    // Chama a segunda função para calcular a soma das idades
    somaTotal = somaIdades(cliente);
    
    // Calcula e imprime a média de idade no programa principal
    mediaIdade = (float)somaTotal / 5;
    
    printf("\n========================================");
    printf("\n         ESTATISTICAS");
    printf("\n========================================\n");
    printf("Soma total das idades: %d anos\n", somaTotal);
    printf("Media de idade dos clientes: %.2f anos\n", mediaIdade);
    printf("========================================\n");
    
    return 0;
}
```

---

### 3.2 Explicação do Código

#### Estrutura do Programa

**1. Bibliotecas Incluídas**
```c
#include <stdio.h>   // Entrada e saída (printf, scanf)
#include <stdlib.h>  // Funções de utilidade geral
#include <string.h>  // Manipulação de strings
```

**2. Declaração da Struct (Global)**
```c
struct dados {
    int codigo;      // Código único do cliente
    char nome[50];   // Nome completo (até 49 caracteres)
    int idade;       // Idade em anos
    char sexo;       // 'M' ou 'F'
    float salario;   // Salário em reais
};

struct dados cliente[5];  // Array para 5 clientes
```

**Justificativa da declaração global:**
- Acessível por todas as funções
- Conforme requisito da APO
- Facilita passagem de parâmetros

**3. Função imprimirDados()**
```c
void imprimirDados(struct dados cli[])
```

**Características:**
- **Tipo de retorno**: `void` (não retorna valor)
- **Parâmetro**: Array de estruturas
- **Função**: Exibe todos os dados formatados

**Laço de repetição:**
```c
for (i = 0; i < 5; i++) {
    printf("Codigo: %d\n", cli[i].codigo);
    // ...
}
```
- Percorre os 5 clientes
- Acessa cada campo da estrutura com `.`
- Formata a saída com `printf()`

**4. Função somaIdades()**
```c
int somaIdades(struct dados cli[])
```

**Características:**
- **Tipo de retorno**: `int` (retorna a soma)
- **Parâmetro**: Array de estruturas
- **Função**: Calcula somatória das idades

**Algoritmo:**
```c
int soma = 0;
for (i = 0; i < 5; i++) {
    soma += cli[i].idade;  // Acumula as idades
}
return soma;
```

**5. Função main()**

**Declaração de variáveis locais:**
```c
int i;              // Contador do loop
int somaTotal;      // Armazena retorno da função
float mediaIdade;   // Calcula média
```

**Entrada de dados com repetição:**
```c
for (i = 0; i < 5; i++) {
    // Leitura de cada campo
    scanf("%d", &cliente[i].codigo);
    scanf(" %[^\n]", cliente[i].nome);  // Espaço antes para consumir \n
    // ...
}
```

**Detalhes importantes:**
- `&cliente[i].codigo`: Endereço da variável (ponteiro)
- `cliente[i].nome`: Array já é ponteiro, não precisa de &
- `%[^\n]`: Lê string até encontrar nova linha (permite espaços)
- ` %c`: Espaço antes consome o Enter anterior

**Chamadas das funções:**
```c
imprimirDados(cliente);        // Exibe dados
somaTotal = somaIdades(cliente); // Calcula soma
```

**Cálculo da média:**
```c
mediaIdade = (float)somaTotal / 5;
```
- `(float)`: Conversão explícita (cast) para evitar divisão inteira
- Divisão por 5 (quantidade de clientes)

---

### 3.3 Compilação e Execução

#### No Windows (XAMPP/MinGW)

**Compilar:**
```bash
gcc programa_clientes.c -o programa_clientes.exe
```

**Executar:**
```bash
.\programa_clientes.exe
```

#### No Linux

**Compilar:**
```bash
gcc programa_clientes.c -o programa_clientes
```

**Executar:**
```bash
./programa_clientes
```

#### Exemplo de Execução

**Entrada de dados:**
```
========================================
  SISTEMA DE CADASTRO DE CLIENTES
========================================

--- Cadastro do Cliente 1 ---
Digite o codigo: 1001
Digite o nome: João Silva
Digite a idade: 28
Digite o sexo (M/F): M
Digite o salario: 3500.50

--- Cadastro do Cliente 2 ---
Digite o codigo: 1002
Digite o nome: Maria Santos
Digite a idade: 32
Digite o sexo (M/F): F
Digite o salario: 4200.00

[...]
```

**Saída do programa:**
```
========================================
       DADOS DOS CLIENTES CADASTRADOS
========================================

--- Cliente 1 ---
Codigo: 1001
Nome: João Silva
Idade: 28 anos
Sexo: M
Salario: R$ 3500.50

--- Cliente 2 ---
Codigo: 1002
Nome: Maria Santos
Idade: 32 anos
Sexo: F
Salario: R$ 4200.00

[...]

========================================
         ESTATISTICAS
========================================
Soma total das idades: 148 anos
Media de idade dos clientes: 29.60 anos
========================================
```

---

## REFERÊNCIAS

ASCENCIO, A. F. G.; CAMPOS, E. A. V. **Fundamentos da Programação de Computadores**: algoritmos, Pascal, C/C++ e Java. 2. ed. São Paulo: Pearson Prentice Hall, 2007.

FORBELLONE, A. L. V.; EBERSPÄCHER, H. F. **Lógica de Programação**: a construção de algoritmos e estruturas de dados. 3. ed. São Paulo: Pearson Prentice Hall, 2005.

GUEDES, S. **Lógica de programação algorítmica**. São Paulo: Pearson Prentice Hall, 2014.

MIZRAHI, V. V. **Treinamento em linguagem C**: módulo 1. 2. ed. São Paulo: Pearson Prentice Hall, 2008.

MIZRAHI, V. V. **Treinamento em linguagem C**: módulo 2. 2. ed. São Paulo: Pearson Prentice Hall, 2008.

---

**Trabalho elaborado em conformidade com as normas da ABNT e requisitos da Atividade Prática Orientada (APO) da disciplina de Algoritmos e Fundamentos de Programação de Computadores.**

---

**Novembro de 2025**
