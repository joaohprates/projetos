package modelo;

public class Reserva {
    private Integer Id;
    private String Camas;
    public String DtEntrada;
    public String DtSaida;
    private Integer Qtde;
    

    public Reserva(Integer Id, String DtEntrada, String DtSaida, String Camas) {
        this.Id = Id;
        this.Qtde = Qtde;
        this.DtEntrada = DtEntrada;
        this.DtSaida = DtSaida;
        this.Camas = Camas;
    }

    public Reserva(Object object, String DtEntrada, String DtSaida) {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    public int getId() {
        return Id;
    }

    public void setId(Integer Id) {
        this.Id = Id;
    }

    public String getDtEntrada() {
        return DtEntrada;
    }

    public void setDtEntrada(String DtEntrada) {
        this.DtEntrada = DtEntrada;
    }

    public String getDtSaida() {
        return DtSaida;
    }

    public void setDtSaida(String DtSaida) {
        this.DtSaida = DtSaida;
    }

    public String getCamas() {
        return Camas;
    }

    public void setCamas(String Camas) {
        this.Camas = Camas;
    }

    public Integer getQtde() {
        return Qtde;
    }

    public void setQtde(Integer Qtde) {
        this.Qtde = Qtde;
    }

    @Override
    public String toString() {
        return Camas + " Cama(s)" + ", DtEntrada = " + DtEntrada + ", DtSaida = " + DtSaida;
    }
    
    
}
