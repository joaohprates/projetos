public class Quarto {
    private int Id;
    private int Andar;
    private int Numero;

    public Quarto(int Id, int Andar, int Numero) {
        this.Id = Id;
        this.Andar = Andar;
        this.Numero = Numero;
    }

    public int getId() {
        return Id;
    }

    public void setId(int Id) {
        this.Id = Id;
    }

    public int getAndar() {
        return Andar;
    }

    public void setAndar(int Andar) {
        this.Andar = Andar;
    }

    public int getNumero() {
        return Numero;
    }

    public void setNumero(int Numero) {
        this.Numero = Numero;
    }
    
    
}
