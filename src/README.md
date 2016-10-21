#AU3: Liste des notes

| Etudiant       | Note         |
| ---------------|--------------|
{% for etudiant in etudiants %}| {{etudiant}} |    |
{% endfor %}