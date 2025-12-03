package Marlon.Lists.model;

public class Joe {

    private String name;
    private String serialNumber;

    public Joe(String name, String serialNumber) {
        this.name = name;
        this.serialNumber = serialNumber;
    }

    public String getName() {
        return name;
    }

    public String getSerialNumber() {
        return serialNumber;
    }

    @Override
    public String toString() {
        return "Joe{" + "name='" + name + '\'' + ", serialNumber='" + serialNumber + '\'' + '}';
    }
}