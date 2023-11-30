public class Transacao {
    private int Id;
    private String FormaPagamento;
    private String Data;
    private String Horario;

    public Transacao(int Id, String FormaPagamento, String Data, String Horario) {
        this.Id = Id;
        this.FormaPagamento = FormaPagamento;
        this.Data = Data;
        this.Horario = Horario;
    }

    public int getId() {
        return Id;
    }

    public void setId(int Id) {
        this.Id = Id;
    }

    public String getFormaPagamento() {
        return FormaPagamento;
    }

    public void setFormaPagamento(String FormaPagamento) {
        this.FormaPagamento = FormaPagamento;
    }

    public String getData() {
        return Data;
    }

    public void setData(String Data) {
        this.Data = Data;
    }

    public String getHorario() {
        return Horario;
    }

    public void setHorario(String Horario) {
        this.Horario = Horario;
    }
    
    
}
