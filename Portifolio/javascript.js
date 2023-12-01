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