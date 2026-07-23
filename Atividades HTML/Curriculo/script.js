// 1. Pega o botão do HTML e guarda numa variável (parecido com um ponteiro pro elemento)
const botaoTema = document.getElementById("btn-tema");

// 2. "Escuta" o clique e roda a função sempre que ele acontecer
botaoTema.addEventListener("click", function () {
  // classList.toggle: se a classe "escuro" não existe no body, adiciona; se existe, remove
  document.body.classList.toggle("escuro");
});