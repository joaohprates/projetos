package modelo;

public class Pessoa {
    private Integer Id;
    private String Nome;
    private String Endereco;
    private String Cpf;
    private String Documento;
    private String Celular;
    private String Email;
    private char Senha;
    private char Senha2;
    
    public Pessoa(Integer Id, String Nome, String Endereco, String Cpf, String Documento, String Celular, String Email) {
        this.Id = Id;
        this.Nome = Nome;
        this.Endereco = Endereco;
        this.Cpf = Cpf;
        this.Documento = Documento;
        this.Celular = Celular;
        this.Email = Email;
        this.Senha = Senha;
        this.Senha2 = Senha2;
    }

    public Pessoa(Integer Id, String Nome, String Cpf, String Documento, String Endereco, String Celular, String Email, char[] Senha, char[] Senha2) {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    public char getSenha2() {
        return Senha2;
    }

    public void setSenha2(char Senha2) {
        this.Senha2 = Senha2;
    }

    public char getSenha() {
        return Senha;
    }

    public void setSenha(char Senha) {
        this.Senha = Senha;
    }

    public Integer getId() {
        return Id;
    }
    

    public void setId(Integer Id) {
        this.Id = Id;
    }

    public String getNome() {
        return Nome;
    }

    public void setNome(String Nome) {
        this.Nome = Nome;
    }

    public String getEndereco() {
        return Endereco;
    }

    public void setEndereco(String Endereco) {
        this.Endereco = Endereco;
    }

    public String getCpf() {
        return Cpf;
    }

    public void setCpf(String Cpf) {
        this.Cpf = Cpf;
    }

    public String getDocumento() {
        return Documento;
    }

    public void setDocumento(String Documento) {
        this.Documento = Documento;
    }

    public String getCelular() {
        return Celular;
    }

    public void setCelular(String Celular) {
        this.Celular = Celular;
    }

    public String getEmail() {
        return Email;
    }

    public void setEmail(String Email) {
        this.Email = Email;
    }
    @Override
    public String toString() {
        return Nome;
    }
}
    