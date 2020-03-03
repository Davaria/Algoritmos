class Client {
  constructor(id, name, credit, address){
    this.id = id;
    this.name = name;
    this.credit = credit;
    this.address = address;
  }

  getData = () => {
    console.log(`Id: ${this.id}\nNombre: ${this.name}\nCredito: ${this.credit}\nDireccion: ${this.address}`);
  }
}

let client = new Client(10000, 'Luis Davaria','30000', 'Av.Pedro P.Diaz Mz.31 Lt.1')

client.getData();