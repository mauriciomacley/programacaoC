 Super Trunfo de Cidades – Nível Mestre (Linguagem C)

Este projeto é o resultado do desafio proposto na disciplina de Programação em C da Estácio.  
No **nível mestre**, o objetivo foi criar um sistema completo de **cadastro**, **cálculo** e **batalha de cartas** entre cidades no estilo Super Trunfo.

---

##  Funcionalidades Implementadas

 Cadastro de duas cartas contendo:
- Estado (char)
- Código da Carta (string)
- Nome da Cidade (string com espaços)
- População (`unsigned long int`)
- Área (`float`)
- PIB em bilhões (`float`)
- Número de pontos turísticos (`int`)

 Cálculos automáticos:
- **Densidade Populacional** = população / área
- **PIB per Capita** = (PIB * 1 bilhão) / população
- **Super Poder** = soma de:
  - população
  - área
  - PIB (convertido para reais)
  - pontos turísticos
  - PIB per capita
  - **1 dividido pela densidade populacional** (quanto menor a densidade, maior o poder)

 Comparações entre os atributos das duas cartas:
- Quem vence em:
  - População
  - Área
  - PIB
  - Pontos turísticos
  - PIB per capita
  - **Densidade populacional (menor vence)**
  - Super Poder
- Resultado impresso: `1` (Carta 1 venceu) ou `0` (Carta 2 venceu)

---

##  Restrições Atendidas

- ❌ Sem uso de estruturas de repetição (`for`, `while`)
- ❌ Sem uso de estruturas de decisão (`if`, `else`)
-  Utilização apenas da biblioteca padrão `<stdio.h>`
-  Código formatado, legível, organizado e comentado
-  Operações com **conversão correta de tipos** (inteiros e floats)

---

**Aluno:** Mauricio Castro  
- **Curso:** Redes de Computadores  
- **Faculdade:** Estácio  
- **Desafio:** Nível Mestre – Programação em C



