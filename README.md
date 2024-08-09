# Sistema de Gestão Acadêmica

Este projeto é um sistema de gestão acadêmica desenvolvido em C. Ele permite cadastrar alunos, disciplinas, realizar matrículas, alterar dados, cancelar registros, gerar relatórios e excluir registros. O sistema utiliza uma interface de linha de comando com navegação por menus.

## Funcionalidades

- **Cadastrar Alunos**: Adicionar novos alunos ao sistema.
- **Cadastrar Disciplinas**: Adicionar novas disciplinas ao sistema.
- **Matrícula**: Matricular alunos em disciplinas.
- **Alterar Dados**: Modificar informações de alunos, disciplinas ou matrículas.
- **Cancelar Registros**: Cancelar matrículas de alunos.
- **Relatórios**: Gerar relatórios de alunos cadastrados, disciplinas e matrículas.
- **Excluir Registros**: Excluir alunos ou disciplinas do sistema.

## Estrutura do Código

O código está estruturado da seguinte forma:

- **Structs**:
  - `aluno`: Armazena o RA e o nome do aluno.
  - `date`: Armazena a data de criação do curso ou matrícula.
  - `cursos`: Armazena informações sobre as disciplinas, como nome, código, número de vagas e tipo.
  - `alunocurso`: Relaciona alunos e cursos através do RA e do código da disciplina.

- **Funções Principais**:
  - `menu()`: Exibe o menu principal e captura a opção escolhida pelo usuário.
  - `buscaNOME()`, `buscaCOD()`, `buscaRA()`, etc.: Funções de busca para encontrar registros no sistema.
  - `cadastrarALUNO()`: Cadastra novos alunos no sistema.
  - `cadastrarCURSO()`: Cadastra novas disciplinas no sistema.
  - `menuAlterar()`, `menuExcluir()`, `menuRelatorio()`: Menus específicos para cada funcionalidade do sistema.

## Requisitos

- **Compilador C**: Para compilar e executar o código.
- **Biblioteca `conio2.h`**: Necessária para funções como `gotoxy` e manipulação de cores e posições na tela. Pode ser necessário instalar esta biblioteca dependendo do seu ambiente de desenvolvimento.

## Como Usar

1. Compile o código usando um compilador C que suporte a biblioteca `conio2.h`.
2. Execute o programa. O menu principal será exibido.
3. Use as teclas de navegação para selecionar uma opção e pressione `Enter` para confirmar.
4. Siga as instruções na tela para realizar as operações desejadas.

## Observações

- O sistema utiliza uma interface de linha de comando com navegação por menus.
- Certifique-se de que a biblioteca `conio2.h` está corretamente configurada no seu ambiente de desenvolvimento.
- Este código foi desenvolvido para fins educacionais e pode ser adaptado conforme necessário.

## Contribuições

Contribuições são bem-vindas! Sinta-se à vontade para abrir uma issue ou enviar um pull request com melhorias ou correções.

## Licença

Este projeto é de código aberto e está licenciado sob a [MIT License](LICENSE).
