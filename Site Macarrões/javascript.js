document.addEventListener("DOMContentLoaded", function () {
    var links = document.querySelectorAll('.nav-list a');
    links.forEach(function (link) {
      link.addEventListener('click', function (event) {
        event.preventDefault();
  
        var targetId = this.getAttribute('href').substring(1);
        var targetElement = document.getElementById(targetId);
  
        if (targetElement) {
          targetElement.scrollIntoView({ behavior: 'smooth' });
        }
      });
    });
});
function Enviar() { 
  var val = document.getElementById("valido");
  try {
      var x = document.forms["meuForm"]["nome"].value;
      if (x == null || x == "") {
          throw "O Nome deve ser preenchido!";
  }
  var y = document.forms["meuForm"]["email"].value;
  var atpos = y.indexOf("@");
  var dotpos = y.lastIndexOf(".");
  if (atpos < 1 || dotpos < atpos + 2 || dotpos + 2 >= y.length){
      throw "Digite um e-mail válido!";
  }
  return true;
  } catch (err) {
      val.style.color = "#FFFFFF"; 
      val.innerHTML = "Erro: " + err; 
      return false;
      } 
} 
;